#!/usr/bin/env bash
source ../common.sh

# Tests that Lake properly exits before normal builds occur
# when `--no-build` is passed on the command line.

./clean.sh

NO_BUILD_CODE=3

# Test `--no-build` for setup-file and module builds (`buildUnlessUpToDate`)
echo "# TEST: --no-build setup-file & modules"
test_status $NO_BUILD_CODE setup-file ImportTest.lean --no-build
test_err "Building Test" setup-file ImportTest.lean --no-build
test_status $NO_BUILD_CODE setup-file ImportTest.lean --no-build > produced.out 2>&1
match_text '"directImports"' produced.out
match_text '"module":"Test"' produced.out
match_text '"sourcePath":' produced.out
match_text '"oleanPath":' produced.out
test_exp ! -d .lake/build
test_exp ! -f .lake/build/lib/lean/Test.olean
test_run build Test
test_exp -f .lake/build/lib/lean/Test.olean
test_run setup-file ImportTest.lean --no-build

echo "# TEST: --no-build setup-file stale direct import after source edit"
cat > Test.lean <<'EOF'
/-! Module used by the `setup-file --no-build` stale import metadata test. -/

def new := 1
EOF
cat > ImportTest.lean <<'EOF'
import Test

/-! Imports `Test` after its source changes without rebuilding. -/

#check new
EOF
test_status $NO_BUILD_CODE setup-file ImportTest.lean --no-build > produced.out 2>&1
match_text '"directImports"' produced.out
match_text '"module":"Test"' produced.out
match_text '"sourcePath":' produced.out
match_text '"oleanPath":' produced.out
test_run build Test

# Test `--no-build` for file builds (`buildFileUnlessUpToDate`)
echo "# TEST: --no-build file"
test_status $NO_BUILD_CODE build +Test:c.o.export --no-build
test_err "Building Test:c.o" build +Test:c.o.export --no-build
test_exp ! -f .lake/build/ir/Test.c.o.export
test_run build +Test:c.o.export
test_exp -f .lake/build/ir/Test.c.o.export
test_out "All targets up-to-date" build +Test:c.o.export --no-build

# cleanup
: > Test.lean
cat > ImportTest.lean <<'EOF'
import Test
EOF
rm -f produced.out

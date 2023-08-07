# Makefile's extension for afl, libfuzzer and honggfuzz

# Compiling with instrumentation for afl fuzzing
# O2: mid-level optimization
# -Wall -W: All build warnings enabled
# -ansi -pedantic: Requires the compiler to conform to the ANSI C standard
afl:
	afl-clang -o fuzzer-afl-decompress -O2 -Wall -W -ansi -pedantic smaz.c main-decompress.c
	afl-clang -o fuzzer-afl-compress -O2 -Wall -W -ansi -pedantic smaz.c main-compress.c


libfuzzer:
	clang -g -O1 -ansi -Wall -pedantic -W -fsanitize=fuzzer,address target-decompress.c smaz.c -o fuzzer-libfuzzer-decompress
	clang -g -O1 -ansi -Wall -pedantic -W -fsanitize=fuzzer,address target-compress.c smaz.c -o fuzzer-libfuzzer-compress

honggfuzz:
	hfuzz-clang -O2 -ansi -Wall -W -pedantic smaz.c main-decompress.c -o fuzzer-honggfuzz-decompress
	hfuzz-clang -O2 -ansi -Wall -W -pedantic smaz.c main-compress.c -o fuzzer-honggfuzz-compress


# Makefile's extension for libfuzzer

libfuzzer:
	clang -g -O1 -fsanitize=fuzzer,address target-compress.c shoco.c -o libfuzzer-compress
	clang -g -O1 -fsanitize=fuzzer,address target-decompress.c shoco.c -o libfuzzer-decompress
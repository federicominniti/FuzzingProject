#include <stdio.h>
#include <stdint.h>
#include "smaz.h"
int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
    char* input = (char*)data;
    char buffer[8192];
    smaz_decompress(input, size, buffer, 8192);
    return 0;
}

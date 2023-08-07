#include "shoco.h"
#include <stdint.h>

// fuzz_target.cc
int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  char buffer[8192] = {0};
  char* bytes = (char*)data;
  shoco_compress(bytes, size, buffer, 8192);
  return 0;  // Values other than 0 and -1 are reserved for future use.
}



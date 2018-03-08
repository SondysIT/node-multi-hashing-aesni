#ifndef CRYPTONIGHT_DARK_H
#define CRYPTONIGHT_DARK_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void cryptonight_dark_hash(const char* input, char* output, uint32_t len);
void cryptonight_dark_fast_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif

#ifndef __CCITY_HEADER__
#define __CCITY_HEADER__

#include <stdint.h>

extern "C" void ccity_hash128(uint8_t *data, uint32_t size, uint64_t *pair);
extern "C" uint64_t ccity_hash128_64(uint8_t *data, uint32_t size);

#endif

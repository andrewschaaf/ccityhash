#include <stdint.h>
#include "cityhash/city.h"

extern "C" void ccity_hash128(uint8_t *data, uint32_t size, uint64_t *pair) {
  uint128 hash128 = CityHash128((const char *)data, size);
  pair[0] = Uint128Low64(hash128);
  pair[1] = Uint128High64(hash128);
}

extern "C" uint64_t ccity_hash128_64(uint8_t *data, uint32_t size) {
  uint128 hash128 = CityHash128((const char *)data, size);
  return Hash128to64(hash128);
}

Whereas...

- Google's `cityhash` is pretty awesome
- Sometimes you want to use `cityhash` without C++ifying your project
- `city.h` (not just `city.cc`) requires C++, so including it as a static library won't help

This trivial project defines two wrapper functions

```c++
extern "C" void ccity_hash128(uint8_t *data, uint32_t size, uint64_t *pair) {
  uint128 hash128 = CityHash128((const char *)data, size);
  pair[0] = Uint128Low64(hash128);
  pair[1] = Uint128High64(hash128);
}

extern "C" uint64_t ccity_hash128_64(uint8_t *data, uint32_t size) {
  uint128 hash128 = CityHash128((const char *)data, size);
  return Hash128to64(hash128);
}
```

and a build script

    bash build.sh

so that you can easily use `ccity.{h,a}` in your project without letting the C++ infection spread.

## Licenses

- cityhash: permissive ([cityhash/cityhash-license.txt](https://github.com/andrewschaaf/ccityhash/blob/master/cityhash/cityhash-license.txt))
- this C wrapper: permissive ([LICENSE.txt](https://github.com/andrewschaaf/ccityhash/blob/master/LICENSE.txt))

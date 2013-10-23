Whereas...

- `cityhash` is pretty awesome
- Sometimes you want to use `cityhash` without C++ifying your project
- `city.h` (not just `city.cc`) requires C++, so including it as a static library won't help

This project is a wrapper which provides a C99-friendly `ccity.h`:

    void ccity_hash128(uint8_t *data, uint32_t size, uint64_t *pair);
    uint64_t ccity_hash128_64(uint8_t *data, uint32_t size);

## Creating `ccity.{h,a}`

    bash build.sh

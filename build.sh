mkdir -p build
rm -rf build && \
  mkdir -p build && \
  cd build && \
  g++ -c ../cityhash/city.cc && \
  g++ -c ../ccity.cc && \
  ar rvs ccity.a city.o ccity.o && \
  echo 'Done.'

#include <stdio.h>

#include "boost/filesystem.hpp"

int main() {
  boost::filesystem::path path("/usr/local/bin");

  printf("%d\n", (int)path.is_absolute());
  return 0;
}
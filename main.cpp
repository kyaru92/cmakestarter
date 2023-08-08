#include <stdio.h>

int main() {
#ifdef GLOBALDEF
  printf("-DGLOBALDEF √\n");
#endif
#ifdef CUSTOMDEF
  printf("-DCUSTOM √\n");
#endif
}
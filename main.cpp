#include <stdio.h>
#include <string.h>
#include <string>

#include "AddressBook.pb.h"
#include "ver.h"

int main() {
  printf("App Version: %s\n", ver);

  tutorial::AddressBook ab;
  auto p = ab.add_person();
  p->set_name("John");
  p->set_id(10);
  p->set_email("john@e.com");
  std::string result = ab.SerializeAsString();
  for (char c : result) {
    if (isprint(c)) {
      printf("%c", c);
    } else {
      printf(".");
    }
  }
  printf("\n");

  return 0;
}
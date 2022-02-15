#include "types.h"
#include "stat.h"
#include "user.h"
#include "cnt.h"

int
main(int argc, char *argv[]) {
  struct cnt c = {0, 0, 0, 0, 0, 0, 0};
  count(&c);
  exit();
}

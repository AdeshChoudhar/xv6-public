#include "types.h"
#include "stat.h"
#include "user.h"
#include "cnt.h"

int main(int argc, char *argv[]) {
  if (argc > 1) {
    printf(1, "Usage: newsycall\n");
    exit();
  }
  struct cnt *p;
  int ret = count(&p);
  if (ret < 0) {
    printf(1, "newsycall: call error\n");
    exit();
  }
  printf(1, "Fork: %d\n", p->fork);
  exit();
}

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
  printf(1, "Runnable: %d\n", p->runnable);
  printf(1, "Sleeping: %d\n", p->sleeping);
  printf(1, "Zombie: %d\n", p->zombie);
  printf(1, "Scheduling: %d\n", p->scheduling);
  printf(1, "Keyboard interrupts: %d\n", p->keyboard_interrupts);
  printf(1, "Total traps: %d\n", p->total_traps);
  exit();
}

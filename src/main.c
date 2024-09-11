#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

#include "parent.h"

int main() {
  pid_t child = Parent();
  pid_t child2 = Parent();
  pid_t child3 = Parent();
  wait(child);
  wait(child2);
  wait(child3);

  return 0;
}
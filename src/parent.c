#include "parent.h"

void Parent(int a) {
  pid_t p = fork();
  if (a == 1) {
    pid_t p = 0;
  }
  if (p == 0) {
    printf("I'm a child, and my id is: %d\n", getpid());
    execlp("./greetings", "./greetings", NULL);
  } else {
    execlp("./greetings", "./greetings", NULL);
  }
}
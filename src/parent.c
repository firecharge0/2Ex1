#include "parent.h"

pid_t Parent() {
  pid_t p = fork();
  if (p == 0) {
    printf("I'm a child, and my id is: %d\n", getpid());
    p = fork();
    if (p == 0) {
      execlp("./greetings", "./greetings", NULL);
      exit(0);
    }
    pid_t temp = p;
    p = fork();
    if (p == 0) {
      execlp("./greetings", "./greetings", NULL);
      exit(0);
    }
    wait(temp);
    wait(p);
    exit(0);
  }
  return p;
}
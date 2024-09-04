#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

#include "parent.h"

int main() {
  int bloodline = 0;
  Parent(bloodline);
  bloodline = 1;
  Parent(bloodline);
  Parent(bloodline);
  return 0;
}
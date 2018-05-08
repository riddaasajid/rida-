#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#define FIFO_PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
int main()
{
  if (mkfifo("myfifo", FIFO_PERMS) == -1)
  printf("Failed to create myfifo");
  else
    printf("successful to create myfifo");
}
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
  {
printf("pid:%d!\n",getpid());
  printf("uid:%d!\n",getuid());
  printf("uid:%d!\n",gettid());
}

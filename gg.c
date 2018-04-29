#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
printf("pid:%d!\n",getpid());
  printf("tid:%d!\n",gettid());
  printf("uid:%d!\n",getuid());
  printf("gid:%d!\n",getgid());
}
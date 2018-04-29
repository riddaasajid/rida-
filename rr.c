# define _GNU_SOURCEU
#include<unistd.h>
#include<sys/syscall.h>
#include<sys/types.h>
#include<stdio.h>
int main(int argc,char argv[])
{
 int pid,gid,ppid,tid,uid;
printf("thread pid %li \n",syscall(SYS_getpid));
  printf("thread gid %li \n",syscall(SYS_getgid));
  printf("thread ppid %li \n",syscall(SYS_getppid));
  printf("thread tid %li \n",syscall(SYS_gettid));
  printf("thread uid %li \n",syscall(SYS_getuid));
  printf("\n HELLO WORLD \n ");
}
 

#include <sys/types.h>
#include <string.h>

int main(int argc,char argv[])
{
  
  FILE*fp;
  fp=fopen("s.txt","w+");
  char env[50];
   long int tid,pid;
 strcpy(env,getenv("HOME "));
  printf("home %s \n",env);
  fprintf(fp,"%s \n",env);
  pid=getpid();
  printf("pid= %li \n",pid);
  fprintf(fp,"process id ");
  fprintf(fp,"%li ",pid);
          tid=syscall(SYS_gettid);
          printf("thread id= %li ",tid);
          fprintf(fp,"thread id \n ");
          fprintf(fp,"%li",tid);
          fclose(fp);
                  }   
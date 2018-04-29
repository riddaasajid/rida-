#include<stdio.h>
main()
{
  char ch;
  FILE *fp;
  fp=fopen("s.txt","r");
  if (fp==NULL)
  {
    printf("error while opening");
  
  }
  while ((ch=fgetc(fp)) !=EOF)
    printf("%c",ch);
  fclose(fp);
  return 0;
  
}
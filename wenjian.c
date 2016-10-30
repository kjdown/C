#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE* fp;
  char ch,filename[10];
  printf("Please open a file");
  scanf("%s",filename);
  if((fp=fopen(filename,"w"))==NULL)
    {
      printf("can non't open this file");
      exit(0);
    }
  ch=getchar();
  printf("please enter a String that ready store in disk");
  ch=getchar();
  while(ch!='#')
    {
      fputc(ch,fp);
      putchar(ch);
      ch=getchar();
    }
  fclose(fp);
  putchar(10);
  return 0;
}

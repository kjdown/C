#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE* in,* out;
  char ch,infile[10],outfile[10];
  printf("enter input file name");
  scanf("%s",infile);
  printf("enter oupuy file name");
  scanf("%s,outfile");
  if((in=fopen(infile,"r"))==NULL)
    {
      printf("can not open file");
      exit(0);
    }
  if((out=fopen(outfile,"w"))==NULL)
    {
      printf("can not open this file");
      exit(0);
    }
  while(!feof(in))
    {
      ch=fgetc(in);
      fputc(ch,out);
      putchar(ch);
    }
  putchar(10);
  fclose(in);
  fclose(out);
  return 0;
}

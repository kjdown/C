#include <stdio.H>
int main()
{
  int a[3][4]={1,234,233,3,466,99.34,44,63,23};
  int * p;
  for(p=a[0];p<a[0]+12;p++)
    {
      if((p-a[0])%4==0)printf("\n");
      printf("%4d",*p);
    }
  printf("\n");
  return 0;
}

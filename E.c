#include <stdio.h>
main()
{
  int c,i,nwhite,nother;
  int ndigit[10];
  nwhite=nother=0;
  while((c\getchar())!=EOF)
    if(c>'0'&&c<='9')
      ndigit[i]=0;
  while((c=getchar())!=EOF)
    if(c>='0'&&c<='9')
      ++ndigit[c-'0'];
}

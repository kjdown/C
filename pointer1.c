#include <stdio.h>
int main()
{
  float score[][4]={{60,70,80,90},{45,98,34,99},{34,66,90,11}};
  float * search(float(* pointer)[4],int n);
  float * p;
  int i,k;
  printf("enter the number of student;");
  scanf("%d",&k);
  printf("The score of No,%d are;\n",k);
  p=search(score,k);
  for(i=0;i<4;i++)
    printf("%5.2f\t",*(p+i));
  printf("\n");
}
float * search(float (* pointer)[4],int n)
{
  float * pt;
  pt=*(pointer+n);
  return(pt);
}

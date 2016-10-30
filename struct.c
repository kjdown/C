#include<stdio.h>
struct Student{
  int num;
  float score;
  struct Student * next;};
int main(){
  struct Student a,b,c,*head,*p;
  a.num=10101;a.score=88.0;
  b.num=22222;b.score=89.9;
  c.num=10123;c.score=93.2;
  head=&a;
  a.next=&b;
  b.next=&c;
  p=head;
  do{
    printf("%ld%5.1\n",p->num,p->score);
    p=p->next;
  }while(p!=NULL);
  return 0;
}

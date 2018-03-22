#include<stdio.h>
int main()
{
 int a,s,n,r=0;
 scanf("%d",&a);
 n=a;
 while(n!=0)
 {
  s=n%10;
  r=r*10+s;
  n=n/10;
  }
  printf("%d",r);
}

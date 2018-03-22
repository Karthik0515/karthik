#include<stdio.h>
#include<string.h>
int main()
{
 char a[10];
 int i,b;
 fgets(a,10,stdin);
 b=strlen(a);
 for(i=b;i>=0;i--)
 {
 printf("%c",a[i]);
 }
 return 0;
}

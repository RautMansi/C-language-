#include<stdio.h>
int main()
{
  int a=8,b=3,c=0;
  double d=0.0;

  c=a+b;
  printf("a+b=%d/n",c);

  c=a-b;
  printf("a-b=%d/n",c);

  c=a*b;
  printf("a*b=%d/n",c);

  d=a/(float)b;
  printf("a/b=%2f/n",d);
 
  c=a%b;
  printf("remainder when a dividend by=%d/n",c);
}

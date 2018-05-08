#include<stdio.h>
#include<stdlib.h>

#include "sum.h"
#include "print.h"

int main()
{
  int a,b;
  printf("Please input a  number:");
  scanf("%d",&a);
  printf("Please input a number:");
  scanf("%d",&b);

  int num= sum(a,b);
  print(num);
  exit (0);
}
    

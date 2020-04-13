#include <stdio.h>
#include <string.h>

int a;
char b;
char c[50];

int main(){
  printf("before assigning.\n");
  printf("int a is: %d\n", a);
  printf("char b is: %c\n", b);
  printf("char buff c is: %s\n", c); 
  a=1;
  b=0x62;
  strcpy(c,"hello");
  printf("\n");
  printf("after assigning.\n");
  printf("int a is: %d\n", a);
  printf("char b is: %c\n", b);
  printf("char buff c is: %s\n", c); 
}
#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
  long c=a+b;
  return c;
}

int main(int argc,char* argv[]){
  int a = strtol(argv[1], NULL, 10);
  int b = strtol(argv[2], NULL, 10);
  int c=sum(a,b);
  return c;
}

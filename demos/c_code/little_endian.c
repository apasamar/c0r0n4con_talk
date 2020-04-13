#include<stdio.h>

int main (int argc){
   char *p=&argc;
   printf ("Endianness: %s\n",*p?"little":"big");
   printf ("%x %x %x %x\n",p[0],p[1],p[2],p[3]);
}

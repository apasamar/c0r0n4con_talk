#include <stdio.h>
#include <stdlib.h>

#define MYWORD "c0r0n4c0n"

char array[100]="Hello C0r0n4c0n!";
char *p="bye, bye, c0r0n4c0n!";

int main(){
	char local[4]="hi!";
	int *q=malloc(sizeof(int));
	*q=5;
	printf("%s\n",MYWORD);
	printf("%s\n",array);
	printf("%s\n",p);
	printf("%s\n",array);
	printf("%d\n",q);
}

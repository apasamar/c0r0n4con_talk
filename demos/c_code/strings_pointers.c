#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	/* main code */
	printf("Number of parameters is %d\n", argc);
	for(int i=0 ; i<argc ; i++){
		printf("Argument %i is \"%s\"\n\n",i,argv[i]);
	}
	char *array[]={"ann","bob","charlie","david",""};
	int d=0;
	while(*array[d]){
		printf("Position %d has memory address %p and string at that address is \"%s\"\n",d,array[d],(char *)array[d]);
		d++;
	}
	return 0;
}

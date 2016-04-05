#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	char foo[3] = "ls";
	char bar[5];

    printf("Please inter text.\n");
	gets((char*)&bar);
	printf("Command executed: %s\n", foo);	
	system(foo);
}

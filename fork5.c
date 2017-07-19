
#include <stdio.h>
#include <unistd.h>

int
main(int argc, char **argv) {
	int i;
	printf("\nCase 5");
	for(i=0;i<5;i++)
	{
	fork();
	}
	printf("This is process %d\n" , getpid());
}

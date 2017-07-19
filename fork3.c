
#include <stdio.h>
#include <unistd.h>

int
main(int argc, char **argv) {
	printf("\n Case 3 ");
	fork(); fork(); fork();
	printf("This is process %d\n" , getpid());
}

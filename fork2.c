
#include <stdio.h>
#include <unistd.h>

int
main(int argc, char **argv) {
        printf("Case 2: \n");
	fork(); fork();
	printf("This is process %d\n" , getpid());
}

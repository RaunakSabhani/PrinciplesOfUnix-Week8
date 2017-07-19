
#include <stdio.h>
#include <unistd.h>

int
main(int argc, char **argv) {
	printf("\nCase 4");
	pid_t pid;
	pid_t pid2;
	if ((pid = fork()) && (pid2 = fork())) {
	fork();
	}
	printf("This is process %d\n" , getpid());
}

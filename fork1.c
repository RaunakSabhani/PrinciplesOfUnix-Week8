#include <stdio.h>
#include <unistd.h>

int
main(int argc, char **argv) {
	printf("\nCase 1");
	pid_t pid;
	pid_t pid2;
	int i;
	pid = fork();
	printf("This is process %d\n" , getpid());
}

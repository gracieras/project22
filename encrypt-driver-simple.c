#include <stdio.h>
#include "encrypt-module.h"

void reset_requested() 
{
	log_counts();
}

void reset_finished() 
{
	
}

int main(int argc, char *argv[]) {
	init("in.txt", "out.txt", "log.txt"); 
	char c;
	while ((c = read_input()) != EOF) { 
		count_input(c); 
		c = encrypt(c); 
		count_output(c); 
		write_output(c); 
	} 
	printf("End of file reached.\n"); 
	log_counts();
}

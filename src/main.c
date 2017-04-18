#include <stdio.h>
#include "deposit.h"

int main(void) {
	int term;
	int contrib;	

	printf("Enter the amount of your deposit: ");
	scanf("%d", &contrib);
	printf("Enter the term of the deposit: ");
	scanf("%d", &term);
	
	if (Input(term, contrib)) return 0;
	contrib = Process(term, contrib);
	
	printf("Term: %d \nContribution: %d", term, contrib);
	printf("\n");
	return 0;
} 

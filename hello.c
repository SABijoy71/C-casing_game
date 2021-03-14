#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int generate_number,given_number;
	bool check_win = false;
	time_t t;

	srand((unsigned)time(&t));

	generate_number = rand() % 10 + 1;

	scanf("%d", &given_number); // read a input number;

	if(generate_number == given_number){
		
		check_win  = true;
	}else {
		check_win = false;
	}

	if( check_win){
		printf("You win\n");
	}else {
		printf("You loss and the generate number was %d\n", generate_number);
	}

	return 0;
}
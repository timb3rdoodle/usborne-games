#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1
#define G_MAX 20
#define W_MAX 40

int main(void) {
	/* set the needed variables, clear the system, 
	 * generate random numbers, and start the game!*/
	int g, w, r, f, c;
	system("clear");
	srand(time(NULL));
	printf("STARSHIP TAKE-OFF\n");
	g = (rand() % (G_MAX - MIN + 1)) + MIN;
	w = (rand() % (W_MAX - MIN + 1)) + MIN;

	/*set the amount of force needed to win*/
	r = g * w;

	printf("GRAVITY = %i\n", g);
	printf("TYPE IN FORCE\n");

	/*A loop that gives the player 10 guesses*/
	for(c = 1; c <= 10; c++) {
		/*Read the player's input,
		 * and check to make sure it's a number*/
		if(scanf("%d", &f) != 1) {
			printf("PLEASE ENTER A NUMBER, TRY AGAIN\n");
			while(getchar() != '\n'); /* flush the bad input */
			c--; /* don't count this as a guess*/
			continue;
		}
		/*Check to see if the player's input is higher, lower,
		 * or equal to the needed force*/
		if(f < r) {
			printf("TOO LOW");
		} else if(f > r) {
			printf("TOO HIGH");
		} else {
			printf("GOOD TAKE OFF\n");
			break;
		}

		/*Check if the player has run out of guesses*/
		if(c < 10) {
			printf(", TRY AGAIN\n");
		}
	}
	/*If the loop breaks and the player's guess doesn't
	 * match the force, they lose*/
	if(f != r) {
		printf("\nYOU FAILED - THE ALIENS GOT YOU\n");
	}
	return 0;
}

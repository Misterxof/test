#include <stdio.h>
#include <string.h>

int main(void) {
	char card[10];
	char names[15][6] = { "two","deuce","three","trey","four","five","six","seven","eight","nine","ten","jack","queen","king","ace" };

	printf("Enter the card.\n");
	fgets(card, 10, stdin);

	for (int i = 0; i < 15; i++) {
		if (strncmp(card, names[i],3)==0) {
			switch (i)
			{
			case 0:
				printf("Value of this card is 2.\n");
				break;
			case 1:
				printf("Value of this card is 2.\n");
				break;
			case 2:
				printf("Value of this card is 3.\n");
				break;
			case 3:
				printf("Value of this card is 3.\n");
				break;
			case 4:
				printf("Value of this card is 4.\n");
				break;
			case 5:
				printf("Value of this card is 5.\n");
				break;
			case 6:
				printf("Value of this card is 6.\n");
				break;
			case 7:
				printf("Value of this card is 7.\n");
				break;
			case 8:
				printf("Value of this card is 8.\n");
				break;
			case 9:
				printf("Value of this card is 9.\n");
				break;
			case 10:
				printf("Value of this card is 10.\n");
				break;
			case 11:
				printf("Value of this card is 10.\n");
				break;
			case 12:
				printf("Value of this card is 10.\n");
				break;
			case 13:
				printf("Value of this card is 10.\n");
				break;
			case 14:
				printf("Value of this card is 11.\n");
				break;
			default:
				break;
			}
		}
	}
return 0;
}

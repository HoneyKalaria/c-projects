
#include <stdio.h>
#include <stdlib.h>

int main() {
    int secretNumber = 7;
    int guess = 0;
    int playAgain;
do{
    secretNumber = rand() % 10 + 1;

    printf("DEBUG: secret number = %d\n", secretNumber);

for (int i = 1; i <=5; i++){
    printf("Enter your guess (1-10):\n ");
    scanf("%d", &guess);

     if (guess < 1 || guess > 10) {
    printf("Invalid guess! Enter 1-10.\n");
    continue;}
if (guess == secretNumber) {
        printf("Correct!\n");
        break;
    }
    else if ( guess > secretNumber){
        printf("Too High\n");
    }
    else if ( guess < secretNumber){
        printf("Too low\n");
    }
   }
 printf("\nDo you want to play again? (1 = Yes, 0 = No): ");
        scanf("%d", &playAgain);

}while (playAgain == 1);

    printf("Thanks for playing!\n");


    return 0;
}


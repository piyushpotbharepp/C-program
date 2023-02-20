/* 
Write a program that generates a random number and ask the player to guess it.
If the player guess is higher than the actual number the program will print
"Lower number please". Similarly if the uer guess is too low, the program prints
"Higher number please"
When the user guesses the correct number, the program displays the number of 
guesses the player used to arrive at the number
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number,guess,nguess;
    srand(time(0));
    number = rand()%100+1;
    
    do{
        printf("\nPlease guess the number between 0 to 100\n");
        scanf("%d", &guess);
        
        if(guess>number)
        {
            printf("\nLower number please");
        }
        else if(guess<number)
        {
            printf("\nHigher number please");
        }
        else{
            printf("\nYou guessed it in %d attempts", nguess);
        }
        nguess++;
    }while(guess!=number);
    
    return 0;
}
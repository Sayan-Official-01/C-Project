#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random, guess;
    int number_of_guess = 0;
    char name[50]; // You add 50 Character
    printf("Enter Your Name :- ");
    scanf("%s", &name);
    printf("Hello! %s Welcome to the World Of Gassing Number", name);
    //soumyadip maji

    srand(time(NULL));         // for library
    random = rand() % 100 + 1; // Genarating between 1 to 100
    // printf("The random Numberis %d",random);

    do
    {
        printf("\nPlease Enter Your Guess between (1 to 100):- \n");
        scanf("%d", &guess);
        number_of_guess++;

        if (guess < random)
        {
            printf("Guess a larger Number.\n");
        }
        else if (guess > random)
        {
            printf("Guess a smaller Number.\n");
        }
        else
        {
            printf("Congrachulation !!! Youe have sucessfully gussed the Number in %d attempts.", number_of_guess);
        }
    } while (guess != random);
    //Extra Part in this code
    printf("\n Bye Bye, %s Thanks For Playing.", name);
    printf("\n Devloped by : Santanu the coder.");

    return 0;
    
}
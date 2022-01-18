#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int a)
{
    srand(time(0)); // to generate a random number, srand take seed as an input and is defined in stdlib.h
    return rand() % a;
}

int main()
{
    char array[] = {'r', 'p', 's'};
    char uIs, cIs;
    int userInput, compInput, humanScore = 0, compScore = 0;
    // printf("Random number b/w 0 to 100 is %s\n", array[generateRandomNumber(3)]);
    printf("\t\tRock Paper and Scissor ==> Human Vs Computer\n\t\t--------------------------------------------\n");
    printf("Rules:\nYou only have 3 chances\nType:\n1 for Rock\n2 for Scissor\n3 for Paper\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("Chance %d Enter your choice:\n", i);
        scanf("%d", &userInput);
        uIs = array[userInput - 1];
        cIs = array[generateRandomNumber(3)];

        if ((uIs == 'r') && (cIs == 'r'))
        {
            printf("Tie, Human choice is Rock and Computer choice is also Rock.\n");
            humanScore++;
            compScore++;
        }

        else if ((uIs == 'r') && (cIs == 's'))
        {
            printf("Human won, Human choice is Rock and Computer choice is Scissor.\n");
            humanScore++;
        }
        else if ((uIs == 'r') && (cIs == 'p'))
        {
            printf("Computer won, Human choice is Rock and Computer choice is Paper.\n");
            compScore++;
        }
        else if ((uIs == 'p') && (cIs == 'p'))
        {
            printf("Tie, Human choice is Paper and Computer choice is also Paper.\n");
            humanScore++;
            compScore++;
        }
        else if ((uIs == 'p') && (cIs == 'r'))
        {
            printf("Human won, Human choice is Paper and Computer choice is Rock.\n");
            humanScore++;
        }
        else if ((uIs == 'p') && (cIs == 's'))
        {
            printf("Computer won, Human choice is Paper and Computer choice is Scissor.\n");
            compScore++;
        }
        else if ((uIs == 's') && (cIs == 's'))
        {
            printf("Tie, Human choice is Scissor and Computer choice is also Scissor.\n");
            humanScore++;
            compScore++;
        }
        else if ((uIs == 's') && (cIs == 'p'))
        {
            printf("Human won, Human choice is Scissor and Computer choice is Paper.\n");
            humanScore++;
        }
        else if ((uIs == 's') && (cIs == 'r'))
        {
            printf("Computer won, Human choice is Scissor and Computer choice is Rock.\n");
            compScore++;
        }
    }
    printf("\nTotal Score is:\nHumans = %d, Computer = %d\n",humanScore, compScore);
    if (humanScore == compScore)
    {
        printf("This round is Tie\n");
    }
    else if (humanScore > compScore)
    {
        printf("Human won this round with %d points\n", humanScore);
    }
    else{
        printf("Computer won this round with %d points\n",compScore);
    }
    

    return 0;
}
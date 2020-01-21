#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int generateRandomNumber();

bool isValid();

int main()
{

    const int MAX_GUESSES = 20;

    int numberOfGuesses = 0, newGame = 0;

    int randomNumber;

    char input[3];

    long inputNumber;

    bool isNewGame = true;

    long yes = 1;

    long no = 0;

    bool isPlaying;

    char *ptr;

    int i;

    bool isInputValid;

    while (isNewGame)
    {

        if(newGame == 0){
        printf("Lets play a guessing game\n");
        newGame++;
        }

        randomNumber = generateRandomNumber();

        printf("Guess a number between 1-100\n");

        isPlaying = true;


        for (i = 0; i <= MAX_GUESSES; i++)
        {

            scanf("%s", input);


            isInputValid = isValid(input);

            if (isInputValid)
            {

                inputNumber = strtol(input, &ptr, 10);

                numberOfGuesses++;

                if (inputNumber == randomNumber)
                {
                    printf("You guessed correct after %i attempts! Do you wish to play again? Yes(1) or No(0)\n", numberOfGuesses);
                    scanf("%s", input);
                    inputNumber = strtol(input, &ptr, 10);
                    isInputValid = isValid(input);


                    if (inputNumber == no)
                    {
                        printf("Bye bye\n");
                        isNewGame = false;
                        break;
                    }
                    if (inputNumber == yes)
                    {
                        numberOfGuesses = 0;
                        break;
                    }
                }
                if (inputNumber > randomNumber)
                {
                    printf("You guessed to high, try again\n");
                }
                if (inputNumber < randomNumber)
                {
                    printf("You guessed to low, try again\n");
                }
            }
            else
            {
                printf("Please only enter numbers\n");
                break;
                        }
        }
    }

    return 0;
}

int generateRandomNumber()
{
    srand(time(NULL));
    int randomNumber = rand() % 100 + 1;
    return randomNumber;
}

bool isValid(char input[])
{

    int i, numbers = 0, letters = 0;

    for (i = 0; input[i] != '\0'; i++)
    {

        if (isalpha(input[i]))
        
            letters++;
        

        else if (isdigit(input[i]))
        
            numbers++;
        
    }

    
    if (letters > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

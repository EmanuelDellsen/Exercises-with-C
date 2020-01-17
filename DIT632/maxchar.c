#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 50

void main(int argc, char **argv)
{

    char input, text[MAX];
    int counter = 0;
    int i;
    bool isLetter = false;

    printf("Enter your sentence\n");
    fgets(text, MAX, stdin);

    for (i = 0; i < strlen(text); i++)
    {

        if (text[i] == ' ')

            isLetter = false;

        else
        {
            if (isLetter == false)
                counter++;
            isLetter = true;
        }
    }

    printf("number of words in your sentence is: %d\n ", counter);
}
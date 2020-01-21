#include <stdio.h>
#include <string.h>
int main()
{

    int i;

    int encryptNumber = 13;

    char input[30];

    char output[strlen(input)];

    int encryptedLetterAscii;

    fgets(input, 30, stdin);

    for (i = 0; i < strlen(input) - 1; i++)
    {

        char indexLetter = input[i];
        int indexLetterAscii = input[i];

        printf("%c", indexLetterAscii);
        printf("%d", indexLetterAscii);

        if (indexLetterAscii >= 97 && indexLetterAscii < 110)
        {

            encryptedLetterAscii = indexLetter + encryptNumber;

            printf("inside first if : %c\n", encryptedLetterAscii);
            output[i] = encryptedLetterAscii;
        }
        if (indexLetterAscii >= 110)
        {

            encryptedLetterAscii = indexLetter - encryptNumber;

            printf("inside second if : %c\n", encryptedLetterAscii);

            output[i] = encryptedLetterAscii;
        }
        if (indexLetterAscii < 97 && indexLetterAscii > 77)
        {

            encryptedLetterAscii = indexLetter - encryptNumber;

            printf("inside third if : %c\n", encryptedLetterAscii);

            output[i] = encryptedLetterAscii;
        }
        if (indexLetterAscii <= 77)
        {

            encryptedLetterAscii = indexLetter + encryptNumber;

            printf("inside else : %c\n", encryptedLetterAscii);

            output[i] = encryptedLetterAscii;
        }
    }

    printf("%s\n", output);

    return 0;
}
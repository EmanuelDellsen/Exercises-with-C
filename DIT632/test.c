#include <stdio.h>
int main(int argc, char **argv)
{
    int keyboardInt[5] = {1, 2, 3, 4, 5};
    char c = getchar();
    if ((c == '1') | (c == '2') | (c == '3') | (c == '4') | (c == '5'))
    {
        printf("Char pressed: %c!", c);
        return 0;
    }
    else
    {
        printf("Please try again with a new number");
    }
}
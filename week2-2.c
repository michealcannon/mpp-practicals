/* ask user for name and greet them with name */

#include <stdio.h>

int main()
{
    char name[20];  /* variable is character array */
    printf("What is your name?");
    fgets(name, 20, stdin); /* gets user input */
    printf("Hello %s", name);
    return 0;
}
/* only the users alice and bob 
are greeted by name*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];  
    printf("What is your name?\n");
    fgets(name, 20, stdin); /* gets user input */
    name[strcspn(name, "\n")] = 0;
   

    if ((strcmp(name, "Alice")==0) || (strcmp(name, "Bob")==0))
    {
        printf("Hello %s\n", name);
    } else
    {
        printf("I dont know you\n"); 
    }
    return 0;
}
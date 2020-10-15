/* ask user for number n, gives option of computing sum or product of 1..n*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int sum = 0;
    int product = 1;
    char* choice;

    printf("Please enter a number ");
    scanf("%d", &n);  /* gets number input, specifies format, assigns to n*/
    printf("Do you want product or sum? ");
    scanf("%s", choice);

if (strcmp(choice, "sum")==0)
    {
        for (int i = 1; i<=n; i++)
        {  
            sum +=i;    
        }

        printf("The sum of 1 to %d was %d\n", n, sum);
    }
    else if (strcmp(choice, "product")==0)
    {
        for (int i = 1; i<=n; i++)
        {  
            product *=i;    
        }

        printf("The product of 1 to %d was %d\n", n, product);
    }
    return 0;
}
/* ask user for number n, prints sum of 1, 2..n*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int sum = 0;
    printf("Please enter a number");
    scanf("%d", &n);  /* gets number input, specifies format, assigns to n*/

    for (int i = 1; i<=n; i++)
    {
       sum +=i;
    }

    printf("The sum of 1 to %d was %d\n", n, sum);

    return 0;
}

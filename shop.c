#include <stdio.h>
#include <string.h>

struct Customer{
char* name;
double budget;
};

struct Product{
char* name;
double price;
};

struct ProductStock{
struct Product product;
int quantity;
};

int main(void)
{
    struct Customer dominic = {"Dominic", 100.0};
    printf("Customer name is %s\n", dominic.name);

    struct Product coke = {"can coke", 1.10};
    printf("The %s costs %.2f\n", coke.name, coke.price);

    struct ProductStock cokeStock = {coke, 20};
    printf("The shop has %d of the product %s\n", cokeStock.quantity, cokeStock.product.name);

    return 0;
}
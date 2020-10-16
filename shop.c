#include <stdio.h>
#include <string.h>


struct Product{
    char* name;
    double price;
};

struct ProductStock{
    struct Product product;
    int quantity;
};

struct Customer{
    char* name;
    double budget;
    struct ProductStock shoppingList[10];
};

struct Shop{
    double cash;
    struct ProductStock stock[20];

};

void printProduct(struct Product p)
{
    printf("---------------------------------------\n");
    printf("PRODUCT NAME: %s  \n PRODUCT PRICE: %.2f \n", p.name, p.price);
    printf("---------------------------------------\n");
}

void printCustomer(struct Customer c)
{
    printf("---------------------------------------\n");
    printf("CUSTOMER NAME: %s  \n CUSTOMER BUDGET: %.2f \n", c.name, c.budget);
    printf("---------------------------------------\n");
}

int main(void)
{
    struct Customer dominic = {"Dominic", 100.0};
    printCustomer(dominic);

    struct Product coke = {"can coke", 1.10};
    printProduct(coke);

    struct ProductStock cokeStock = {coke, 20};
    printf("The shop has %d of the product %s\n", cokeStock.quantity, cokeStock.product.name);

    return 0;
}
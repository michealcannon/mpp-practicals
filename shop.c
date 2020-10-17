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
    int index;
};

struct Shop{
    double cash;
    struct ProductStock stock[20];

};

void printProduct(struct Product p)
{
    
    printf("PRODUCT NAME: %s  \n PRODUCT PRICE: %.2f \n", p.name, p.price);
    printf("---------------------------------------\n");
}

void printCustomer(struct Customer c)
{
    
    printf("CUSTOMER NAME: %s  \n CUSTOMER BUDGET: %.2f \n", c.name, c.budget);
    printf("---------------------------------------\n");
    for (int i = 0; i<c.index; i++){
        printProduct(c.shoppingList[i].product);
        printf("%s ORDERS %d OF ABOVE PRODUCT\n", c.name, c.shoppingList[i].quantity);
        double cost = c.shoppingList[i].quantity * c.shoppingList[i].product.price;
        printf("The cost to %s will be %.2f\n", c.name, cost);
    }
}

int main(void)
{
    struct Customer dominic = {"Dominic", 100.0};
    // printCustomer(dominic);

    struct Product coke = {"can coke", 1.10};
    struct Product bread = {"bread", 0.7};
    // printProduct(coke);

    struct ProductStock cokeStock = {coke, 20};
    struct ProductStock breadStock = {bread, 2};
    dominic.shoppingList[dominic.index++] = cokeStock;
    dominic.shoppingList[dominic.index++] = breadStock;
    printCustomer(dominic);
    // printf("The shop has %d of the product %s\n", cokeStock.quantity, cokeStock.product.name);

    return 0;
}
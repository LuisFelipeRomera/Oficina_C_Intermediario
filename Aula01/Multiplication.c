#include <stdio.h>

int prod(int a, int b) {

    return a*b;
}

int main () {

    int a, b;

    int product;

    printf("input a value: ");
    scanf("%d", &a);

    printf("input b value: ");
    scanf("%d", &b);

    product = prod(a, b);

    printf("the product of %d and %d is %d\n", a, b, product);

    return 0;
}

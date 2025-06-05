#include <stdio.h>

void doubl(int *a) {

    *a *= 2;
}

int main() {

    int a, b;

    printf("input a: ");
    scanf("%d", &a);

    printf("input b: ");
    scanf("%d", &b);

    int *pa = &a;
    int *pb = &b;

    printf("%d x 2 = ", a);

    doubl(pa);

    printf("%d\n", a);

    printf("%d x 2 = ", b);

    doubl(pb);

    printf("%d\n", b);

    return 0;
}

#include <stdio.h>

typedef struct {
    char name[50];
    int registry;
    int age;
    float grade[3];
    float mean;
} student;

int main(){

    for (int i = 0; i < 3; i++) {

        printf("Input the name: ");
        fgets(name, sizeof(nome), stdin);

        printf("Input the registry: ");
        scanf("%d", &registry);

        printf("Input the age: ");
        scanf("%d", &registry);

        int pos = 1
        for (int i = 0; i < sizeof(grade/grade[0]); i++) {

        if (pos == 1) {

            printf("Input the 1st grade");
            pos++;

        } else if (pos == 1) {

            printf("Input the 1st grade");
            pos++;
        }
    }

    return 0;
}



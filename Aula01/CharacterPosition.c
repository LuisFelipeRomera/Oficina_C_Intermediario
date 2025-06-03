#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "Banana\0";
    int pos = 1;

    for (int i = 0; i < sizeof(str); i++) {

        if (str[i] == 'a' && pos == 1) {

            printf("position of 1st a is %d\n", i);
            pos++;

        } else if (str[i] == 'a' && pos == 2) {

           printf("position of 2nd a is %d\n", i);
           pos++;

        } else if (str[i] == 'a' && pos == 3) {

            printf("position of 3rd a is %d\n", i);
            pos++;

        } else if (str[i] == 'a'){

            printf("position of %dth a is %d\n", pos, i);
            pos++;
        }
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char * argv[]) {
    int i = 0;
    if (argc == 1) {//first condicional
        printf("You only have one argument. You suck.\n");
    } else if (argc > 1 || argc < 4) {//second condicional
        printf("Here's your arguments:\n");
        for (i = 0; i < argc; i++) {//print argument with i index
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {//third condicional DEFAULT
        printf("You have too many arguments. You suck.\n");
    }
    return 0;
}

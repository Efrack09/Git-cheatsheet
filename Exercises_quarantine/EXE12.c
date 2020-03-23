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


/*
if (argc == 1) {
        printf("You only have one argument. You suck.\n");
    } else if (argc > 1 || argc < 4) {
        printf("Here's your arguments:\n");
        for (i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("You have too many arguments. You suck.\n");
    }
    return 0;
}

EXE10
#include <stdio.h>
int main (int argc, char *argv[]){
    int i = 0;
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    // let's make our own array of strings
    char *states[] = {"California", "Oregon","Washington", "Texas"};
    int num_states = 4;
    for (i = 0; i < num_states; i++) {
        if (i == 3) { //HEREEEEEE
            break;
        }
        printf("state %d: %s\n", i, states[i]);
    }
    return 0;
}

EXE11

#include <stdio.h>
int main(int argc, char *argv[]){
    int i = 0;
    while (i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        i++;
    }
    char *states[] = {"California", "Oregon","Washington", "Texas"};
    int num_states = 4;
    i = 0;
    while (i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
        if (i == 3) { //HEREEEEEEEEE
            break;
        }
    }
    return 0;
}
*/

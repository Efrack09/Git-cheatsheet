#include <stdio.h>
int main(int argc, char * argv[]) {
    int i = 0;//is important create the index for the future loops
    int j = 0;
    char * states[] = {//we going to create a array of strings with some state names
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    while (i < argc) {//this is a while-loop and count all arguments with argc and print each one with argv
        printf("arg %d: %s\n", i, argv[i]);
        states[j+4] = argv[j];
        j++;
        i++;
    }
    int num_states = 4+argc;//create an axuliar variable to count
    i = 0;//restart the index
    while (i < num_states) {//here we will print all states
        printf("state %d: %s\n", i, states[i]);
        i++;
    }
    return 0;
}

/*
CODE
int main(int argc, char * argv[]) {
    int i = 0;//is important create the index for the future loops
    int j = 0;
    char * states[] = {//we going to create a array of strings with some state names
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    while (i < argc) {//this is a while-loop and count all arguments with argc and print each one with argv
        printf("arg %d: %s\n", i, argv[i]);
        states[j+4] = argv[j];
        j++;
        i++;
    }
    int num_states = 4+argc;//create an axuliar variable to count
    i = 0;//restart the index
    while (i < num_states) {//here we will print all states
        printf("state %d: %s\n", i, states[i]);
        i++;
    }
    return 0;
}
OUT
./a.out test it l
arg 0: ./a.out
arg 1: test
arg 2: it
arg 3: l
state 0: California
state 1: Oregon
state 2: Washington
state 3: Texas
state 4: ./a.out
state 5: test
state 6: it
state 7: l
*/

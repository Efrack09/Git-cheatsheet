#include <stdio.h>
int main(int argc, char * argv[]) {
    int i = 0;
    int j = 0;
    char * states[] = {
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    while (i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        states[j+4] = argv[j];
        j++;
        i++;
    }
    int num_states = 4+argc;
    i = 0;
    while (i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }
    return 0;
}

/*
int main(int argc, char * argv[]) {
    int i = 0;
    int j = 0;
    char * states[] = {
        "California",
        "Oregon",
        "Washington",
        "Texas"
    };
    while (i < argc) {
        printf("arg %d: %s\n", i, argv[i]);
        states[j+4] = argv[j];
        j++;
        i++;
    }
    int num_states = 4+argc;
    i = 0;
    while (i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }
    return 0;
}
Result 1
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


Result 2
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

Result 3

arg 1: test
arg 2: it
arg 3: l
arg 4: r
arg 5: t
arg 6: s
state 0: California
state 1: Oregon
state 2: Washington
state 3: Texas
state 4: ./a.out
state 5: test
state 6: it
state 7: l
state 8: r
state 9: t
state 10: s
*/

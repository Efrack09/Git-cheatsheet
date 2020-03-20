#include <stdio.h>
    int main(int argc, char *argv[])
    {
    int i = 0;
    for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
    }
    char *states[] = {
    "California", NULL,
    "Washington", "Texas"
    };
    int num_states = 4;
    for(i = 0; i < num_states; i++) 
    {
    printf("state %d: %s\n", i, states[i]);
    }
    return 0;
}

/*Result
state 0: California
state 1: (null)
state 2: Washington
state 3: Texas
*/

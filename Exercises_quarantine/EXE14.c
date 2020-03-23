#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letter(char arg[]);

void print_arguments(int argc, char *argv[]){
    int i = 0;
    for(i = 0; i < argc; i++){
        print_letters(argv[i]);
    }
}
void print_letters(char arg[]){
    int i = 0;
    for (i = 0; arg[i]!= '\0'; i++){
        char ch = arg[i];
        if (can_print_it(ch)){
            printf("'%c' == %d ", ch, ch);
        }
    }
    printf("\n");
}

int can_print_it(char ch){
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char*argv[]){
    print_arguments(argc, argv);
    return 0;
}


/*
Result 1
void print_letters(char arg[]){
    int i = 0;
    
    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        
        if (isalpha(ch) || isblank(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}
int main(int argc, char *argv[]){
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
    
    return 0;
}

Result 2

void print_arguments(int argc, char *argv[]){
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i], strlen(argv[i]));
    }
    
Result 3
int can_print_it(char ch){
    return isdigit(ch) || ispunct(ch); //HEREEEEEEEE
}
int main(int argc, char *argv[]){
    print_arguments(argc, argv);
    return 0;
}

*/

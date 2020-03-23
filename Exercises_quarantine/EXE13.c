#include <stdio.h>

int main (int argc, char *argv[]){
    if(argc != 2){
        printf("ERROR: You need one argument. \n");
        return 1;
    }
    int i = 0;
    for(i = 0; argv[1][i] != '\0'; i++){
        char letter = argv[1][i];
        switch (letter){
        case 'a':
        case 'A':
            printf("%d: 'A'\n",i);
            break;
        case 'e':
        case 'E':
            printf("%d: 'E'\n",i);
            break;
        case 'i':
        case 'I':
            printf("%d: 'I'\n",i);
            break;
        case 'o':
        case 'O':
            printf("%d: 'O'\n",i);
            break;
        case 'u':
        case 'U':
            printf("%d: 'U'\n",i);
            break;
        case 'y':
        case 'Y':
            if(i > 2){
                print("%d: 'Y'\n",i);
            }
            break;
        
        default:
        printf("%d: %c is not a vowel\n", i, letter);
            break;
        }
    }
    return 0;
}

/*

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        
        // this is how you abort a program
        return 1;
    }
    int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];
        char letter_lowercase = lowercase(letter); //We assign the previous analysis to this variable
        switch (letter_lowercase) {
            case 'a':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
                printf("%d: 'E'\n", i);
                break;
            case 'i':
                printf("%d: 'I'\n", i);
                break;
            case 'o':
                printf("%d: 'O'\n", i);
                break;
            case 'u':
                printf("%d: 'U'\n", i);
                break;
            case 'y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }
                break;
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    
Result 1
./a.out Efrain
0: E
1: f is not a vowel
2: r
3: a is not a vowel
4: r
5: a is not a vowel
*/
/*
Result 2

int i = 0;
    char letter = 0;
    for (i = 0; letter = argv[1][i], letter != '\0'; i++) { //HEREEEEEEE
        switch (letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;
            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;
            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;
            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;
            case 'y':
            case 'Y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }
*/
/*               
Result 3
int j = 0;
    int i = 0;
    char letter = 0;
    char *arg1;
    
    for (j = 1; j < argc; j++) {
        numarg = argv[j]; //I want to count my arguments, for example: "OSIRIS CAMARA". Here we have 2 and for each argument, we print
        printf("Argument %d: %s\n", j, numarg);
        
        for (i = 0; letter = numarg[i], letter != '\0'; i++) { //We analyze for each argument 
            switch (letter) {
                case 'a':
                case 'A':
                    printf("%d: 'A'\n", i);
                    break;
                case 'e':
                case 'E':
                    printf("%d: 'E'\n", i);
                    break;
                case 'i':
                case 'I':
                    printf("%d: 'I'\n", i);
                    break;
                case 'o':
                case 'O':
                    printf("%d: 'O'\n", i);
                    break;
                case 'u':
                case 'U':
                    printf("%d: 'U'\n", i);
                    break;
                case 'y':
                case 'Y':
                    if (i > 2) {
                        // it's only sometimes Y
                        printf("%d: 'Y'\n", i);
                    }
    
                    break;
                default:
                    printf("%d: %c is not a vowel\n", i, letter);
            }
        }
    }
 
 
 Argument 1: May
0: 'M'
1: a is not a vowel
2: 'y'
Argument 2: Matu
0: M is not a vowel
1: 'a' 
2: t is not a vowel 
3: u is not a vowel*/
    */
/*
Result 4
int i = 0;
  	for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];
        if (letter == 'a' || letter == 'A') {
            printf("%d: 'A'\n", i);
        }
	else if (letter == 'e' || letter == 'E') {
            printf("%d: 'E'\n", i);
        }
	else if (letter == 'i' || letter == 'I') {
            printf("%d: 'I'\n", i);
        }
	else if (letter == 'o' || letter == 'O') {
            printf("%d: 'O'\n", i);
        }
	else if (letter == 'u' || letter == 'U') {
            printf("%d: 'U'\n", i);
        }
	else if (letter == 'y' || letter == 'Y') {
            if (i > 2) {
                printf("%d: 'Y'\n", i);
            }
        }
	else {
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    return 0;
 }  

*/

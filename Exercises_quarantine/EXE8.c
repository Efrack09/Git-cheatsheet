#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[]={10,12,13,14,20};
	char name[]="Zed";
	char full_name[]={'Z','e','d',' ','A','.',' ','S','h','a','w','\0'};
	
	//WARNING: On some systems you may have to change the
	//%ld in this code to a %u since it will use unsigned ints
	printf("The size of an int: %ld\n",sizeof(int));
	printf("The size of areas (int[]): %ld\n",sizeof(areas));
	printf("The number of ints in areas: %ld\n",sizeof(areas)/sizeof(int));
	printf("The first area os %d, the 2nd %d. \n",areas[0],areas[1]);

	printf("The size of a char: %ld\n",sizeof(char));
	printf("The size of name (char[]): %ld\n", sizeof(name));

	printf("The number of chars: %ld\n", sizeof(name)/sizeof(char));

	printf("The size of full_name (char[]): %ld\n",sizeof(full_name));
	printf("The number of chars: %ld\n",sizeof(full_name)/sizeof(char));

	printf("name=\"%s\" and full_name=\"%s\"\n",name,full_name);
	
	return 0;


}


/*
areas[0]=100;
areas[1]=160;
areas[2]=10;
areas[3]=150;
Result 
The size of an int: 4
The size of areas (int[]): 20
The number of ints in areas: 5
The first area is 100, the 2nd 160.
The size of a char: 1
The size of name (char[]): 4
The number of chars: 4
The size of full_name (char[]): 12
The number of chars: 12
Result 2
The size of an int: 4
The size of areas (int[]): 20
The number of ints in areas: 5
The first area is 100, the 2nd 160.
The size of a char: 1
The size of name (char[]): 4
The number of chars: 4
The size of full_name (char[]): 12
The number of chars: 12
name="JUAN" and full_name="JMB A. Shaw"
Result 3
The size of an int: 4
The size of areas (int[]): 20
The number of ints in areas: 5
The first area is 10, the 2nd 160.
The size of a char: 1
The size of name (char[]): 4
The number of chars: 4
The size of full_name (char[]): 12
The number of chars: 12
name="dUAN" and full_name="JMB A. Shaw"
*/
//Result 
//The size of an int: 4
//The size of areas (int[]): 20
//The number of ints in areas: 5
//The first area os 10, the 2nd 12.
//The size of a char: 1
//The size of name (char[]): 4
//The number of chars: 4
//The size of full_name (char[]): 12
//The number of chars: 12
//name="Zed" and full_name="Zed A. Shaw"//


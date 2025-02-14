#include <stdio.h>

// Entry point into our C program
int main(){

	{
		int x=7;
		printf("x = %d\n", x);
		{

			printf("x = %d\n", x);

		}
	} // x is automatically deleted after line 9
	int x=5;
	printf("x = %d\n", x);

	return 0;
}


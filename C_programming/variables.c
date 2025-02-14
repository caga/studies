#include <stdio.h>


int main(){


	int counter = 5;
	printf("my variable x = %d\n", counter);

	float piy = 5.01;
	printf("my variable piy = %f\n", piy);
	
	char grade = 'A';
	printf("my variable grade = %c\n", grade);
	
	//const makes variable immunable, we cant change its value later
	
	const float pi = 3.1415;
	printf("my variable pi = %f\n", pi);

	return 0;
}

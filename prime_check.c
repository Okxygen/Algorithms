#include <stdio.h>
#include <math.h>

int prime(int input);
void printresult(int num);

int main(void){

	printresult(9);
	printresult(17);
	printresult(2);
	printresult(-3);
	
	return 0;
}

int prime(int input){
	//int root = sqrt(input);
	int i = 2;
	
	if(input<0 || input==0 || input==1){
		return 0;
	}
	else{
		while(i<=sqrt(input)){
			if(input%i == 0){
				return 0;
			}
			i++;
		}
	}
	return 1;
}
	

void printresult(int num){
	if (prime(num)){
		printf("%d is a prime number.\n", num);
	}else{
		printf("%d is not a prime number.\n", num);
	}
	return;
}
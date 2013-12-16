#include <stdio.h>
#include <unistd.h>

int factorial(int n){

	if( (n-1) ==  1 ){
		return n;
	}
	else{
	return factorial(n-1)*n;
	}


}

int main(){

int x = factorial(5);
printf("returned %d",x);
}

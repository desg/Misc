#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <cstring>
#include <iostream>

using namespace std;

void countdown(int n){

	if( n ==  1 ){
		printf("%d\n",n);
	}
	else{
		printf("%d\n",n);
		countdown(n-1);
	}


}

void countup(int n){

	if ( n >= 10 ){
		printf("%d\n",n);

	}
	else{
		printf("%d\n",n);
		countup(n+1);
	}

}

void reverse(char s[], int length){
int i= 

	if( i > 1 ){
	cout << s[length-1] << endl;
	}
	else{
	
	
	}


}

int main(){
	countdown(5);
	printf("\n\n");
	countup(1);
	printf("\n\n");
	//reverse("Yo");

}


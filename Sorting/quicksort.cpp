//code found at http://www.algolist.net/Algorithms/Sorting/Quicksort
#include <unistd.h>
#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];
	/* partition */

	while (i <= j) {

		while (arr[i] < pivot)

			i++;

		while (arr[j] > pivot)

			j--;

		if (i <= j) {

			tmp = arr[i];

			arr[i] = arr[j];

			arr[j] = tmp;

			i++;

			j--;

		}

	};



	/* recursion */

	if (left < j)

		quickSort(arr, left, j);

	if (i < right)

		quickSort(arr, i, right);

}

void printArray(int array[])
{

for(int i = 0; i< sizeof(array)+1; i++){
cout << array[i] << endl;

}

}

int main(){


int array[5] = {9, 8,7,6,5};
printArray(array);
quickSort(array,0,5);

printArray(array);
}

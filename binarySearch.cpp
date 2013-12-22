#include <unistd.h>
#include <iostream>

using namespace std;

int binarySearch(int array[], int key, int imin, int imax){

	if (imax < imin) { return -1; }

	else{

		int imid = imin + ((imax - imin) / 2);

		if(key > array[imid]){

			return binarySearch(array, key, imid+1, imax);
		}

		if(key < array[imid]){

			return binarySearch(array, key, imin, imid-1);
		}
		else return imid;

	}
}

int main(){


	int x[] = {1, 2, 3, 4, 5, 39, 42, 51, 96, 102, 555};

	int imin = 0;
	int imax = (sizeof(x)/sizeof(x[0]))-1;

	cout << binarySearch(x, 2, imin, imax) << endl;


}

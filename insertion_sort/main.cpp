#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
#include <ctime>

void insertionSort(int [], int);

int main()
{
	int n;
	cout << "Enter the array size: ";
	cin >> n;

	int *a = new int[n];
	srand(time(NULL)); // seed the rand function
	for(int i = 0; i < n; i++) {
		a[i] = (rand() % 100) + 1;
		cout << a[i] << " ";
	}
	cout << endl;

	insertionSort(a, n);
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	delete [] a;

	return 0;
}

void insertionSort(int a[], int length)
{
	int key;
	int j;
	for(int i = 1; i < length; i++) {
		key = a[i];

		// insert a[i] into the sorted sequence a[0..i-1]
		j = i - 1;
		while(j >= 0 && a[j] > key) {
			a[j+1] = a[j];
			j = j - 1;
		}
		a[j+1] = key;
	}
}
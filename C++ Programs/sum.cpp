#include <iostream>
using namespace std;

int sumIteration(int arr[], int Size);
int sumRecursive(int arr[], int Size);

int main() {
	const int kSize = 8;
	int arr[kSize] = { 1, 3, 4, 5, 7, 9, 11, 13 };
	int sum = 0;
	int sumR = 0;

	sum = sumIteration(arr, kSize);
	cout << "The sum of the array using iteration is " << sum << endl;

	sumR = sumRecursive(arr, kSize);
	cout << "The sum of array using recursive is " << sumR << endl;

	return 0;
}

int sumIteration(int arr[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++){
		sum = sum + arr[i];
	}
	return sum;
}

int sumRecursive(int arr[], int n) {
	if (n <= 0)
		return 0;
	else
		return arr[n - 1] + sumRecursive(arr, n - 1);
}

// Binary Search Algorithm
// Written by Marufur Rahman

#include <iostream>
#define arr_size 10
using namespace std;

int main() {
	int arr[arr_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i, startPoint, endPoint, midPoint, item, location, comparison;

	item = 6; // The value we want to search from array

	// Start searching...
	startPoint = 0; // First index of array
	endPoint = arr_size-1; // Last index of array
	location = -1;
	comparison = 0;

	while(startPoint <= endPoint) {
		comparison++;
		midPoint = (startPoint+endPoint)/2;

		if(arr[midPoint]==item) {
			location = midPoint;
			break;
		} 
		else if(arr[midPoint]<item) {
			startPoint = midPoint + 1;
		}
		else {
			endPoint = midPoint - 1;
		}
	}
	cout << "Given, a sorted array of 10 elements:\n\n";
	for(i = 0; i<arr_size; i++) {
		cout << arr[i];
		cout << "\n--------------------\n\n";
	}

	if(location == -1) {
		cout << "Found!";
	}
	else {
		cout << "Not Found";
	}
	
	return 0;
}
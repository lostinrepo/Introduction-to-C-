
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 


void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++)	 
	

	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
			
	cout<<"Sorted : \n";		
			
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 		
} 


int main() 
{ 
	int arr[] = {5,4,3,2,1}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	bubbleSort(arr, n); 

	return 0; 
} 


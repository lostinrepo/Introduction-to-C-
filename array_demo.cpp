#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int i=0;
	while(i<n){
		cin >> arr[i];
		i++;
	}
	
	for (int i=0;i<n;i++){
		cout << arr[i]  << " ";
	}
	
	
}

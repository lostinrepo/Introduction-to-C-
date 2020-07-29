#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	int x;
	cin >> x;
	int i=0;
	while(i<n){
		cin >> arr[i];
		i++;
	}
int z;
    //Write your code here
    for (int i=0;i<n;i++){
        if(arr[i]==x){
            z= i;
            break;
        }
        
        z=-1;
        
    }
    
    
cout << z;
	
	
}

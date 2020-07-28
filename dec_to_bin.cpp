#include<iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
    
	// Write your code here
    
    int n;
    cin >> n;
    int i=0;
    int number=0;
    int remainder;

    int arr[32];  
    
   if(n==0){
       cout <<0;
   } 
    else{
    while(n>0){
        arr[i]=n%2;
        n=n/2;
        i++;
        
    }
        
           
for (int j = i - 1; j >= 0; j--) {
        cout << arr[j];  
    }

} 
	
}


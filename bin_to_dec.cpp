#include<iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
    
	// Write your code here
    
    int n;
    cin >> n;
    int i=0;
    int number=0;
    int digit;
    while(n>0){
        digit=n%10;
        number = number + (digit * pow(2,i));
        i++;
        n=n/10;
        
    }
    
    cout << number;
	
}


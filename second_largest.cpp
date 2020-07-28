#include<iostream>
using namespace std;
#include <climits>
#include<bits/stdc++.h>

int main(){
    
    int n;
    cin >> n;
    int largest;
    
    int prev,cur;
        
    if (n==0 || n==1){
       largest=INT_MIN;   
    }
    else{
        cin >> prev;

    while(n-1>0){
        cin >> cur;
        if(cur>prev){
            largest = cur;
        }
        else if (prev > cur){
            largest = prev;
        }
        else {
            largest = INT_MIN;
        }
        
        prev=cur;
        n--;
        
    }
    

    }
    
        cout << largest;
    
    // Write your code here
    
}




#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,i=1,count=1;
    cin >> x;
    
    while (true){
        int sum=0;
        sum=sum+(3*i+2);
        if(sum%4!=0){
            cout << sum << " ";
            count++;
        }
        i++;
     
        if(count == x+1){
        	break;
		}
        
        
    }
    
    
	
}


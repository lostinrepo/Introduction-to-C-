#include<iostream>
using namespace std;


int main(){
    
    int n;
    cin >> n;
    int i=1;
    int x;
    
    while (i<=n){
        int j=1;
        x=i;
       
        
        while(j<=i){
            char ch='A'+x-1;
            cout << ch;
            j=j+1;
            x=x+1;
            
         
        }

        
        cout << endl;
        i++;
        
    }
    

 
}




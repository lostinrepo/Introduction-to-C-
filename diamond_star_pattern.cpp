#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    
    int n;
    cin >> n;
    int i=1;
    int c=1;
    int n1,n2;
    
    n1=(n+1)/2;
    n2=n1-1;
    
    while (i<=n1){
        int j=1;
        int k=1;
        while (k<=n1-i){
            cout << " ";
            k++;
        }
        while (j<=(2*i-1)){
            cout << "*";
            j++;
        }
        cout << endl;
        c++;
        i++;
        
        
    
   
        
    }
    
    i=n2;
    
    while(i>0){
        
        int j=1;
        int k=1;
        while (k<=(n2-i+1)){
            cout << " ";
            k++;
        }
        while (j<=(2*i-1)){
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
        
    }
    
  
}




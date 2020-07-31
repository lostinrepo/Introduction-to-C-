#include<iostream>
#include<climits>
using namespace std;

void findSecondLargest(int *arr, int n)
{
    int x=INT_MIN;
    
    if(n<=1){
       cout << "No second largest" ;
    }
    else{ 
     
    int largest =INT_MIN;
	int second= INT_MIN; 
    for(int i = 0; i < n; i++) 
    { 
          
       
       if (arr[i] > largest) 
       { 
           second = largest; 
           largest = arr[i]; 
       } 
         
     
       else if (arr[i] > second && 
                arr[i] != largest) 
       { 
           second = arr[i]; 
       } 
    } 
    if (second == INT_MIN) 
        cout << "No Second largest  : " << x; 
    else
        cout << "Second largest is : " << second;    
    }
}

int main(){
	
	int arr[5]={1,2,3,4,5};
	int n=5;
	findSecondLargest(arr, n);
	
	
	
	
	
}


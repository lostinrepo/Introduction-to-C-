#include<iostream>
using namespace std;


int main(){
	char b[10];
	
	cin >> b;
    int size=sizeof(b)/sizeof(b[0]);
    
    
    // cout << b ;

for(int i=0;i<size;i++){

	cout << b[i];
	
}

}

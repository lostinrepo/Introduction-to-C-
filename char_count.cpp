#include<iostream>
using namespace std;

int main() {
	char c;
	c = cin.get();
	int char_count = 0,number_count=0,space_count=0;
	while (c != '$') {
		if(c >= 97 && c<= 122 ){
            char_count++;
        }else if(c>=48 && c<= 57){
            number_count++;
        }
        else{
            space_count++;
        }
        c = cin.get();
		
	}
	cout << char_count << " " << number_count << " " << space_count;
}

  


#include <iostream>
using namespace std;
#include <cstring>


int main() {
	char input1[100] = "abcd";
	char input[100];



	char input2[100] = "xy";
	
	cout << "Before copying : ";
	cout << "Input 1 : " << input1 << endl;
	cout << "Input 2 : " << input2 << endl;
	//strcpy(input1, "hello");
	
	strncpy(input1, input2, 4);
	
	cout << "After copying : ";
	cout << "Input 1 : " << input1 << endl;
	cout << "Input 2 : " << input2 << endl;
	




	cin >> input1;
	cin >> input2;


	
	if(strcmp(input1, input2) == 0) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	




	
	int len = strlen(input);
	cout << "Length : " << len << endl;
	


}


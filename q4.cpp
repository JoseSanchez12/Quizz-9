// Jose Eduardo Sanchez Rosas / A00231961
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void palindrome(){
	string x; 
	string y;
	cout << "Enter the string: ";
	cin >> x;
	y = string(x.rbegin(), x.rend());
	cout << "Reverse string is: " << y << endl;
	if(x == y){
		cout << "Is a palindrome" << endl;
	}
	else{
		cout << "That is not a palindrome" << endl;
	}
}

int main(){
	
	palindrome();	
	return 0;
}
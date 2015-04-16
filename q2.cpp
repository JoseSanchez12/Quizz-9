// Jose Eduardo Sanchez Rosas / A00231961
#include <iostream>
#include <cmath>
using namespace std;

long superpower(long a, long b){
int power;
	power = pow((a),b);
	return power;
}

int main(){
int a, b;
	cout << "Dime el numero que quieres elevar: ";
	cin >> a;
	
	cout << "Ahora a lo que lo vas a elevar: ";
	cin >> b;
	
	cout << superpower(a,b) << endl;
	
return 0;
}

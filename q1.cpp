// Jose Eduardo Sanchez Rosas / A00231961
#include <iostream>
#include <cmath>
using namespace std;

void triangles(int x){
int z = 1;
string a = "T";
	
	while( z <= x ){
		for( int i = 1 ; i <= z; i++ ){
			cout << a;
}
	cout << endl;
	z++;
}
	while( z >= 0 ){
		for( int i = 2 ; i <= z ; i++ ){
			cout << a;	
}
	cout << endl;
		z--;
}
}

int main(){
	int a;
	cout<<"Dime el tamaño del triangulo: ";
	cin >> a;
 
	triangles(a);
 
return 0;	 
}

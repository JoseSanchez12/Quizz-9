// Jose Eduardo Sanchez Rosas / A00231961
#include <iostream>
using namespace std;

int fibonacci(long n){
   int next;
   int x1 = 0, x2 = 1;
	
   for(int i = 0; i < n; i++){
	
   	if( i <= 0 ){
	next = i;
	
   }else{
		next = x1 + x2;
		x1 = x2;
		x2 = next;
	}
   }
   return x2;
}
int main(){
	long n;
	cout << "Numero de fibonacci: ";
	cin >> n;
	
	cout << fibonacci(n) << endl;
	return 0;
}

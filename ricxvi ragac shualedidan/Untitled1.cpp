#include <iostream>
using namespace std;
int numerbeetweenAandB (int A, int B) {
	int number; 
	do { cout<<"ENTER A NUMBER BEETWEN "<<A<<" and "<<B<<":"; cin>>number;}
	while (number<A || number>B );
	return number;	
}
int main () {
	int A=0;
   int B=15;

	int number= numerbeetweenAandB (A, B);
	cout<<"YOUR ENTERED NUMBER IS:"<<number<<endl;
    return 0;
}

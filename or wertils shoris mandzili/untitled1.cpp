#include <iostream>
#include <cmath>
using namespace std;

struct point{
	double x;
	double y;
};
point shemotana(){
	point temp;
	cout<<"x=";cin>>temp.x;
	cout<<"y=";cin>>temp.y;
	return temp;
}
point zero(){
	point temp;
	temp.x=0;
	temp.y=0;
	return temp;
}
double mandzili(point A, point B){
	double tmp = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
	 return tmp;
}

int main(){
	unsigned int n=0;
	cout<<"n=";cin>>n;
	
	point M[n];
	for(int i=0;i<n;i++){
		M[i]=shemotana();
	};
	for(int i=0;i<n;i++){
		cout<<"mandzili "<<i<<"="<<mandzili(M[i],zero())<<"\n";
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
double moculoba(double h,double r, double R){
	int k=0;
	k=M_PI*h*(r*r+r*R+R*R)*1/3;
	return k;
}

int main(){	
	double h; cout<<"simagle=";cin>>h;
	double r; cout<<"patara wrewiris radiusi=";cin>>r;
	double R; cout<<"didi wrewiris radiusi=";cin>>R;
	cout<<"wakvetili cilindris moculoba="<<moculoba(h,r,R);
	
	
	
	return 0;
}

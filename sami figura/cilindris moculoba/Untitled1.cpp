#include <iostream>
#include <cmath>
using namespace std;
//cilindris zedapiris fartobisa da moculobis gamosatvleli programa
double fartobi (double h, double r){
	return 2*  M_PI *r*(r+h);
}
double moculoba (double h, double r){
	return M_PI *r*r*h;
}


int main(){	
	double h; cout<<"simagle=";cin>>h;
	double r; cout<<"radiusi=";cin>>r;
	cout<<"zedapirisFartobi="<<fartobi(h,r);
	cout<<"moculoba="<<moculoba(h,r);	

	
	
	
	
	return 0;
}

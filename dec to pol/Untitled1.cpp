
#include <iostream>
#include <cmath>
using namespace std;

struct Decpoint{
	double x;
	double y;
};
struct Polpoint{
	double ro;
	double fi;
};
Polpoint DectoPol(Decpoint p){
	Polpoint tmp;
	tmp.ro=sqrt(p.x*p.x+p.y*p.y);
	tmp.fi=atan2(p.y,p.x);
	return tmp;
}
Decpoint PoltoDec(Polpoint p){
	Decpoint tmp;
	tmp.x=p.ro*cos(p.fi);
	tmp.y=p.ro*sin(p.fi);
	return tmp;
}
int main ( ){
	//shegvaqvs struqturis elementebi
	Decpoint p1;
	cout << "sheiyvane x da y dekartulit:\n";cin >> p1.x >> p1.y;//sheyvana
	//sheyvanili elementebi gadayavs dekartul koordinatebshi metotxmete xazshi da brundeba 
	Polpoint p2 = DectoPol(p1);
	cout << "polaruli koordinatebi: (" << p2.ro << ", " << p2.fi << ")\n";
	//gadaqceul elementebs abrunebs sawyis mdgomareobashi PoltoDec funqciit
	Decpoint p3 = PoltoDec(p2);
	cout << "dekartuli coordinatebi: (" << p3.x << ", " << p3.y << ")\n";
	return 0;
}

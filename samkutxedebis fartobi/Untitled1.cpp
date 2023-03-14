#include <iostream>
#include <cmath>
using namespace std;
struct tringle {
    double gverdi1;
    double gverdi2;
    double gverdi3;
    double kutxe1;
    double kutxe2;
    double kutxe3;
};
double fartobi_1(double A,double B, double C){
    double p;
    p=(A+B+C)/2;
    return sqrt(p*(p-A)*(p-B)*(p-C));
}
double fartobi_2(double A, double B, double C) {
   double rad= C * M_PI / 180.0; // radianebshi gadayavs
     return 0.5*A*B*sin(rad); 
}
//mesameze unda gamogvetvala ori kutxita da 1 gverdit da formula ar vici
int main() {
    tringle c;
    cout<<"gverdi1=";cin>>c.gverdi1;
    cout<<"gverdi2=";cin>>c.gverdi2;
    cout<<"gverdi3=";cin>>c.gverdi3;
    cout<<"kutxe1=";cin>>c.kutxe1;    
    cout<<"kutxe2=";cin>>c.kutxe2; 
    cout<<"kutxe3=";cin>>c.kutxe3; 
    cout<<"sami gverdit migebuli fartobi="<<fartobi_1(c.gverdi1, c.gverdi2, c.gverdi3)<<endl;
     cout<<"ori gverdita da 1kutxit migebuli fartobi="<<fartobi_2(c.gverdi1, c.gverdi2, c.kutxe1)<<endl;
    //imistvis rom shevamowmot emtxveva tu ara pasuxebi chaweret ricxvebi zusti tanmimdevrobit. 
	//magalitad gverdi1=3
	//gverdi2=4
	//gverdi3=5
	//kutxe1=90.0
	//kutxe2=67.4
	//kutxe3=23.1
	//es aris zusti kutxeebi im shemtxvevashi tu samkutxedis gverdebia 3,4,5 :)

    return 0;
}

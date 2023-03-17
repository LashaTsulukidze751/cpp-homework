#include <iostream>
#include <cmath>


double fartobi(double h, double R){
    return 2 * h * M_PI * R * R;
};
double moculoba(double h, double R){
    return h * M_PI * R * R; 
}
int main() {
    unsigned int h;
    unsigned int R;
    std::cout <<"h="; std::cin>>h;
    std::cout <<"R="; std::cin>>R;
    std::cout<<"moculoba="<<moculoba(h,R)<<"\n";
    std::cout<<"zedapiris fartobi="<<fartobi(h,R)<<"\n";
    return 0;
}

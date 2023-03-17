#include <iostream>
#include <cmath>

struct Cilinder{
    double h;
    double R;
    double S();
    double V();
};
double Cilinder::S(){
    return 2 * h * M_PI * R * R;
};
double Cilinder::V(){
    return h * M_PI * R * R; 
}
int main() {
    Cilinder cilinder;
    std::cout <<"h="; std::cin>>cilinder.h;
    std::cout <<"R="; std::cin>>cilinder.R;
    std::cout<<"moculoba="<<cilinder.V()<<"\n";
    std::cout<<"zedapiris fartobi="<<cilinder.S();
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
struct point {
    double x;
    double y;
};
point shemotana(){
    point tmp;
    std::cout<<"x=";std::cin>>tmp.x;
    std::cout<<"y=";std::cin>>tmp.y;
    return tmp;
}


int main() {
    unsigned int n=0; std::cout<<"n=";std::cin>>n;
    
    point M[n];
    for(int i=0;i<n;i++){
        M[i]=shemotana();
    };
    for(int i=0;i<n;i++){
        std::cout << "M[" << i << "]: x=" << M[i].x << ", y=" << M[i].y << "\n";
    }
    return 0;
}

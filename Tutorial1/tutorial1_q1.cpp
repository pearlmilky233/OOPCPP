#include <iostream>
#include <cmath>
using namespace std;

double Volume(float r) {
    return (4.0/3.0) * M_PI *r*r*r;
}

int main(){
    double r = 5.6;
    cout << "The Volume of the sphere with r=5.6 is "
    << Volume(r) << endl;
    
    return 0;
}
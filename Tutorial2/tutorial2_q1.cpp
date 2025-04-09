#include <iostream>
#include <cmath>
using namespace std;
double a, b, c, D;

double Discri(double a, double b, double c){
    return pow(b, 2) - 4 * a * c;
}

int main(){
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    D = Discri(a, b, c);

    if (D > 0) cout << "The equation has two roots.";
    else if (D == 0) cout << "The equation has one root.";
    else if (D < 0) cout << "The equation has no real roots.";

    return 0;
}    

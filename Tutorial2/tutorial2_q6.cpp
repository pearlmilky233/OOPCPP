#include <iostream>
#include <cmath>
using namespace std;
double pi = 0;
int term = 0;

bool Judge(double pi){
    double pi_rounded = round(pi * 1000.0) / 1000.0;
    return (pi_rounded == 3.141);
}

int main()
{
    for (int i = 0; i < 5000; i++){
        pi += 4.0 * pow(-1, i) / (2 * i + 1);
        if (Judge(pi)){
            term = i + 1;
            break;
        }
    }
    cout << "It will use " << term << " terms to getting 3.141";

    return 0;
}
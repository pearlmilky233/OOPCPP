#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 7; i <= 100; i += 7){
        sum += i;
    }
    cout << "The sum of all multiples of 7 from 1 to 100 is " << sum << endl;

    return 0;
}
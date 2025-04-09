#include <iostream>
#include <vector>
using namespace std;
vector<double> rainfall = {154.9, 147.9, 180.0, 200.8, 165.9, 115.6, 118.1, 143.8, 171.2, 219.9, 271.2, 216.1};
double total = 0;
double average = 0;

int main(){
    for (int i =0; i < 12; i++){
        total += rainfall[i];
    }

    average = total / 12.0;

    cout << "The total rainfall for the year is " << total <<endl;
    cout << "The average monthly rainfall is " << average << endl;

    return 0;
}
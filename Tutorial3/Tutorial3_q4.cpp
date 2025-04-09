#include <iostream>
#include <vector>
#include <random>
using namespace std;

// random_device rd;
// default_random_engine generator(rd());
// uniform_int_distribution<int> distribution(1, 6);
// int randomNumber = distribution(generator);
vector<int> Frequency = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int DiceSum = 0;

int main(){
    srand(time(NULL));

    for(int i = 0; i < 36000; i++){
        DiceSum = (rand() % 6 + 1) + (rand() % 6 + 1);
        Frequency[DiceSum - 2]++;
    }

    cout << "The result of 36000 times of rolls...";
    for (int i = 0; i < 11; i++){
        cout << "Frequency of " << i + 2 << ": " << Frequency[i] << endl;
    }
    if ((double)Frequency[5] / 36000.0 - 1.0 / 6.0 < 0.01){
        cout << "Approximately one-sixth of all the rolls are 7(error is less than 1%)" <<endl;
        cout << "So, we can say that the totals are reasonable" << endl;
    }else{
        cout << "Since the error > 1%, we have no enough evidence to prove that the totals are reasonable" <<endl;
    }

    return 0;
}

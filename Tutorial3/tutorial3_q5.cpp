#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#define RANGE 1000
using namespace std;
vector<int> prime;

int main(){
    prime.assign(RANGE, 1);
    for (int i = 2; i < (RANGE + 1) / 2; i++){
        if (prime[i] == 1){
            for (int j = 2 * i; j <= RANGE; j += i){
                prime[j] = 0;
            }
        }
    }

    cout << "The result of the Sieve of Eratosthenes is below..." <<endl;
    for (int i = 2; i <= RANGE; i++){
        if (prime[i] == 1){
            cout << i << " ";
        }
    }

    return 0;
}
// Find the sum of all integers in the range 1-100, which are not divisible by 7
#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 1; i <= 8; i++){
        if (i % 7 == 0){
            continue;
        }
        sum += i;
    }
    cout << "The sum of the chosen integers is: " << sum;
    return 0;
}
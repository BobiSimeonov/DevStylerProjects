#include <iostream>

using namespace std;

int main(){
    // Nested ifs
    int number = 0;
    cout << "Enter a number:" << endl;
    cin >> number;

    if (number > 0) {
        if ((number%5 == 0) && (number%7 == 0)){
            cout << "The number " << number << " can be divided both by 5 and 7." << endl;
        } else {
            cout << "The number " << number << " is not divisible by both 5 and 7" << endl;
        }
    } else {
        cout << "The number " << number << " is not posiitive.";
    }

    // Alternative to the nested if code
    int number2 = 0;
    cout << "Enter a number:" << endl;
    cin >> number2;

    if ((number2 > 0) && (number2 % 5 == 0) && (number2 % 7 == 0)) {
        cout << "The number " << number2 << " can be divided both by 5 and 7." << endl;
    } else {
        cout << "The number " << number2 << " does not fit the requirements.";
    }

    // Practice for loop
    for(int i=1; i <=100; i++){
        cout << i << endl;
    }

    // Find all numbers between 1 and 1000, which are divisible by 5 and 7
    for (int i = 1; i <= 1000; i++){
        if ((i % 5 == 0) && (i % 7 == 0)){
            if (i == 280){
                continue;
            }
            cout << i << " is divisible by both 5 and 7." << endl;;
        }
    }
    return 0;
}
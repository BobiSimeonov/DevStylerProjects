#include <iostream>

using namespace std;

int main(){
// Set a top limit and a power index. Then print all numbers, which have a power of that index, smaller than that limit
    int upper_border = 0;
    cout << "Set the limit of the array: ";
    cin >> upper_border;
    int power_index = 0;
    cout << "Set the power index: ";
    cin >> power_index;
    int number = 1;

    while (true) {
        if (power_index == 0){
            cout << 1;
            break;
        }
        number
        number_on_power
        for (int i = 1; i <= power_index; i++){
            i *= i;
        if (i > upper_border) break;
        cout << i << endl;
        }
    }

    return 0;
}




// Print    *
//         **
//        ***
//       ****


// Print a diamond



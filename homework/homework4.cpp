#include <iostream>

using namespace std;

void problem1(){
    // Set a top limit and a power index. Then print all numbers, which have a power of that index, smaller than that limit
    int upper_border = 0;
    cout << "Set the limit of the array: ";
    cin >> upper_border;
    int power_index = 0;
    cout << "Set the power index: ";
    cin >> power_index;
    int number_on_power = 0;
    int current_base_number = 1;

    while (true) {
        if (power_index == 0){
            cout << "All int on power 0 = 1" << endl;
            break;
        }
        number_on_power = current_base_number;
        for (int i = 1; i < power_index; i++){
            number_on_power *= current_base_number;
        }
        if (number_on_power > upper_border) break;
        cout << current_base_number << " on power of " << power_index << " is " << number_on_power << endl;
        current_base_number++;
    }
}


void problem2(){
// Print    *
//         **
//        ***
//       ****
    cout << "Enter height of the triangle: ";
    int heigth = 0;
    cin >> heigth;
    for (int i = 0; i <= heigth; i++){
        for (int j = 0; j < heigth - i; j++){
            cout << " ";
        }
        for (int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
    }
}


void problem3(){
// Print a diamond          () are used instead of /\, as the latter create syntax issues
//          /*\         /*\
//         /***\       /***\
//        /*****\      \***/
//        \*****/       \*/
//         \***/
//          \*/
    cout << "Enter height of the diamond. Should be an even number: ";
    int heigth = 0;
    cin >> heigth;
    int space_counter = heigth / 2 - 1;
    int max_stars = 0;

    // Upper half
    for (int i = 0; i < heigth / 2; i++){
        for (int k = 0; k < space_counter; k++){
            cout << " ";
        }
        space_counter --;
        cout << "(";
        for (int j = 0; j < i * 2 + 1; j++){
            cout << "*";
            max_stars = j + 1;
        }
        cout << ')' << endl;
    }

    // Lower half
    space_counter = 0;
    for (int i = 0; i < heigth / 2; i++){
        for (int k = 0; k < space_counter; k++){
            cout << " ";
        }
        space_counter ++;
        cout << "(";
        for(int j = max_stars; j > 0 ; j--){
            cout << "*";
        }
        max_stars -= 2;
        cout << ')' << endl;
    }
}


int main(){

    //problem1();
    // problem2();
    problem3();
    return 0;
}

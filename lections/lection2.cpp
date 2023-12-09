#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int square_length = 0;
    // Square calculations, based on entered side
    cout << "Enter length of the square's side:" << endl;
    cin >> square_length;

    cout << "The square's perimeter equals: " << square_length * 4 <<endl;
    cout << "The square's area is: " << square_length * square_length << endl;
    cout << "Square with " << square_length << " cm side, has a " << square_length * sqrt(2.0)<< " diagonal." << endl;
    
    // Reverse a number and show its digits
    int number = 0;
    cout << "Enter a number to reverse" << endl;
    cin >> number;
    while (number > 0) {
        cout << number % 10 << endl;
        number /= 10;
    }
    
    // Show number's digits
    int number2 = 0;
    cout << "Enter a number" << endl;
    cin >> number2;
    string number_as_string = "";
    
    while (number2 > 0) {
        number_as_string += to_string(number2 % 10);
        number2 /= 10;
    }

    for (int i = size(number_as_string) - 1; i >= 0; i--){
        cout << number_as_string[i] << endl;
    }

    // Check if all 3 numbers are even
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Enter a" << endl;
    cin >> num1;
    cout << "Enter b" << endl;
    cin >> num2;
    cout << "Enter c" << endl;
    cin >> num3;

    if ((num1%2 == 0) && (num2%2 == 0) && (num3%2 == 0)){
        cout << "All three numbers: a, b, c are even." << endl;
    } else {
        cout << "One or more of the numbers is odd" << endl;
    }

    // Calculate number of minutes and seconds in an given amount of hours
    int hours = 0;
    cout << "Enter amount of hours" << endl;;
    cin >> hours;
    int min_in_hour = 60;
    int sec_in_min = 60;

    cout << "There are " << hours * min_in_hour << " minutes in " << hours << " hours." << endl;
    cout << "There are " << hours * min_in_hour * sec_in_min << " seconds in " << hours << " hours." << endl;


    // Sum of the two biggest numbers, out of 3 given ones
    int first_num = 0;
    int second_num = 0;
    int third_num = 0;

    cout << "Enter first number:" << endl;
    cin >> first_num;
    cout << "Enter second number: " << endl;
    cin >> second_num;
    cout << "Enter third number: " << endl;
    cin >> third_num;

    if ((first_num < second_num) && (first_num < third_num)){
        cout << "The two biggest numbers are: " << second_num << " and " << third_num << "." << endl;
        cout << "Their sum is: " << second_num + third_num << endl;
    } else if ((second_num < first_num) && (second_num < third_num)){
        cout << "The two biggest numbers are: " << first_num << " and " << third_num << "." << endl;
        cout << "Their sum is: " << first_num + third_num << endl;
    } else {
        cout << "The thwo biggest numbers are: " << first_num << " and " << second_num << "." << endl;
        cout << "Their sum is: " << first_num + second_num << endl;
    }

    // Enter a day number and get its name
    int day_number = 0;
    cout << "Enter a day number (should be lower than 8)." << endl;
    cin >> day_number;

    switch(day_number) {
        case 1: cout << "Mandag" << endl;
            break;
        case 2: cout << "Tuesday" << endl;
            break;
        case 3: cout << "Onsdag" << endl;
            break;
        case 4: cout << "Torsdag" << endl;
            break;
        case 5: cout << "Fredag" << endl;
            break;
        case 6: cout << "Lordag" << endl;
            break;
        case 7: cout << "Sondag" << endl;
            break;
        default: cout << "The day number you have entered is not valid." << endl;
            break;
    }

    // Those array bastards
    char yohoo_an_array[3] = {'a', 'b', 'c'};
    cout << yohoo_an_array;
    return 0;
}
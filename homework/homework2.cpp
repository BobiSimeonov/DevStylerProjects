// Create a program that convers a user-given temperature from celsius to Farenheit and vice verasa
#include <iostream>
using namespace std;

int main(){
    string given_temperature_type = "";
    cout << "Choose the type of temperature you want to enter. F - Farenheit, C - Celsius" << endl;
    cin >> given_temperature_type;

    double given_temperature = 0;
    cout << "Enter the temperature you want to check: ";
    cin >> given_temperature;
    double result = 0;

    if (given_temperature_type == "F"){
        result = (given_temperature - 32) * 5 / 9;
        cout << given_temperature << "F equals " << result <<"C.";
    } else if (given_temperature_type == "C"){
        result = (given_temperature * 9 / 5) + 32;
        cout << given_temperature << "C equals " << result <<"F.";
    } else {
        cout << "You chose a wrong type of temperature type.";
    }

    return 0;
}
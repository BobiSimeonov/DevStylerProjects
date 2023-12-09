#include <iostream>
#include <array>
using namespace std;

int main(){

    //First while loop
    int counter = 0;
    while(counter < 10){
        counter++;
        if (counter % 5 == 0){
            continue;
        }
        cout << counter << endl;
    }

    // First do-while loop
    int i = 0;
    do {
        cout << i << endl;
        i++;
    } while (i < 10);

    // Weather simulation
    int temperature [30] = {12,13,41,14,23,11,22,34,1,22,14,12,41,15,54,12,45,32,13,53,21,22,23,24,25,26,27,28,28,30};
    for (int i = 0; i < 30; i++){
        cout << temperature[i] << endl;
    }

    // Second temp exercise
    int temperature2[5];
    int new_element = 0;
    double total_temperature = 0;
    double average_temperature = 0;

    for (int i = 0; i < size(temperature2); i++){
        cout << "Enter temeperature for day " << i+1 << ": ";
        cin >> new_element;
        temperature2[i] = new_element;
        total_temperature += new_element;
        }

    for (int i = 0; i < size(temperature2); i++){
    cout << "The temperature for day " << i+1 << " is " << temperature2[i] << endl;
    }

    average_temperature = total_temperature / size(temperature2);
    cout << "The average temperature for the period is " << average_temperature << endl;

    // First vectors
    int array_size = 0;
    cout << "Enter array size: ";
    cin >> array_size;
    int temperature3[array_size];
    int daily_temperature;
    double sum_temperature = 0;
    double average_temp = 0;

    for (int i = 0; i < array_size; i++){
        cout << "Enter temperature: ";
        cin >> daily_temperature;
        sum_temperature += daily_temperature;
        temperature3[i] = daily_temperature;
    }
     cout << "The total temeprature is: " << sum_temperature << endl;
     average_temp = sum_temperature / array_size;
     cout << "The average daily temperature is: " << average_temp << endl;

    for (int i = 0; i < array_size; i++){
        cout << "The temperature for day " << i+1 << " is " << temperature3[i] << endl;
    }

    // 

    return 0;
}
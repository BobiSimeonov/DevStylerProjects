#include <iostream>
using namespace std;

int main(){

    // First loop exercise
    int N = 0;
    int a = 0;
    int b = 0;

    cout << "Enter the three digits." << endl;
    cout << "Where first number is the upper border of the array that would be explored." << endl;
    cout << "Second number is first divider and third number is the second divider." << endl;
    cin >> N >> a >> b;
    for (int i = 1; i <= N; ++i){
        if ((i % a == 0) && (i % b ==0)){
            cout << i << " ";
        }
    }
    cout << endl;

    // Get prime numbers within a range
    int upper_border = 0;
    int counter = 0;
    cout << "Enter the upper limit." << endl;
    cin >> upper_border;
    for (int i = 1; i <= upper_border; ++i){
        for (int j = 2; j < i; ++j){
            if (i % j == 0){
                counter++;
            }
        }
        if (counter == 0){
            cout << i << " ";
        }
        counter = 0;
    }
    cout << endl;


    // Enter a number - limit and print all number that on a cubic power are still lower then the number
    int upper_lim = 0;
    int max_fitting_value = 0;
    cout << "Enter upper limit" << endl;
    cin >> upper_lim;
    for (int i = 1; i*i*i < upper_lim; i++){
        if (i > max_fitting_value){
            max_fitting_value = i;
        }
        cout << i << " ";
    }
    cout << endl << "All fit the requirements of the loop." << endl << "The highest value is: "<< max_fitting_value << endl;
    
    // Enter a series of numbers and print the highes and lowest
    int amount_numbers = 0;


    // We have upper and lower border ints, find the sum of all numbers between them, excluding them
    int begining = 0;
    int finish = 0;
    cout << "Enter lower border: ";
    cin >> begining;
    cout << "Enter upper border: ";
    cin >> finish;
    int sum = 0;

    for (int i = begining + 1; i < finish; i++){
        sum += i;
    }
    cout << "The final sum is: " << sum << endl;

    // Print out half a triangle of stars, using loops
    int hight = 0;
    cout << "Enter height of the triangle: ";
    cin >> hight;
    for (int i = 0; i <= hight; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    } 
    

    // Print out a reversed half a triangle
    int triangle_hight = 0;
    cout << "Enter height: ";
    cin >> triangle_hight;
    for (int i = 0; i <= triangle_hight; i++){
        for (int j = triangle_hight; j > i ; j--){
            cout << "*";
        }
        cout << endl;
    }

    // Print all numbers, which have a squared power that is lower than a given number
    int n = 0;
    cout << "Enter the top number: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        if (i * i < n){
            cout << i << " -> " << i * i << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

void problem1(){
    cout << "     Problem 1:" << endl;
    // Creating and filling a matrix with user input
    int rows = 0;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int columns = 0;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int arr2[rows][columns];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << "Enter an element for coordinates: " << i << "/" << j << ": ";
            cin >> arr2[i][j];
        }
    }

    // Printing out the matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}

void problem2(){
    // User creates an int matrix and program outputs the result of the multiplication of all numbers, devisible by 5
    cout << "     Problem 2:" << endl;
    int row = 0;
    int col = 0;
    cout << "Enter numbers of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    long product = 1;

    int arr[row][col];

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << "Set a value for coordinates: " << i << "/" << j << ": ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if (arr[i][j] % 5 == 0){
                product *= arr[i][j];
            }
        }
    }

    cout << "Result is: " << product << endl;
}

void problem3(){
    cout << "     Problem 3:" << endl;
    // Create a program that takes the temperatures each day (rows are weeks) and prints out the days, the temperature was higher than a user given temperature
    int col = 7; // There are 7 days in a week
    int row = 0;
    int number_days = 0;
    int current_day = 0;
    cout << "Enter number of days on the record: ";
    cin >> number_days;
    if (number_days % 7 == 0){
        row = number_days / 7;
    } else {
        row = number_days / 7 + 1;
    }
    int temperatures[row][col];
    int counter = 0;
    int desired_temperature = 0;
    int week_number = 0;
    string day = "";

    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            cout << "Enter temperature for day " << current_day << ": ";
            cin >> temperatures[r][c];
        }
    }

    cout << "Enter desired temeperature: ";
    cin >> desired_temperature;

    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            current_day++;
            if (temperatures[r][c] > desired_temperature){
                counter++;
                week_number = current_day / 7 + 1;
                switch (c){
                    case 0: day = "Monday"; 
                        break;
                    case 1: day = "Tuesday";
                        break;
                    case 2: day = "Wednesday";
                        break;
                    case 3: day = "Thursday";
                        break;
                    case 4: day = "Friday";
                        break;
                    case 5: day = "Saturday";
                        break;
                    case 6: day = "Sunday";
                        break;
                }
                

            }
        }
    }
}


int main(){
    // Declaring a nested array:
    int arr[2][4] = {
        {11, 12, 45, 55},
        {23, 45, 56, 77},
    };
    int certain_element = 0;

    // Iterating through a nested array:
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++){
          certain_element = arr[i][j];  
        }
    }


    // problem1();
    // problem2();
    problem3();
    return 0;
}
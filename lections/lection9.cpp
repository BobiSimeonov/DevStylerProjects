#include <iostream>
using namespace std;

void problem1(){
// Create a square int matrix, fill its cells and print sum of the values of the elements on the main diagonal.
cout << "     Problem 1:" << endl;
int size = 0;
cout << "Enter the dimensions of the int matrix: ";
cin >> size;
int sum = 0;
int matrix[size][size];

for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
        cout << "Enter a value for cell with coordinates: " << i << "/" << j << ": ";
        cin  >> matrix[i][j];
    }
}
for (int i = 0; i < size; i++){
    sum += matrix[i][i];
}
cout << "The sum is: " << sum << endl;
}

void problem2(){
// Create an int, square matrix and input the values of its elements. Then print out the sum of the 
// elements, under the main diagonal and the value + coordinates of the biggest one.
cout << "     Problem 2:" << endl;;
cout << "Enter the size of the int square matrix: ";
int size = 0;
cin >> size;
int matrix[size][size];
int sum = 0;
int row = 0;
int col = 0;

for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
        cout << "Enter a value for cell with coordinates: " << i << "/" << j << ": ";
        cin  >> matrix[i][j];
    }
}

int max = INT_MIN;
for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
        if (i > j){
            sum += matrix[i][j];
            if (matrix[i][j] > max){
                max = matrix[i][j];
                row = i;
                col = j;
            }
        } else {
            continue;
        }
    }
}

cout << "The sum of the elements is: " << sum << endl;
cout << "The biggest element is: " << max << " at coordinates: " << row << "/" << col << endl;
}


void problem3(){
// Create an int, square array with and input its elements. Copy the elements from under the diagonal
// into a new array. Print out the new array.
cout << "     Problem 3:" << endl;
int size = 0;
cout << "Enter the size of the matrix: ";
cin >> size;
int matrix[size][size];
int res_size = (size*size - size)/2;
cout << res_size;
int res[res_size]; 
int counter = 0;    

for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
        cout << "Enter a value for cell with coordinates: " << i << "/" << j << ": ";
        cin  >> matrix[i][j];
    }
}
for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++){
        if (i > j){
            res[counter] = matrix[i][j];
            counter++;
        } 
    }
}

cout << "The new array is:" << endl << "[";
for (int i = 0; i < res_size; i++){
    if (i == res_size - 1){
        cout << res[i] << "]" << endl;
    } else {
        cout << res[i] << " ";
   
    }
}
}

void problem4(){
// Creating a matrix, filled with zeroes
    cout << "     Problem 4:" << endl;
    int arr[5][5] = {}; // Initiation

    for (int i = 0; i <5; i++){ // Just to print out the result
        cout << "Line " << i << endl;
        for (int j = 0 ; j < 5; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    // problem1();
    // problem2();
    // problem3();
    problem4();

    return 0;
}
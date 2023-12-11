#include <iostream>
using namespace std;


void problem5(){
    // For a int array with length n, print out all elements higher than the array's average
    cout << "              Problem 5:" << endl;
    int n = 0;
    cout << "Enter the array's length n: ";
    cin >> n;
    int arr[n];
    double average = 0;

    for (int i = 0; i < n; i++){
        cout << "Enter element value " << i << ": ";
        cin >> arr[i];
        average += arr[i];
    }
    average = average / n;

    cout << "Result is: " << endl;
    for (int i = 0; i < n; i++){
        if (arr[i] > average){
            cout << arr[i] << endl;
        }
    }
}

void problem1(){
// For given char array with len n, find element k and print it. If it is not part of the array, print out -1
    cout << "      Problem 1:" << endl;
    int n = 0;
    cout << "Enter the length of the array: ";
    cin >> n;
    char k;
    cout << "Enter desired character: ";
    cin >> k;
    char arr[n];
    bool flag = true;
    int foundIndex = -1;

    for (int i = 0; i < n; i++){
        cout << "Enter element value " << i << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == k){
            cout << "Result is: " << arr[i] << endl;
            flag = false;
            break;
        }
    }
    if (flag == true){
        cout << "Result is: " << foundIndex << endl;
    }
}

void problem2(){
// Print how many times a certain element exists in an array
    cout << "      Problem 2:" << endl;
    int n1 = 0;
    char k1;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter k1: ";
    cin >> k1;
    char arr1[n1];
    int counter = 0;

    for (int i = 0; i < n1; i++){
        cout << "Enter element value " << i << ": ";
        cin >> arr1[i];
    }

    for (int i = 0; i < n1; i++){
        if (arr1[i] == k1){
            counter++;
        }
    }

    cout << "Result: " << counter << endl;

}

void problem3() {
// FInd biggest element in an int array and print its index and value
    cout << "      Problem 3:" << endl;
    int n2 = 0;
    cout << "Enter n2: ";
    cin >> n2;
    int arr2[n2];
    int maxVal;
    int maxIndex = 0;

    for (int i = 0; i < n2; i++){
        cout << "Enter element value " << i << ": ";
        cin >> arr2[i];
    }
    maxVal = arr2[0];
    for (int i = 0; i < n2; i++){
        if (maxVal < arr2[i]){
            maxVal = arr2[i];
            maxIndex = i;
        }
    }
    cout << "Element: " << maxVal << endl << "Index: " << maxIndex << endl;
}

void problem4(){
// We have an int array with len n, print out the maximum and minimum values
    cout << "      Problem 4:" << endl;
    int n3 = 0;
    cout << "Enter length of array: ";
    cin >> n3; 
    int arr3[n3];
    int maxVal1;
    int minVal1;

    for (int i = 0; i < n3; i++){
        cout << "Enter element value " << i << ": ";
        cin >> arr3[i];
    }
    maxVal1 = arr3[0];
    minVal1 = arr3[0];

    for (int i = 0; i < n3; i++){
        if (maxVal1 < arr3[i]){
            maxVal1 = arr3[i];
        }
        if (minVal1 > arr3[i]){
            minVal1 = arr3[i];
        }
    }
    cout << "The maximum value is: " << maxVal1 << endl;
    cout << "The minimum value is: " << minVal1 << endl;
}


int main(){

    // problem1();
    // problem2();
    // problem3();
    // problem4();
    
    return 0;
}



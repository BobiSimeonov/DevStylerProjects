// In len n array, filled with 3 digit numbers, print out all elements, which have a sum of digits = 9. If none exists, print a msg that none exists

#include <iostream>
using namespace std;

int main(){
    int arr_len = 0;
    cout << "Enter the length of the array: ";
    cin >> arr_len;
    int arr[arr_len];
    int desired_nums[arr_len] = {arr_len * 0};
    bool flag = false;
    int temp = 0;
    int hundreds = 0;
    int tens = 0;
    int ones = 0;
    string msg = "There are not any numbers in the array, which have a sum of its digits, equal to 9.";

    for (int i = 0; i < arr_len; i++){
        cout << "Enter a three digit number: ";
        cin >> temp;
        arr[i] = temp;
        hundreds = temp / 100;
        tens = (temp - hundreds * 100) / 10;
        ones = (temp - hundreds * 100) % 10;

        if (hundreds + tens + ones == 9){
            desired_nums[i] = temp;
            flag = true;
        }        
    }

    if (flag == false){
        cout << msg;
    } else  {
        for (int i = 0; i < arr_len; i++){
            if (desired_nums[i] != 0){
            cout << desired_nums[i] << " ";
            }
        }
    }

    return 0;
}



// Defining an irray, with user-inputted length
// int n;
// cin >> n;

// int *arr = new int[n];

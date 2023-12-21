# include <iostream>

using namespace std;

void print_line(int start, int end){
    for (int i = start; i <= end; i++){
        cout << " " << i;
    }
    cout << endl;

}

void numbers_triangle(int end){
    for (int i = 1; i <= end; i++){
        print_line(1, i);
    }
    for (int i = end -1; i >= 1; i--){
        print_line(1, i);
    }

}

void get_max(int first_number, int second_number){
    int bigger_number = 0;
    if (first_number > second_number){
        bigger_number = first_number;
    } else if (second_number > first_number){
        bigger_number = second_number;
    } else{
        cout << "The two numbers are equal." << endl;
        return;
    }
    cout << bigger_number << " is the bigger number." << endl;

}

void get_max(int first, int second, int third){
    int biggest_number = 0;
    if (first == second == third){
        cout << "All numbers are equal.";
        return;
    } else if (first >= second && first >= third){
            biggest_number = first;
    } else if (second >= first && second >= third){
        biggest_number = second;
    } else if (third >= first && third >= second){
        biggest_number = third;
    }
    cout << biggest_number << " is the biggest number." << endl;

}

float findX(float a, float b){
    return (-b/a);
}

void printLastDigit(int number){
    int last_digit = number % 10;
    switch(last_digit){
        case 0: cout << "Zero" << endl; break;
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        case 3: cout << "Three" << endl; break;
        case 4: cout << "Four" << endl; break;
        case 5: cout << "Five" << endl; break;
        case 6: cout << "Six" << endl; break;
        case 7: cout << "Seven" << endl; break;
        case 8: cout << "Eight" << endl; break;
        case 9: cout << "Nine" << endl; break;
        default: cout << "Error" << endl; break;

    }
}

int findNumberOfIntervals(int arr[], int size){
    int count = 1;

    for (int i = 1; i < size; ++i){
        if (arr[i] - arr[i-1] > 1){
            count++;
        }
    }
    return count;
}


int main(){
    //      Problem 1:

    // int last_number = 0;
    // cout << "Enter the last number for the triangle: ";
    // cin >> last_number;
    // numbers_triangle(last_number);



    //      Problem 2:

    // int num1 = 0;
    // cout << "Enter the first number: ";
    // cin >> num1;
    // int num2 = 0;
    // cout << "Enter the second number: ";
    // cin >> num2;
    // get_max(num1, num2);



    //      Problem 3:

    // int first_number = 0;
    // int second_number = 0;
    // int third_number = 0;
    // cout << "Enter first number: ";
    // cin >> first_number;
    // cout << "Enter second number: ";
    // cin >> second_number;
    // cout << "Enter third number: ";
    // cin >> third_number;
    // get_max(first_number, second_number, third_number);



    //      Problem 4:

    // float a = 0;
    // float b = 0;
    // cout << "Enter first float: ";
    // cin >> a;
    // cout << "Enter second float: ";
    // cin >> b;
    // cout << findX(a, b) << endl;



    //      Problem 5:

    // int number = 0;
    // cout << "Enter a number: ";
    // cin >> number;
    // printLastDigit(number);



    //      Problem 6:

    // int arr[] = {3, 4, 6, 7, 8, 9, 11, 22, 33};
    // int size = 9;
    // cout << findNumberOfIntervals(arr, size) << endl;


    //      Problem 7:

    int arr[100];
    int n = 0;
    cout << "Enter value for n: ";
    cin >> n;
    int temp = 0;
    for (int i = 0; i < n; i++){
        cout << "Enter value for element " << i << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
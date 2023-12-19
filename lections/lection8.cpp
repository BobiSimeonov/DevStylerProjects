#include <iostream>
using namespace std;

void problem1(){
    // Create an int matrix with dimensions n and m. Print out the sum of all elements
    // Print the sum of all elements in the top-left, bottom right diagonal
    // Print out the highest element in the botom left triangle of the matrix (under the diagonal)
    cout << "     Problem 1:" << endl;
    int height = 0;
    int width = 0;
    cout << "Enter the heigth of the matrix: ";
    cin >> height;
    cout << "Enter the width of the matrix: ";
    cin >> width;
    int sum = 0;
    int bottom_sum = 0;
    int top_sum = 0;
    int max_bottom = INT_MIN;

    int matrix[height][width];
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            cout << "Enter value for coordinates " << i << "/" << j << ": ";
            cin >> matrix[i][j];
            sum += matrix[i][j];
            if (i > j){
                bottom_sum += matrix[i][j];
                if (matrix[i][j] > max_bottom){
                    max_bottom = matrix[i][j];
                }
            } else if (j > i){
                top_sum += matrix[i][j];
            }
        }
    }
    cout << "Total matrix sum = " << sum << endl;
    cout << "Top triangle sum = " << top_sum << endl;
    cout << "Bottom triangle sum = " << bottom_sum << endl;
    cout << "Highest value in bottom triangle is: " << max_bottom << endl;




}


void problem2(){
// Make m*n matrix, find the 2x2 matrix inside it, which has the biggest sum of its numbers
    cout << "     Problem 2:" << endl;
    int height = 0;
    int width = 0;
    cout << "Enter the heigth of the matrix: ";
    cin >> height;
    cout << "Enter the width of the matrix: ";
    cin >> width;
    int sum = INT_MIN;
    int x = 0;
    int y = 0;
    
    int matrix[height][width];
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            cout << "Enter value for coordinates " << i << "/" << j << ": ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < height - 1; i++){
        for (int j = 0; j < width - 1; j++){
            int temp_sum = matrix[i][j] + matrix[i+1][j] + matrix[i][j+1] + matrix[i+1][j+1];
            if (temp_sum > sum){
                sum = temp_sum;
                x = i;
                y = j;
            }
        }
    }
    for (int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The square with highest sum has coordinates:" << endl;
    cout << x << "/" << y << " " << x << "/" << y + 1 <<endl;
    cout << x+1 << "/" << y << " " << x+1 << "/" << y+1 << endl << endl;
    cout << matrix[x][y] << "/" << matrix[x][y+1] << endl;
    cout << matrix[x+1][y] << "/" << matrix[x+1][y+1] << endl << endl;
    cout << "Which has a sum of " << sum << endl;
}


void problem3(){
// Give an input, which day of the week is 1st of January and whether its a leap year (366 days). The program should output all
// the months that have friday the 13th in it.
    cout << "     Problem 3:" << endl;
    string week_days[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string month_name = ""; 
    int starting_day = 0;
    int seeked_day = 13;
    int seeked_day_for_month = 0;
    string starting_day_words = "";
    string leap_year = "";
    

    cout << "Type down which day the first of January is. Use lower letters: ";
    cin >> starting_day_words;
    for (int i = 0; i < size(week_days); i++){
        if (starting_day_words == week_days[i]){
            starting_day = i;
            break;
        }
    }
    cout << "Is the year leap? Type 'y' for yes and 'n' for no.  ";
    cin >> leap_year;
    if (leap_year == "y"){
        days_per_month[1] += 1;
    }

    for (int i = 0; i < size(days_per_month); i++){
        seeked_day_for_month = seeked_day + starting_day;
        seeked_day_for_month = (seeked_day_for_month % size(week_days))-1;
        if (seeked_day_for_month == 4){
            switch (i)
            {
            case 0: month_name = "January"; break;
            case 1: month_name = "February"; break;
            case 2: month_name = "March"; break;
            case 3: month_name = "April"; break;
            case 4: month_name = "May"; break;
            case 5: month_name = "June"; break;
            case 6: month_name = "July"; break;
            case 7: month_name = "August"; break;
            case 8: month_name = "September"; break;
            case 9: month_name = "October"; break;
            case 10: month_name = "November"; break;    
            default: month_name = "December"; break;
            }
            cout << month_name << endl;
        }
        starting_day = ((days_per_month[i] + starting_day) % size(week_days));;
    }

}

void problem4(){
// We have a street with houses on both sides. The houses' numbers are divided: even on one side,
// odd at the other. User inputs the starting number of the first house and the amount of total
// number of houses (on one side). The house's number plates consists of single digits: For example a house
// with number 11, needs to plates of 1. The program prints out how many plates of each digit
// we need to cover all houses on the street.

int total_number_of_plates = 0;
int number_ones = 0;
int number_two = 0;
int number_three = 0;
int number_four = 0;
int number_five = 0;
int number_six = 0;
int number_sever = 0;
int number_eight = 0;
int number_nine = 0;
int number_zero = 0;
int starting_house = 0;
cout << "Enter the number of the first house: ";
cin >> starting_house;
int final_house_number = 0;
cout << "Enter the number of the last house: ";
cin >> final_house_number;
int number_of_digits = 0;
int temp_final_house = final_house_number;


if (final_house_number < starting_house){
    cout << "The number of the last house, should be higher than the number of the initial house." << endl;
    return;
}

do {                                        // This do_while loop gets the number of digits in the number of the last house.
    number_of_digits++;
    temp_final_house /= 10;
} while (temp_final_house != 0);



for (int i = 0; i < final_house_number + 2; i += 2){
}
}


int main(){
    
    // problem1();
    // problem2();
    // problem3();
    problem4();
    return 0;
}

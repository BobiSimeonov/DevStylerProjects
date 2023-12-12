#include <iostream>
using namespace std;

void problem1(){
// Make m*n matrix, find the k*k matrix inside it, which has the biggest sum of its numbers
cout << "     Problem 1:" << endl;
while (true){
    int height = 0;
    int width = 0;
    cout << "Enter the heigth of the matrix: ";
    cin >> height;
    cout << "Enter the width of the matrix: ";
    cin >> width;
    int a = 0;
    int b = 0;
    cout << "Enter the heigth of the inner matrix: ";
    cin >> a;
    if (a > height){
        cout << "The inner matrix cannot be higher than the base/outer one." << endl;
        break;
    }
    cout << "Enter the width of the inner matrix: ";
    cin >> b;
    if (b > width){
        cout << "The inner matrix cannot be wider than the base/outer one." << endl;
        break;
    }
    int sum = INT_MIN;
    int x = 0;
    int y = 0;
    int temp_sum = 0;
    
    int matrix[height][width];
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            cout << "Enter value for coordinates " << i << "/" << j << ": ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < height - a; i++){
        for (int j = 0; j < width - b; j++){
            for (int h = 0; h < a; h++){
                for (int f = 0; f < b; f++){
                    temp_sum += matrix[h][f];
                }
            }
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
    cout << "Sum of inner rectangle: " << sum << endl;
}
}



void problem2(){
// Give an input, which day of the week is 1st of January and whether its a leap year (366 days). The program should output all
// the months that have a certain mix of weekday + date.

    cout << "     Problem 3:" << endl;
    string week_days[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string month_name = ""; 
    int starting_day = 0;
    int seeked_day = 0;
    string seeked_weekday = "";
    int seeked_weekday_num = 0;
    int seeked_day_for_month = 0;
    string starting_day_words = "";
    string leap_year = "";
    
    cout << "Enter the date you will look for: ";
    cin >>seeked_day;
    cout << "Enter the weekday you will look for (lower letters): ";
    cin >> seeked_weekday;
    for (int i = 0; i < size(week_days); i++){
        if (seeked_weekday == week_days[i]){
            seeked_weekday_num = i;
            break;
        }
    }
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
        if (seeked_day_for_month == seeked_weekday_num){
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
        starting_day = ((days_per_month[i] + starting_day) % size(week_days));
    }
}


int main(){

    // problem1();
    problem2();
    return 0;
}
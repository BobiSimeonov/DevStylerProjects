# include <iostream>
# include <string>

using namespace std;

void reverse_string(string original_string);
void count_vowels(string searched_string);
int max_of_three_ints(int first, int second, int third);

int main(){
    // Task 1:
    // Take a string as an input and print it out in reverse
    string original_string = "";
    cout << "Enter the string you want to reverse:" << endl;
    cin >> original_string;
    reverse_string(original_string);


    // Task 2:
    // Take a sentence as an input and print out how many times each vowel is present in the string.
    string searched_string = "";
    cout << "Enter the string you want to be analyzed:" << endl;
    cin >> searched_string;
    count_vowels(searched_string);


    // Task 3:
    // Take three ints as input and print out the value of the biggest one
    int first = 0;
    int second = 0;
    int third = 0;
    int result = 0;

    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Enter the third number: ";
    cin >> third;

    result = max_of_three_ints(first, second, third);
    cout << "The biggest number of the three values is: " << result << endl;


    return 0;
}


void reverse_string(string original_string){
    string reversed_string = "";
    int length_of_string = original_string.length();
    for (int i = length_of_string - 1; i >= 0; i--){
        reversed_string.push_back(original_string[i]);
    }
    cout << "in reverse is:" << endl << reversed_string << endl;
}


void count_vowels(string searched_string){
    int vowels_counter[6] = {};
    for (int i = 0; i < searched_string.size(); i++){
        switch(searched_string[i]){
            case 'a': vowels_counter[0]++;
                break;
            case 'e': vowels_counter[1]++;
                break;
            case 'i': vowels_counter[2]++;
                break;
            case 'o': vowels_counter[3]++;
                break;
            case 'u': vowels_counter[4]++;
                break;
            case 'y': vowels_counter[5]++;
                break;
        }
    }

    for (int i = 0; i < 6; i++){
        switch(i){
            case 0: if (vowels_counter[i] == 1){
                cout << "There is " << vowels_counter[i] << " 'a's in the string." << endl;
            } else {
                cout << "There are " << vowels_counter[i] << " 'a's in the string." << endl;
            }
                break;
            case 1: if (vowels_counter[i] == 1){
                cout << "There is " << vowels_counter[i] << " 'e's in the string." << endl;
            } else {
                cout << "There are " << vowels_counter[i] << " 'e's in the string." << endl;
            }
                break;
            case 2: if (vowels_counter[i] == 1){
                cout << "There is " << vowels_counter[i] << " 'i's in the string." << endl;
            } else {
                cout << "There are " << vowels_counter[i] << " 'i's in the string." << endl;
            }
                break;
            case 3: if (vowels_counter[i] == 1){
                cout << "There is " << vowels_counter[i] << " 'o's in the string." << endl;
            } else {
                cout << "There are " << vowels_counter[i] << " 'o's in the string." << endl;
            }
                break;
            case 4: if (vowels_counter[i] == 1){
                cout << "There is " << vowels_counter[i] << " 'u's in the string." << endl;
            } else {
                cout << "There are " << vowels_counter[i] << " 'u's in the string." << endl;
            }
                break;
            case 5: if (vowels_counter[i] == 1){
                cout << "There is " << vowels_counter[i] << " 'y's in the string." << endl;
            } else {
                cout << "There are " << vowels_counter[i] << " 'y's in the string." << endl;
            }
                break;
        }
    }
}


int max_of_three_ints(int first, int second, int third){
    if (first >= second && first >= third){
        return first;
    } else if (second >= first && second >= third){
        return second;
    } else {
        return third;
    }
}

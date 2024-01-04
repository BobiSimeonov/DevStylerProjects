# include <iostream>
# include <string>

using namespace std;


void printSignOfNumber(int number){
    if (number < 0){
        cout << number << " is a negative number." << endl;
    } else if (number == 0){
        cout << number << " is considered neither possitive, nor negative." << endl;
    } else {
        cout << number << " is a possitive number." << endl;
    }
}


string returnSignOfNumber(int number){
    if (number < 0){
        return to_string(number) + " is a negative number.";
    } else if (number == 0){
        return to_string(number) + " is considered neither possitive, nor negative.";
    } else {
        return to_string(number) + " is a possitive number.";
    }
}


void sumOfTwoNumbers(int num1, int num2){
    cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
}


int main(){
    // Tests for printSignOfNumber function

    // int number = 0;
    // cout << "Enter first number: ";
    // cin >> number;
    // printSignOfNumber(number);
    // cout << "Enter a number again: ";
    // cin >> number;
    // printSignOfNumber(number);
    // cout << "Enter a number again: ";
    // cin >> number;
    // printSignOfNumber(number);


    // Test for returnSignOfNumber

    // string result = "";
    // int number = 0;
    // while (true){
    //     cout << "Enter a number: ";
    //     cin >> number;
    //     result = returnSignOfNumber(number);
    //     cout << result << endl;
    // }


    // Test for sumOfTwoNumbers

    // int number1 = 0;
    // cout << "Enter the first number: ";
    // cin >> number1;
    // int number2 = 0;
    // cout << "Enter the second number: ";
    // cin >> number2;
    // sumOfTwoNumbers(number1, number2);


    // Strings

    string text = "Hello, C++";
    int len = text.length();    // Gets the length of the string
    char letter = text.at(4);   // Gets the character at index 4
    char letter2 = text[4];     // Accessing the character at index 4, same as "at()"
    cout << len << endl << letter << endl << letter2 << endl;
    cout << "Enter a new value for the string: "; // Alternative to the regulat cin. Can also be used
                                                  // to read from a file.
    getline(cin, text);
    cout << text << endl;

    string aString = "Ala bala";
    string bString = "Balanica";
    string cString = aString + " " + bString;    // String concactanation

    // Strings can be compared with:   ==, <, >. The comparison occurs letter by letter
    // and compares their ASCI table values. For example if the first letters are different,
    // it makes the result based only on that. If all symbols are the same, the strings are equal,
    // if symbols are the same, but there is a difference in the length (spaces at the end of one
    // of the strings) they are different.
    int num = aString.compare(bString);    // Compares the two strings based on ASCI table. Returns -1, 0 or 1
    string one = "i";
    string two = "yai yai";
    string three = one.append(two);     // The append method also concatanates strings, the same as the "+".
    cout << three << endl;              // However it is the better to use append, rather than "+", as the
                                        // "+" requires the creation of a new string, each time it is used. Hence
                                        // it is far more memory and time eficient to use "append". However
                                        // "append" can add strings, but not chars
    three.push_back('i');               // Use push_back to append with a char

    int indexy = two.find("ai");        // Returns the index of the first apperance of "ai" in two (the whole string)
    int index = two.find_first_of("ai");// Looks for the first apperance of "a" or "i" in two. Can add an extra parameter, to instruct
                                        // the compiler to search after a sertain index find_first_of("ai", 3). Looks individualy for whichever 
                                        // char it finds first.

    string result = one.replace(0, 1, "o"); // Starting at index "0", replace "1" of char at index 0 with "o". If we change "1" to "2", it will look for 2 chars identical to the char at index "0".
    cout << one << endl;


                                    
    
    return 0;
}

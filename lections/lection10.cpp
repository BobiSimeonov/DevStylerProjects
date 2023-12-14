#include <iostream>
#include <string>

using namespace std;


class Car{
// By convention, the order of placing things in the class is: public -> protected -> private.
public:
    // The following is a constructor. Used only once for each instance, during its initialization.
    // If we would like to change the values of the attributes, later on, the setters should be used. 
    Car(string model, int year, string color, string fuel, string vin, string transmition, string plate){
        this -> model = model;
        setYear(year); // By using the setter, we enforce the validation, made in it
        this -> color = color;
        this -> fuel = fuel;
        this -> vin = vin;
        this -> transmition = transmition;
        this -> plate = plate;
    }

    // Getter and setter in cpp and proper place for validations
     void setYear(int year){
        if (year > 1970 && year < 2023){
        this -> year = year;
        } else {
            cout << " Invalid year!" << endl;
        }
    }
    int getYear(){
        return year;
    }

    void setModel(string model){
        this -> model = model;
    }
    string getModel(){
        return model;
    }
    
    void display_message(){
        cout << "Model is: " << model << endl;
        cout << "Year is:" << year << endl;
        cout << "color is: " << color << endl;
        cout << "fuel type is: " << fuel << endl;
        cout << "vin is: " << vin << endl;
        cout << "transmition is: " << transmition << endl;
        cout << "The number plate is: " << plate << endl;
    }
private:
    string model;
    int year;
    string color;
    string fuel;
    string vin;
    string transmition;
    string plate;


};

int main(){
    string model = "";
    Car first_car("citroen", 1991, "red", "Diezel", "124522544112", "manual", "BB1412PD");
    cout << "Enter car model: ";
    cin >> model;
    first_car.setModel(model);
    string carModel = first_car.getModel();
    cout << "Car model is: " << carModel << endl;
    first_car.display_message();

    return 0;
}
// Create a class student, with attributes : name, surname, id number, city, etc..
// Use getters, setters, constructors.
// Create a few students 
#include <iostream>
#include <string>

using namespace std;

class Student{
public:
Student(string name, string surname, long id_number, string city){
    this -> name = name;
    this -> surname = surname;
    this -> id_number = id_number;
    this -> city = city;
}
Student(){
    name = "";
    surname = "";
    id_number = 0;
    city = "";
}

void setName(string name){
    if (size(name) < 4){
        cout << "Names must have more than 3 characters!" << endl;
    } else {
    this -> name = name;
    }
}

string getName(){
    return name;
}

void setSurname(string surname){
    if (size(surname) < 4){
        cout << "Surnames must have more than 3 characters!" << endl;
    } else {
    this -> surname = surname;
    }
}

string getSurname(){
    return surname;
}

void setId_number(long id_number){
    if (id_number < 1000000000 || id_number > 999999999){
        cout << "ID numbers must have more 10 digits!" << endl;
    } else {
    this -> id_number = id_number;
    }
}

int getId_number(){
    return id_number;
}

void setCity(string city){
    if (size(city) < 4){
        cout << "City names must have more than 3 characters!" << endl;;
    } else {
    this -> city = city;
    }
}

string getCity(){
    return city;
}

void displayStudent(){
    cout << "The student name is " << name << endl;
    cout << "The student's surname is " <<  surname << endl;
    cout << "The student's ID number is " << id_number << endl;
    cout << "The student lives in " << city << endl;
}

private:
string name;
string surname;
long id_number;
string city;
};


int main(){
    Student studentA("John", "Smith", 1651789320, "Chicago");
    studentA.displayStudent();
    Student studentB("Ivan", "Paruhov", 2123907460, "Sofia");
    studentB.setSurname("Parushev");
    studentB.displayStudent();
    Student studentC;
    studentC.setName("Mad");
    studentC.setSurname("Bergren");
    studentC.setId_number(110254125);
    studentC.setCity("Bo");
    cout << studentC.getName() << endl;
    cout << studentC.getSurname() << endl;
    cout << studentC.getId_number() << endl;
    cout << studentC.getCity() << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <cctype>
#include <ctype.h>

using namespace std;


class RepairRecord {
    public:
    int recordId;
    string licensePlate;
    string ownerName;
    string repairDescription;
    vector<string> partsUsed;
    int labourHours;
};


void addRepairRecord(int id, vector<RepairRecord> repairRecordLog){
    bool validPlateFlag = false;
    RepairRecord newRecord;
    newRecord.recordId = id;

    cout << "Enter the car's license plate." << endl;
    while (validPlateFlag == false){
        cin >> newRecord.licensePlate;
        if (size(newRecord.licensePlate) > 6 && size(newRecord.licensePlate) < 9) {
            validPlateFlag = true;
        } else {
            cout << "Enter a valida plate number - should have 7 or 8 signs in it." <<endl;
        }
    }

    cout << "Enter the name of the car's owner." << endl;
    string owner;
    while (true) {
        cin >> owner;
        if (size(owner) < 4 || size(owner) > 30){
            cout << "Enter a valid name with more than 3 and less than 31 letters." << endl;
            continue;
        }
        bool letterFlag = true;
        bool flag = true;
        for (int i = 0; i < size(owner); i++){
            if (isalpha(owner[i]) || isblank(owner[i])){
                continue;  
            } else {
                cout << "The name should consist only of letters and spaces." << endl;
                letterFlag = false;
                break;    
            }
        }
        if (letterFlag == true) {
            newRecord.ownerName = owner;
            break;         
        } else if (letterFlag == false){
            continue;
        }
    }

    cout << "Enter a description of the problem that needs to be fixed." << endl;
    cin >> newRecord.repairDescription;

    cout << "Enter the spare parts that will be required to do the repairs. Once finised, type 'done' to continue with the next step." << endl;
    string sparePart;
    string sparePartLower;
    while (true){
        cin >> sparePart;
        for (int i = 0; i < size(sparePart); i++){
            sparePartLower += tolower(sparePart[i]);
            }
        cout << sparePartLower << endl;
        if (sparePartLower == "done"){
            break;
        } else {
            newRecord.partsUsed.push_back(sparePart);
        }
    }

    cout << "Enter amount labour hours needed to finish the repairs." << endl;
    cin >> newRecord.labourHours;
    cout << "The form has been finished." << endl;
    repairRecordLog.push_back(newRecord);
}

void displayRepairRecords(){

}


int main() {
vector<RepairRecord> repairRecordLog;

bool stopProgram = false;
string userInput;
int counter = 0;
cout << "Welcome to our repair shop." << endl;

while (stopProgram == false) {
    cout << "Type 'add' to add a new record, 'display' to view all records, 'search' to find all records of a certain vehicle" <<
    " or 'exit' to stop the program." << endl;
    cin >> userInput;
    string userInputLowered;
    for (int i = 0; i < size(userInput); i++){
        userInputLowered += tolower(userInput[i]);
    }
    if (userInputLowered == "add") {
        cout << "Please answer the next few questions, in order to fill in the new record." << endl;
        addRepairRecord(counter, repairRecordLog);
        counter++;
    }
    else if (userInputLowered == "display") {

    }
    else if (userInputLowered == "search") {

    }
    else if (userInputLowered == "exit") {
        cout << "Thanks for visiting our store.";
        break;
    }
    else {
        cout << "The command you have entered is invalid. Try again.";
    }
}

return 0;
}



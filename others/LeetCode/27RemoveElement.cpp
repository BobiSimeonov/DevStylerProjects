# include <iostream>
# include <vector>
# include <utility>

using namespace std;

struct MakePair{
    int number_of_duplicates;
    vector<int> newArray;
};

class Solution {
public:
    MakePair removeElement(vector<int> nums, int val) {
        vector<int> newArr;
        int different_numbers = 0;
        for (int i = 0; i < size(nums); i++){
            if (nums[i] != val){
                newArr.push_back(nums[i]);
                different_numbers++;
            }
        }
        MakePair result;
        result.newArray = newArr;
        result.number_of_duplicates = different_numbers;
        return result;
    }
};


int main(){
    Solution solution;
    // Test 1
    cout << "Test 1:" << endl;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    
    MakePair newLength = solution.removeElement(nums, val);
    cout << "Modified vector: ";
    for (int i = 0; i < newLength.newArray.size(); ++i) {
        cout << newLength.newArray[i] << " ";
    }
    cout << endl << "Count of the element matching the val: " << newLength.number_of_duplicates << endl;
    
    // Test 2
    cout << endl << "Test 2:" << endl;
    nums = {0,1,2,2,3,0,4,2};
    val = 2;
    
    newLength = solution.removeElement(nums, val);
    cout << "Modified vector: ";
    for (int i = 0; i < newLength.newArray.size(); ++i) {
        cout << newLength.newArray[i] << " ";
    }
    cout << endl << "Count of the element matching the val: " << newLength.number_of_duplicates << endl;
    return 0;
}
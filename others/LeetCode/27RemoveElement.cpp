# include <iostream>
# include <vector>
# include <utility>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter = 0;
        int index = 0;
        int loop_limit = nums.size();
        for (int i = 0; i < loop_limit; i++){
            if (nums[index] != val){
                counter++;
                index++;
            } else {
                nums.erase(nums.begin() + index);   
            }
        }
        return counter;
    }
};

int main(){
    Solution solution;

    // Test 1:
    cout << "Test 1:" << endl;
    vector<int> nums = {3, 2, 2, 3};
    int value_to_eliminate = 3;

    int quantity_different_values = solution.removeElement(nums, value_to_eliminate);
    cout << "The amount of different values is: " << quantity_different_values << endl;
    cout << "The modified array is:" << endl << "[";
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i];
        if (i != nums.size()-1){
            cout << " ";
        }
    }
    cout << "]" << endl << endl;
    return 0;
}
# include <iostream>
# include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int amount_unique_values = 1;
        int last = nums[0];
        int loop_size = nums.size();
        int index = 1;
        for (int i = 1; i < loop_size; i++){
            if (nums[index] == last){
                nums.erase(nums.begin() + index); 

            } else {
                last = nums[index];
                amount_unique_values++;
                index++;
            }
        }
        return amount_unique_values;
    }
};

int main(){
    // Test 1:
    cout << "Test 1:" << endl;
    vector <int> nums = {1,1,2};
    // Expected output:    2, nums = [1,2,_]
    Solution solution;
    int amount_unique_value = solution.removeDuplicates(nums);

    cout << "Amount of unique values: " << amount_unique_value << endl;
    for (int i = 0; i < amount_unique_value; i++){
        if (amount_unique_value == 1){
            cout << "[" << nums[i] << "]";
        } else {
        if (i == 0) {
            cout << "[" << nums[i] << ", ";
        } else if(i == amount_unique_value - 1){
            cout << nums[i] << "]";
        } else {
        cout << nums[i] <<", ";
        }
        }
    }
    cout << endl << endl;

    // Test 2:
    cout << "Test 2:" << endl;
    vector <int> nums2 = {0,0,1,1,1,2,2,3,3,4};
    // Expected output:    5, nums = [0,1,2,3,4,_,_,_,_,_]
    Solution solution2;
    int amount_unique_value2 = solution2.removeDuplicates(nums2);

    cout << "Amount of unique values: " << amount_unique_value2 << endl;
    for (int i = 0; i < amount_unique_value2; i++){
        if (amount_unique_value2 == 1){
            cout << "[" << nums2[i] << "]";
        } else {
        if (i == 0) {
            cout << "[" << nums2[i] << ", ";
        } else if(i == amount_unique_value2 - 1){
            cout << nums2[i] << "]";
        } else {
        cout << nums2[i] <<", ";
        }
        }
    }
    cout << endl << endl;

    return 0;
}
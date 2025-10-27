#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashTable;  // stores number -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // If complement exists in map, we found the pair
            if (hashTable.count(complement)) {
                return {hashTable[complement], i};
            }

            // Otherwise, insert current element with its index
            hashTable[nums[i]] = i;
        }

        // Edge case: no solution
        return {};
    }
};



// Example usage
int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two numbers sum up to target" << endl;
    }

    return 0;
}

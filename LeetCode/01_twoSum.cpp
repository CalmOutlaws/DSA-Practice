#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> num_map;
            int n = nums.size();
            for (int i = 0; i < n; ++i) {
                int current_num = nums[i];
                int complement = target - current_num;
                if (num_map.count(complement)) {
                    return {num_map[complement], i};
                }
                num_map[current_num] = i;
            }
            return {};
        }
};
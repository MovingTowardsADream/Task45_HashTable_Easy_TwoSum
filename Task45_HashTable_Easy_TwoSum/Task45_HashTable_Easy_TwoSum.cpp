#include <iostream>
#include <vector>
#include <map>

class Solution {
public:
    static std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> tmp_map;
        for (int i = nums.size() - 1;i >= 0;i--) {
            if (tmp_map[nums[i]]) {
                return std::vector<int>({ i, tmp_map[nums[i]] });
            }
            tmp_map[target - nums[i]] = i;
        }
        return std::vector<int> ();
    }
};

int main()
{
    std::vector<int> nums = { 2,7,11,15 };
    std::vector<int> solution = Solution::twoSum(nums, 9);
    for (int i : solution) {
        std::cout << i << " ";
    }
}

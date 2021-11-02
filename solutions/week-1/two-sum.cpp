
#include <vector>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int> &nums, int target){
        int i = 0, j = 1;
        while (nums[i] + nums[j] != target)
        {
            j++;
            if (j >= nums.size())
            {
                i++;
                j = i + 1;
            }
        }
        vector<int> ans{i, j};
        return ans;
    }
};
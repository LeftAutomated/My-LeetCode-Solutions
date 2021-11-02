#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans;

        int mult = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(mult);
            mult *= nums[i];
        }

        mult = 1;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            ans[i] *= mult;
            mult *= nums[i];
        }

        return ans;
    }
};
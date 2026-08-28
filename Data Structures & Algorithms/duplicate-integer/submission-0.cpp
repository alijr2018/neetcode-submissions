class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> a;

        for(int i = 0; i < nums.size() ; i++)
        {
            a.insert(nums[i]);
        }
        if (nums.size() != a.size())
            return true;
        return false;
    }
};
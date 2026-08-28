class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> out(nums.begin(), nums.end());
        return nums.size() != out.size();
    }
};
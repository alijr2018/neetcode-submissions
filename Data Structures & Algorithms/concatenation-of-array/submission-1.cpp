class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // int j = nums.size();
        // vector<int> out;
        // for (int i = 0; i <j; i++)
        //     nums.push_back(nums.at(i));
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;
    }
};
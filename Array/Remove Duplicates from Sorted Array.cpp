class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int duplicate = nums[0];
        vector<int> ans;
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j])
                i++;
            nums[i] = nums[j];
        }
        return i + 1;
    }
};

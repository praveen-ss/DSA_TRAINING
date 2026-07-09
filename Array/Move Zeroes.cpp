class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int idx=0;

        for(int i=0;i<n;i++){
            int curr_elem =nums[i];
            if(curr_elem!=0){
                nums[idx]=curr_elem;
                idx++;
            }
        }
            while(idx<n){
                nums[idx]=0;
                idx++;
            }
    }
};

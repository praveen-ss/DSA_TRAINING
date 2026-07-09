class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n = arr.size();
        int total_sum = accumulate(arr.begin(),arr.end(),0);
        int left_sum = 0;
        
        for(int i=0;i<n;i++)
        {
            int right_sum = total_sum - left_sum - arr[i];
            if(left_sum == right_sum){
                return i;
            }
            left_sum += arr[i];
        }
        return -1;
    }
};

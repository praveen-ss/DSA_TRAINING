class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
             ans.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
         if(arr[i]!=0)
         ans.push_back(arr[i]);
}
        arr=ans;
         
    }
};

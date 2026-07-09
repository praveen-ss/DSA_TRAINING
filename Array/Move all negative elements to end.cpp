class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
    // vector<int>arr={-6, 2, -4, -3, 0, 1,- 7 };
    int n=arr.size();
    vector<int>ans;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=0)
         ans.push_back(arr[i]);
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<0)
         ans.push_back(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr[i] =ans[i];
    }    
};

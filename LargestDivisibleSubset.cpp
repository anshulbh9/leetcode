class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans(nums.size(),0);
        vector<int> par(nums.size());
        int m=0;
        int mi=0;
       for(int i=0;i<nums.size();i++){
           
           for(int j=i;j>=0;j--){
               
               if(nums[i]%nums[j]==0&&ans[i]<ans[j]+1){
                   ans[i]=ans[j]+1;
                   par[i]=j;
               }
               if(ans[i]>m){
                   m=ans[i];
                   mi=i;
               }
           }
       }
        vector<int> val;
        for(int i=0;i<m;i++){
            val.push_back(nums[mi]);
            mi=par[mi];
        }
       return val; 
    }
};

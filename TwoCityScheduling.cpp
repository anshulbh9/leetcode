class Solution {
public:
   static bool compr(vector<int> v1,vector<int> v2){
        return v1[0]-v1[1]<v2[0]-v2[1];
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
      sort(costs.begin(),costs.end(),compr);
        int ans=0;
        for(int i=0;i<costs.size()/2;i++){
            ans+=costs[i][0]+costs[i+costs.size()/2][1];
        }
        return ans;
    }
};

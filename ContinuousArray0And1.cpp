class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        unordered_map<int,int> um;
        int ans=0;
        int val=0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
            if(ans==0){
                val=i+1;
            }
            else if(um.count(ans)!=0){
                if(i-um[ans]>val){
                    val=i-um[ans];
                }
            }
            else{
                um[ans]=i;
            }
            
        }
        return val;
        
    }
};

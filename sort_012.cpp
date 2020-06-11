class Solution {
public:
    void sortColors(vector<int>& nums) {
       int right=nums.size()-1,left=0;
        int x=0;
        while(x<=right){
         if(nums[x]==0){
             swap(nums[x],nums[left]);
             left++,x++;
         }
            else if(nums[x]==1){
                x++;
            }
            else{
                swap(nums[x],nums[right]);
                right--;
            }
        }
        
    }
};

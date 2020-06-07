/*
finding out the tallest person and first adding it in the array according to its position and smallest one will be inserted 
after that eg 7,0 inserted first then 5,0 comes so it comes to first position as in front on 7,0 person with height 5 can not
be counted so sorting is done on the basis of tallest person and then the smallest one will be inserted after replacing the 
taller one
*/




class Solution {
public:
    static bool sorti(vector<int> v1,vector<int> v2){
        if(v1[0]==v2[0]){
            return v1[1]<v2[1];
        }
        else return v1[0]>v2[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),sorti);
        vector<vector<int>> ans;
        for(int i=0;i<people.size();i++){
            ans.insert(ans.begin()+people[i][1],people[i]);
        }
        return ans;
        
    }
};

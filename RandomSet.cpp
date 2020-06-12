class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int> ans;
    unordered_map<int,int> um;
    RandomizedSet() {
    
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
      if(um.find(val)==um.end()){
         um[val]=ans.size();
          ans.push_back(val);
          return true;
      }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(um.find(val)==um.end()){
            return false;
        }
        int loc=um[val];
        if(loc<ans.size()-1){
            ans[loc]=ans[ans.size()-1];
            um[ans[ans.size()-1]]=loc;
        }
        um.erase(val);
        ans.pop_back();
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int r=rand()%(ans.size());
        return ans[r];
    }
};

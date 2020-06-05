class Solution {
public:
    vector<int> w1;
    int count=0;
    Solution(vector<int>& w) {
      for (int i : w) w1.push_back(w1.empty() ? i : (i + w1.back()));
    }
    
    int pickIndex() {
       int m=w1.back();
       int r=rand()%m;
       auto it = upper_bound(w1.begin(), w1.end(), r);
       return it - w1.begin();
        
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */

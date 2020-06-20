class Solution {
public:
    string getPermutation(int n, int k) {
        string dict(n, 0);
        iota(dict.begin(), dict.end(), '1');
        
        vector<int> fact(n, 1);
        for (int idx = n - 3; idx >= 0; --idx) {
            fact[idx] = fact[idx + 1] * (n - 1 - idx);
        }
        
        --k;
        
        string res(n, 0);
        for (int idx = 0; idx < n; ++idx) {
            int select = k / fact[idx];
            k %= fact[idx];
            res[idx] = dict[select];
            dict.erase(next(dict.begin(), select)); 
        }
        return res;
    }
};

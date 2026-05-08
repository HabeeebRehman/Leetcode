class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        
        unordered_set<int> st(friends.begin() ,friends.end());

        vector<int> ans;

        for(int n : order) {
            if(st.count(n)) {
                ans.push_back(n);
            }
        }

        return ans;
    }
};
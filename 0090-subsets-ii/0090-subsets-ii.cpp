class Solution {
public:

        vector<vector<int>>result;

    void backtrack(int index , vector<int>& nums , vector<int>&current) {

        result.push_back(current);

        for(int i = index ; i < nums.size() ; i++ ) {

            if(i > index && nums[i] == nums[i -1] )
                continue;

            current.push_back(nums[i]);
            backtrack(i + 1 , nums , current);

            current.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin() , nums.end());

        vector<int>current;

        backtrack(0 , nums , current);
        return result;

        
    }
};
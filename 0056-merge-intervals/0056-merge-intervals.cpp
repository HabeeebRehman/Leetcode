class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin() , intervals.end());

        vector<vector<int>>ans;

        ans.push_back(intervals[0]);


        for(int i = 1 ; i < intervals.size(); i++) {

            int currStr = intervals[i][0];
            int currEnd = intervals[i][1];

            if(currStr <= ans.back()[1]) {
                ans.back()[1] = max(ans.back()[1] , currEnd);
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
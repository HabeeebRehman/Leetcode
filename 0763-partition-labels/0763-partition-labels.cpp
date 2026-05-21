class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        int lastPs[26] = {0};

        for(int i = 0 ; i < s.length(); i++ ) {
            lastPs[s[i] - 'a'] = i;
        }

        vector<int>result;
        int start = 0;
        int end = 0;


        for(int i = 0 ; i < s.length(); i ++) {

            end = max(end , lastPs[s[i] - 'a']);


            if(i == end) {
                result.push_back(end - start + 1);

                start = i + 1;
            }
        }

        return result;
    }
};
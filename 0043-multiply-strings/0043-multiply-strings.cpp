class Solution {
public:
    string multiply(string num1, string num2) {
        
        if(num1 == "0" || num2 =="0")return "0";

        int n = num1.size();
        int m = num2.size();


        vector<int>res(n + m , 0);

        for(int i = n - 1 ; i >= 0; i--) {
            for(int j = m -1; j >=0 ; j--) {
                int d1 = num1[i] - '0';
                int d2 = num2[j] - '0';

                int mul = d1 * d2;

                int sum = mul + res[i + j + 1];
                res[i + j + 1] = sum % 10;
                res[i + j] += sum/10;
            }
        }
        string ans;

        int start = 0;
        while(start < (int)res.size() && res[start] == 0) {
            ++start;
        }

        for(int i = start ; i <(int)res.size(); i++) {
            ans.push_back(res[i] + '0');
        }

        return ans.empty() ? "0" : ans;
    }

};
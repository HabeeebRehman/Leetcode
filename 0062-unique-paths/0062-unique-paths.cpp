class Solution {
public:
    int uniquePaths(int m, int n) {

     long long ans = 1;
     int total_steps = m + n - 2 ;
     int down_stp = min(m - 1 ,n - 1);

     for(int i = 1 ; i <= down_stp; i++){
        ans = ans *(total_steps - down_stp +i) / i;

     }
        return (int) ans;
    }
};
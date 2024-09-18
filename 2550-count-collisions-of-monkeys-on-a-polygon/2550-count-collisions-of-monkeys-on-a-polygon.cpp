class Solution {
public:

    int mod = 1000000007;

    long long pow(int n, int m){
        if(m==1){
            return n;
        }

        long long ans = pow(n, m/2);
        ans %=mod;
        ans *= ans;
        ans %=mod;
        if(m%2 == 1){
            ans *= n;
        }
        ans %=mod;

        return ans;
    }

    int monkeyMove(int n) {
        long long ans = pow(2, n);

        ans -= 2;
        if(ans < 0) {
            ans += mod;
        }
        return ans;
    }
};
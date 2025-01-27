//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    long long int mod = 1000000007;
  public:
    long long int solve1(int n, vector<long long int> &dp) {
        if(n == 0 || n == 1) return n;
        if(dp[n] != -1) return dp[n];

        long long int ans = ((solve1(n - 2, dp))%mod + (solve1(n - 1, dp))%mod)%mod;
        dp[n] = ans;
        return dp[n];
    }
    
    long long int topDown(int n) {
        vector<long long int> dp(n + 1, -1);
        return solve1(n, dp);
    }
    
    long long int solve2(int n, vector<long long int> &dp) {
        dp[0] = 0;
        dp[1] = 1;

        for(int i = 2; i <= n; i++) {
            long long int ans = ((dp[i - 1])%mod + (dp[i - 2])%mod)%mod;
            dp[i] = ans;
        }

        return dp[n];
    }
    
    long long int bottomUp(int n) {
        vector<long long int> dp(n + 1, 0);
        return solve2(n, dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends
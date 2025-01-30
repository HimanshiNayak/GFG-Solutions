//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int jumps(int idx , vector<int>&height, vector<int>&dp){
      if(idx ==0)return 0;
      int jump2 =INT_MAX;
      if(dp[idx]!= -1)return dp[idx];
      int jump1 = jumps(idx-1,height,dp)+abs(height[idx]-height[idx-1]);
      if(idx>1) jump2 = jumps(idx-2,height,dp)+abs(height[idx]-height[idx-2]);
      dp[idx]= min(jump1,jump2);
      return dp[idx];
  }
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int>dp(n+1,-1);
        return jumps(n-1,height,dp);
    }
};

//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
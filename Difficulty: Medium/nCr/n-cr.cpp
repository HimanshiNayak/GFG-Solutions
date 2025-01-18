//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   long ncr(int n , int r){
      if (r==0 || n==r)return 1;
      if(n<r)return 0;
      if(n==r+1)return n;
      else return((ncr(n,r-1))*(n-(r-1)))/r;
  }
    int nCr(int n, int r) {
        if(n<r)return 0;
      long a = ncr(n,r);
      return (int) a;

       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
    int l =0;
    int h =n ;
     int ans =-1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if( mid*mid == n)return mid;
        else if(mid*mid >n){
            h= mid-1;
        }
        else {
            ans = mid;
            l = mid+1;
    }
    }
    return ans;
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
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
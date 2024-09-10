//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
      
//     int low = 0, high = n - 1;
//     int floor = n;
//     int ceil =

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] >= x) {
//             ans = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }
int f =-1, c=-1;
vector<int>v;
int mf=-1,mc=INT_MAX;
for(int i=0;i<arr.size();i++){
    if(arr[i]<=x){
        f= arr[i];
        mf = max(mf,f);
    }
}
for(int i=0;i<arr.size();i++){
    if(arr[i]>=x){
        c= arr[i];
        mc = min(mc,c);
        
    }
}
if (mc == INT_MAX){
    mc = -1;
}
v.push_back(mf);
v.push_back(mc);
return v;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        
          int n = arr.size();
        if (n == 0 || arr[0] == 0) return -1; // Edge case: no elements or starting point is 0
        
        int jumps = 0;
        int current_end = 0; // End of the current jump range
        int farthest = 0; // Farthest point that can be reached

        for (int i = 0; i < n - 1; ++i) {
            farthest = max(farthest, i + arr[i]); // Update the farthest point that can be reached

            if (i == current_end) { // If we have reached the end of the current jump range
                jumps++; // Make a jump
                current_end = farthest; // Update the end of the current jump range

                if (current_end >= n - 1) // If we can reach or exceed the end of the array
                    return jumps;
            }
        }

        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends
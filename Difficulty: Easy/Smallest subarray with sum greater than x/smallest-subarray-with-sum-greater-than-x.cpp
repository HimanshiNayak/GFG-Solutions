//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

 int smallestSubWithSum(int x, vector<int>& arr) {
        int minlen = INT_MAX;
        int i = 0, j = 0;
        int sum = 0;

        while (i < arr.size()) {
            // Expand the window
            while (i < arr.size() && sum <= x) {
                sum += arr[i];
                i++;
            }

            // Shrink the window from left
            while (j < i && sum > x) {
                minlen = min(minlen, i - j);
                sum -= arr[j];
                j++;
            }
        }

        return (minlen == INT_MAX) ? 0 : minlen;  // Return 0 if no valid subarray found
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

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << "\n~\n";
    }

    return 0;
}
// } Driver Code Ends
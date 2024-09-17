//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
         unordered_map<string, int> typeSize = {
            {"Character", 1},
            {"Integer", 4},
            {"Long", 8},
            {"Float", 4},
            {"Double", 8}
        };

        // Check if the given data type exists in the map
        if (typeSize.find(str) != typeSize.end()) {
            return typeSize[str]; // Return the corresponding size
        }

        // Return -1 if the data type is not found
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
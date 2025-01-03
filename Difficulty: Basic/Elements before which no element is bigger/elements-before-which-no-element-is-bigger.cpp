//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countElements(vector<int>& arr) {
        // code herel
        long long max = arr[0];
        long long count =1;
        for(long long i=0;i<arr.size();i++){
            if(max<arr[i]){
                count++;
                max=arr[i];
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character before getline
    while (t--) {
        vector<int> arr;
        string line;

        getline(cin, line);
        stringstream ss(line);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution solution;
        cout << solution.countElements(arr) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int>ans;
        int first = 0;
        int second = 1;
        int third;
        if(n==1){
            ans.push_back(first);
            return ans;
        }
        if(n==2){
            ans.push_back(first);
            ans.push_back(second);
            return ans;
        }
        if(n>=3){
        ans.push_back(first);
        ans.push_back(second);
        for(int i=1; i<=n-2; i++){
            third = first + second;
            ans.push_back(third);
            first = second;
            second = third;
        }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    // taking total testcases
    int t;
    cin >> t;
    while (t--) {
        // taking number of elements
        int n;
        cin >> n;
        Solution obj;
        // calling function printFibb()
        vector<int> ans = obj.fibonacciNumbers(n);

        // printing the elements of vector
        for (int i : ans)
            cout << i << ' ';
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
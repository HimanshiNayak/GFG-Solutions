//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countArray(vector<int>& arr, int x) {
        
        // Complete the function
        vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i =0;i< arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        for(int i = 0;i< arr.size();i++)
        {
            int val = floor((arr[i] + x) / 2);
              if(mpp.find(val) != mpp.end())
                {
                    ans.push_back(mpp[val]);
                }
                else
                {
                    ans.push_back(0);
                }
        }
        return ans;
    }
};
    

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countArray(arr, k);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
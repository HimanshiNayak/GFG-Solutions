//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        // int n = arr.size();
        // int maxlen = INT_MIN;
        // for(int i=0;i<n;i++){
        //     unordered_set<int>st;
        //     for(int j=i;j<n;i++){
        //         st.insert(arr[j]);
        //         if(st.size()>2)break;
            
        //         maxlen = max(maxlen, j-i+1);
        //     }
        // }
        // return maxlen;
        int n = arr.size();
        int left =0;
        int maxlen =INT_MIN;
        unordered_map<int,int>mp;
        for(int right =0;right<n;right++){
            mp[arr[right]]++;
            while(mp.size()>2){
                mp[arr[left]]--;
                if(mp[arr[left]]==0)mp.erase(arr[left]);
                left++;
            }
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalElements(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
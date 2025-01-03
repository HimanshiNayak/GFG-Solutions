//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int flag =1; //if no even occurance
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]%2==0){
                mp[arr[i]]=-1 ;  //to avoid duplicacy
                v.push_back(arr[i]);
                flag =0;
            }
        }
        if(flag)
        return {-1};
        else 
        return v;
        
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the number of test cases
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        vector<int> result = ob.findEvenOccurrences(arr);
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
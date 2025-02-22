//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
    // vector<int>ans;
    // for(int i=0;i<arr.size();i++){
    //     int sum =0;
    //     for(int j=i ;j<arr.size();j++){
    //         sum += arr[j];
    //         if(sum>target )break;
    //         if(sum ==target){
    //             ans.push_back(i+1);
    //             ans.push_back(j+1);
    //             return ans;
    //         }
    //     }
    // }
    // return {-1};
    // }
    
    int left =0,sum =0;
    for(int right =0;right<arr.size();right++){
        sum += arr[right];
        while(sum>target && left<=right){
            sum -=arr[left];
            left++;
        }
    if(sum == target)return {left+1, right+1};
    }
    return {-1};
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends
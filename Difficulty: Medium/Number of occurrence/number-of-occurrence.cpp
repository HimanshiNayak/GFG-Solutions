//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */




	   
int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1; // Move to the left half to find earlier occurrence
        } else if (arr[mid] < x) {
            low = mid + 1; // Move to the right half
        } else {
            high = mid - 1; // Move to the left half
        }
    }
    return first;
}

// Function to find the last occurrence of X
int lastOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1; // Move to the right half to find later occurrence
        } else if (arr[mid] < x) {
            low = mid + 1; // Move to the right half
        } else {
            high = mid - 1; // Move to the left half
        }
    }
    return last;
}

// Function to count the total occurrences of X in the array
	int count(int arr[], int n, int x) {
	     int first = firstOccurrence(arr, n, x);
    if (first == -1) {
        // X is not present in the array
        return 0;
    }
    int last = lastOccurrence(arr, n, x);
    return last - first + 1;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
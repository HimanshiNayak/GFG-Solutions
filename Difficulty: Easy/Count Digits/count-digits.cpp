//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0;
        int original_n = N; // To keep track of the original number

        while (N > 0) {
            int digit = N % 10; // Extract the last digit
            N = N / 10;         // Remove the last digit
            
            // Check if the digit is non-zero and divides the original number evenly
            if (digit != 0 && original_n % digit == 0) {
                count++;
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
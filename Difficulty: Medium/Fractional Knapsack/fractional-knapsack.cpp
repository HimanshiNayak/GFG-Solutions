//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

// class Solution {
//   public:
//     // Function to get the maximum total value in the knapsack.
//     double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
//         // Your code here
//     }
// };
// #include <bits/stdc++.h>
// using namespace std;

class Solution {
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<double> ratio(n); 
        vector<int> indices(n); 

        // Calculate value-to-weight ratio and initialize indices
        for (int i = 0; i < n; i++) {
            ratio[i] = (double)val[i] / wt[i];
            indices[i] = i; // Manually initialize indices
        }

        // Sort indices based on value-to-weight ratio in descending order
        sort(indices.begin(), indices.end(), [&](int i, int j) {
            return ratio[i] > ratio[j];
        });

        double curValue = 0.0; // Current value in knapsack
        int curWeight = 0;     // Current weight in knapsack

        for (int i : indices) {
            if (curWeight + wt[i] <= capacity) {
                curWeight += wt[i];
                curValue += val[i];
            } else {
                int remain = capacity - curWeight;
                curValue += ratio[i] * remain; // Add fractional part
                break;
            }
        }

        return curValue;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
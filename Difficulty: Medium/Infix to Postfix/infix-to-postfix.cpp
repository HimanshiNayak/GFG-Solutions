//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   
// Function to return precedence of operators
    int precedence(char c) {
        if (c == '^')
            return 3;
        else if (c == '*' || c == '/')
            return 2;
        else if (c == '+' || c == '-')
            return 1;
        else
            return -1;
    }
    
    // Function to convert infix expression to postfix expression
    string infixToPostfix(string s) {
        stack<char> st; // stack to hold operators
        string result; // resulting postfix expression
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            
            // If the current character is an operand, add it to the result
            if (isalnum(c)) {
                result += c;
            }
            // If the current character is an '(', push it to the stack
            else if (c == '(') {
                st.push(c);
            }
            // If the current character is ')', pop and add to result until '(' is found
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    result += st.top();
                    st.pop();
                }
                if (!st.empty()) {
                    st.pop(); // Pop '('
                }
            }
            // If an operator is encountered
            else {
                while (!st.empty() && precedence(c) <= precedence(st.top())) {
                    result += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        
        // Pop all the operators remaining in the stack
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        
        return result;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends
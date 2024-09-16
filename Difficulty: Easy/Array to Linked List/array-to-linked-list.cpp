//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/*class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};*/


class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        if (arr.size() == 0) {
            return NULL; // Return NULL if the array is empty
        }

        // Create the head node
        Node* head = new Node(arr[0]);
        Node* curr = head;  // Use 'curr' to iterate through the linked list

        // Iterate through the rest of the vector and create nodes
        for (int i = 1; i < arr.size(); i++) {
            Node* newNode = new Node(arr[i]);  // Create a new node
            curr->next = newNode;              // Link the previous node to the new one
            curr = curr->next;                 // Move the 'curr' pointer to the next node
        }

        return head; // Return the head of the linked list
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        Node* ans = ob.constructLL(arr);
        while (ans) {
            cout << ans->data << " ";
            ans = ans->next;
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
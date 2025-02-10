//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
   void dfs(int node,vector<vector<int>>&adj , vector<int>&visited, vector<int>&ans){
        visited[node] =1;
        ans.push_back(node);
         for(auto it:adj[node]){
            if(!visited[it]){
dfs(it,adj,visited,ans);
}
         }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
//         // Code here
        
        int n = adj.size();
        vector<int>visited(n,0);
        vector<int>ans;
      for(int i=0;i<n;i++){
      if(!visited[i])dfs(i,adj,visited,ans);
      }
      return ans;
        }
//     void dfs( int start  , vector< vector< int >>adj , int visited[] , vector< int >&ans )
// {
//     visited[start] = 1 ;
//     ans.push_back(start );
    
//     for( auto it : adj[start] )
//     {
//         if( !visited[it] )
//         {
//             dfs( it , adj , visited , ans );
            
//         }
//     }

// }
 
//     vector<int> dfsOfGraph(vector<vector<int>>& adj) {
       
//       int V = adj.size() ;
//       int visited[V] = { 0 } ;
       
//       // for all connected or non connected components 
//       vector< int > ans ;
//       for( int i = 0 ; i < V ; i++ )
//       {
//           if( !visited[i] )
//           {
//               dfs( i , adj , visited , ans  );
               
//           }
           
//       }   
//       return ans ;
//     }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
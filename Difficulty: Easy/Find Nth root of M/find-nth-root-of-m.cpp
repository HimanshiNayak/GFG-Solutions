//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
// 	int power(int base , int exponent){
// 	   int ans = 1;
// 	   int b = base;
// 	   if(exponent %2){ //odd
// 	       exponent--;
// 	       ans= ans*b;
// 	   }
// 	   else{
// 	       exponent/2;
// 	       ans = b*b;
// 	   }
// 	   return ans;
// 	}
int power(int mid , int n , int m){
    long long ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*mid;
        if(ans>m)return 2;
    }
     if(ans== m)return 1;
    else return 0;
}

	int NthRoot(int n, int m)
	{
	  int low = 1;
	  int high =  m;
	  while(low<=high){
	      int mid = low+(high-low)/2;
	  int midd = power(mid,n,m) ;
	  if(midd ==1)return mid;
	  else if(midd==0)low = mid+1;
	  else high = mid-1;
	  }
	  return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends
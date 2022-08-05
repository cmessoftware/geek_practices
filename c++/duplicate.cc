//{ Driver Code Starts
#include <bits/stdc++.h>
#include<iostream>
using namespace std;


// } Driver Code Ends

#define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        //Your code here
        //int arr[] = {1,2,2,4,5,9,7,8,7,9};
        int arrSize = my_sizeof(arr)/my_sizeof(arr[0]);
        vector<int> vresult;
   
        for(int i=0 ; i < arrSize ; i++)
        {
            int current = arr[i];
            for( int j = i+1 ; j < arrSize ; j++)
            {
                if(arr[j] == current)
                    vresult.push_back(current);
            }
        }

        if(vresult.size() == 0)
            vresult.push_back(-1);
 
        return vresult;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t = 5;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
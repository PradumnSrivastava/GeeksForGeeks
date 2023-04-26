// Minimum Sum of Absolute Differences of Pairs
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long findMinSum(vector<int> &A, vector<int> &B, int N)
    {
        long long sum = 0;
        sort(B.begin(), B.end());
        sort(A.begin(), A.end());

        for (int i = 0; i < N; i++)
        {
            sum += abs(B[i] - A[i]);
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        Solution ob;
        cout << ob.findMinSum(A, B, N) << endl;
    }
}
// } Driver Code Ends
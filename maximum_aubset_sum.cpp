// Given an array A of size N. Find the maximum subset-sum of elements that you can make from the given array such that for every two consecutive elements in the array, at least one of the elements is present in our subset.

// Example 1:

// Input:
// N = 4
// A[] = {1, -1, 3, 4}
// Output: 8
// Explanation:
// We can choose 0th,2nd & 3rd index(0 based
// Index),so that it can satisfy the
// condition & can make maximum sum 8.
// Example 2:

// Input:
// N = 3
// A[] =  {0, 2, 0};
// Output: 2
// Explanation:
// We can choose 1st index. Here the
// maximum possible sum is 2.
// Your task:

// You don't have to read input or print anything. Your task is to complete the function findMaxSubsetSum() which takes the array A and its size N as input and returns the Maximum possible subset-sum.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

// Constraints:
// 2 ≤ N ≤ 105
// -105 ≤ A[i] ≤ 105

// approach 1 memorization take and nottake case-

//  long long sol(int node,int n,vector<int> &a,int lastTake,vector<vector<int>> &dp)
//   {
//       if(node>=n)
//       return 0;

//       if(dp[node][lastTake]!=-1)
//       return dp[node][lastTake];

//       if(lastTake==0)
//       {
//           return dp[node][lastTake]=a[node]+sol(node+1,n,a,1,dp);
//       }
//       if(lastTake==1)
//       {
//           return dp[node][lastTake]=max(sol(node+1,n,a,0,dp),a[node]+sol(node+1,n,a,1,dp));
//       }

//   }

//     long long findMaxSubsetSum(int n, vector<int> &a) {
//         vector<vector<int>> dp(n,vector<int> (2,-1));
//         return max(sol(0,n,a,0,dp),sol(0,n,a,1,dp));
//     }
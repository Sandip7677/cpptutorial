// Given three integers n, k, target, and an array of coins of size n. Find if it is possible to make a change of target cents by
// using an infinite supply of each coin but the total number of coins used must be exactly equal to k.

// Example 1:

// Input:
// n = 5, k = 3, target = 11
// coins = {1, 10, 5, 8, 6}

// Output:
// 1

// Explanation:
// 2 coins of 5 and 1 coins of 1 can be used
// to make change of 11 i.e. 11 => 5+5+1.
// Example 2:

// Input:
// n = 3, k = 5, target = 25
// coins = {7, 2, 4}

// Output:
// 1

// Explanation:
// 3 coins 7, 2 coins of 2 can be used to
// make change of 25 i.e. 25 => 7+7+7+2+2.
// Your Task:
// This is a function problem. You only need to complete the function makeChanges() that 3 integers n, k, target, and an array coins as parameters and return True or False.

// Expected Time Complexity: O(n*k*target)
// Expected Space Complexity: O(k*target)

// Constraints:
// 1 <= n, k, coins[i] <= 100
// 1 <= target <= 1000

// aproach 1
// we will use recursion, take and nottake  case. this approach has higher time complexity;

// bool rec(int i,int N, int K, int target, vector<int> &coins){
//         //base case
//         if(K==0 && target==0){
//             return true;
//         }
//         if(K<0 || target<0){
//             return false;
//         }
//         if(i==N){
//             return false;
//         }
//
//         //recursive case
//         bool nottake=rec(i+1,N,K,target,coins);
//         bool take=rec(i,N,K-1,target-coins[i],coins);
//         bool ans= nottake | take;
//         return ans;
//     }

//     bool makeChanges(int N, int K, int target, vector<int> &coins)
//         return rec(0,N,K,target,coins);
//     }

// Approach 2 memorisation dynamic programming. here 3 variables are changing so we have to make 3d dp.

// bool rec(int i,int N, int K, int target, vector<int> &coins,vector<vector<vector<int>>> &dp){
//         //base case
//         if(K==0 && target==0){
//             return true;
//         }
//         if(K<0 || target<0){
//             return false;
//         }
//         if(i==N){
//             return false;
//         }
//         if(dp[i][K][target]!=-1){
//             return dp[i][K][target];
//         }
//         //recursive case
//         bool nottake=rec(i+1,N,K,target,coins,dp);
//         bool take=rec(i,N,K-1,target-coins[i],coins,dp);
//         bool ans= nottake | take;
//         return dp[i][K][target]=ans;
//     }

//     bool makeChanges(int N, int K, int target, vector<int> &coins) {
//         vector<vector<vector<int>>> dp(N+5,vector<vector<int>>(K+5,vector<int>(target+5,-1)));
//         return rec(0,N,K,target,coins,dp);
//     }

// Approach 3 another dp solution but now we are using 2d dp and for this we change our recursion approach.

// bool rec(int N, int K, int target, vector<int> &coins, vector << vector < int >> &dp)
// {
//     // base case
//     if (K == 0 && target == 0)
//     {
//         return true;
//     }
//     if (K < 0 || target < 0)
//     {
//         return false;
//     }
//     if (dp[K][target] != -1)
//     {
//         return dp[K][target];
//     }
//     // recursive case
//     bool ans = false;
//     for (int i = 0; i < N; i++)
//     {
//         ans |= rec(N, K - 1, target - coins[i], coins, dp);
//     }
//     return dp[K][target] = ans;
// }

// bool makeChanges(int N, int K, int target, vector<int> &coins)
// {
//     vector<vector<int>> dp((K + 5, vector<int>(target + 5, -1));
//     return rec(N, K, target, coins, dp);
// }
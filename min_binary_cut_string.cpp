// Given a string s containing 0's and 1's. You have to return the smallest positive integer C, such that the binary string can be cut into C pieces and each piece should be of the power of 5  with no leading zeros.
// Note: The string s is a binary string. And if no such cuts are possible, then return -1.

// Example 1:

// Input:
// s = "101101101"
// Output:
// 3
// Explanation:
// We can split the given string into
// three 101s, where 101 is the binary
// representation of 5.
// Example 2:

// Input:
// s = "00000"
// Output:
// -1
// Explanation:
// 0 is not a power of 5.
// Your Task:
// Your task is to complete the function cuts() which take a single argument(string s). You need not take any input or print anything. Return an int C if the cut is possible else return -1.

// Expected Time Complexity: O(|s|*|s|*|s|).
// Expected Auxiliary Space: O(|s|).

// Constraints:
// 1<= |s| <=50

// we are travesing the string and cheking it i-1th poseitin is 0 or not if it is not we are running loop from i-1 to 0
// and converitg it in decimal and counting such numbers .
// we are using dp for memorisation as it count number of such cuts till now.

// bool dev_5(long a){
//         if(a==0) return false;
//         if(a==1) return true;
//         if(a%5!=0) return false;
//         else return dev_5(a/5);
//     }

//     int cuts(string s){
//         int n=s.length();
//         vector<int > dp(n+1,-1);
//         dp[0]=0;
//         for(int i=1;i<=n;i++){
//             int j=i-1;
//             if(s[j]=='0'){
//                 dp[i]=-1;
//             }
//             else{
//                 dp[i]=-1;
//                 int cur_count=INT_MAX;
//                 int to_dec=0;
//                 for(int k=0;k<i;k++){
//                     if(s[j-k]=='1'){
//                         to_dec+=1<<k;
//                         if(dev_5(to_dec) && dp[j-k]!=-1){
//                             cur_count=min(dp[j-k]+1,cur_count);
//                         }
//                     }
//                 }
//                 if(cur_count!=INT_MAX){
//                     dp[i]=cur_count;
//                 }
//             }
//         }
//         return dp[n];

//     }
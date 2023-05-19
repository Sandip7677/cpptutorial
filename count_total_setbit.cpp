// You are given a number N. Find the total number of setbits in the numbers from 1 to N.

// Example 1:

// Input: N = 3
// Output: 4
// Explaination:
// 1 -> 01, 2 -> 10 and 3 -> 11.
// So total 4 setbits.
// Example 2:

// Input: N = 4
// Output: 5
// Explaination: 1 -> 01, 2 -> 10, 3 -> 11
// and 4 -> 100. So total 5 setbits.
// Your Task:
// You do not need to read input or print anything. Your task is to complete the function countBits() which takes N as input parameter and returns the total number of setbits upto N.

// Expected Time Complexity: O(1)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ N ≤ 106

// code====

// we kobserb that for each bit in range 0 to N (say 16) we can make set of bits for each position for position 0 we will
// have one 0 then one 1 for position 1 we will have two 0 then two 2 like this se can calculate number of set for a position
// by deviding(N+1)by sixe of set(pow(2,i)*2). ten in one set number of 1 will be pow(2,i) so total number of 1 in one set becomes
// number of sets * pow(2,i).

// long long countBits(long long N) {
//         long long ans=0,i=1,n=N;//here n is taken t run loop until n  is not zero
//         while(n!=0){
//             long long temp=(N+1)/(i*2);//N+1 is chooden as we are counting 0 also
//             ans+=temp*i;
//             temp=(N+1)/i;//if some bits are remained we can check if it is odd then bits remained will have 1.
//             if(temp%2==1) ans+=(N+1)%i;
//             i*=2;
//             n>>=1;
//         }
//         return ans;
//     }
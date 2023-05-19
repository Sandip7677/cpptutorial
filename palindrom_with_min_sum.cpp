// Palindrome with minimum sum
// MediumAccuracy: 77.19%Submissions: 2K+Points: 4
// Finding a high paying job is easier than today's problem! Attend Job Fair 2023

// Given a string, S.The string can contain small case English letters or '?'. You can replace '?' with any small English letter. Now if it is possible to make the string S a palindrome after replacing all '?' then find the palindromic string with a minimum ascii sum of differences of adjacent characters. Otherwise, return -1.

// Example 1:

// Input: S = a???c??c????
// Output: 4
// Explanation:
// We can see that we can make the string
// palindrome. Now to get minimum ascii sum we should
// replace all the '?' between 'a' and 'c' with
// 'b' and all the '?' between two 'c' with 'c'.
// So after replacing all the '?' the string:
// abbbccccbbba.
// The sum of differences of adjacent characters is 4.
// Example 2:

// Input: S = a???c??c???c
// Output: -1
// Explanation:
// It is not possible to make the string palindrome.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minimumSum() which takes a string S input parameter and returns an integer denoting the sum of differences of adjacent characters. If it is not possible to make string palindrome, return -1.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 <= |S| <= 105

// here there are 3 main conditions-

// if both places have ? we will replace it with nerest alphabet from left if there is any or from right;

// if one place have character other will be replaced by that

// if both places have charecter and is not same return -1;

// code 1

//  char help(string s){
//         int i=0,j=s.length()-1;
//         while(i<=j){
//             if(s[i]!='?')return s[i];
//             if(s[j]!='?')return s[j];
//             i++;
//             j--;

//         }
//         return '#';
//     }

//     int minimumSum(string s) {
//        int i=0,j=s.length()-1,ans=0;
//         char prev = '#';
//         while(i<=j){
//             if(s[i]=='?' and s[j]=='?'){
//                 if(prev=='#'){
//                     prev = help(s);
//                     if(prev=='#')return 0;
//                 }
//             }
//             else if(s[i]=='?'){
//                 if(prev!='#'){
//                     ans+=2*abs(prev-s[j]);
//                 }
//                 prev=s[j];
//             }
//             else if(s[j]=='?'){
//                 if(prev!='#'){
//                     ans+=2*abs(prev-s[i]);
//                 }
//                 prev=s[i];
//             }
//             else if(s[i]==s[j]){
//                 if(prev!='#'){
//                     ans+=2*abs(prev-s[i]);
//                 }
//                 prev=s[i];
//             }
//             else return -1;
//             i++;
//             j--;
//         }
//         return ans;
//     }

// code2 value of ch in line 134 is showing # which is wrong.
// int minimumSum(string s) {
//        if(s.length()==1){
//            return 0;
//        }
//        int ans=0;
//        char ch='#';
//        int i,j;
//        char c='?';
//        for(i=0,j=s.length()-1;i<j;i++,j--){
//            char a=s[i],b=s[j];
//         //   cout<<a<<b<<endl;
//            if((a==c && b!=c)){
//                if(ch!='#'){
//                    ans+=(2*(abs(ch-b)));
//                ch=b;
//                }
//                else{
//                    ch=b;
//                }
//            }
//            else if((a!=c && b==c)){
//               if(ch!='#'){
//                    ans+=(2*(abs(ch-a)));
//                ch=a;
//               }
//               else{
//                   ch=a;
//               }
//            }
//            else if(a!=c && b==c &&(a==b)){
//                ans+=(2*(abs(ch-a)));
//                ch=a;
//                 //   cout<<ch<<endl;
//            }
//            else if(a!=c && b==c &&(a!=b)){
//                return -1;
//            }
//        }
//     //   cout<<ans<<endl;
//        if(i==j){
//            char x=s[i];
//            cout<<x<<c<<ch<<endl;
//            if(x!=c && x!=ch){
//                ans+=(2*(abs(ch-x)));
//            }
//        }

//        return ans;
//     }
// 1768. Merge Strings Alternately
// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

// Return the merged string.

// Example 1:
// Input: word1 = "abc", word2 = "pqr"
// Output: "apbqcr"
// Explanation: The merged string will be merged as so:
// word1:  a   b   c
// word2:    p   q   r
// merged: a p b q c r

// Example 2:
// Input: word1 = "ab", word2 = "pqrs"
// Output: "apbqrs"
// Explanation: Notice that as word2 is longer, "rs" is appended to the end.
// word1:  a   b 
// word2:    p   q   r   s
// merged: a p b q   r   s

// Example 3:
// Input: word1 = "abcd", word2 = "pq"
// Output: "apbqcd"
// Explanation: Notice that as word1 is longer, "cd" is appended to the end.
// word1:  a   b   c   d
// word2:    p   q 
// merged: a p b q c   d


#include <iostream>
using namespace std;

string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string ans;
        int i = 0;
        int j = 0;
        while(i < n1 || j < n2){
            if(i < n1){
              ans += word1[i];
              i++;
            }
            if(j < n2){
              ans += word2[j];
              j++;
            }
        }
        return ans;
 }
 
 
int main()
{
    string word1;
    string word2;
    cin>>word1;
    cin>>word2;
    
    string finalAns =  mergeAlternately(word1,word2);
    cout<<finalAns;

    return 0;
}

// You are given an integer n and a string s of size n composed of lower case english letters.

// You can perform the following operation on it:

// In one operation, you have to choose any character in the string s, then delete the first character to the left of the chosen character that is equal to the chosen character (if there exists) and delete the first character to the right of the chosen character that is equal to the chosen character (if there exists). 
// Note that in one operation, the length of the string s is reduced by a maximum of two characters.
// Task

// You want to minimize the length of the string s.

// Find the minimum number of operations that need to be performed to minimize the length of the string s.


#include<bits/stdc++.h>
using namespace std;

int Minimum_Operations (int n, string s) {
    int minOprationCount =0;
    int countRepetition[26]={0};
    for(int i=0;i<n;i++){
        countRepetition[s[i]-'a']+=1;
        if(countRepetition[s[i]-'a']==3){
            minOprationCount++;
            countRepetition[s[i]-'a']=1;
        }
    }
    for(int i=0;i<26;i++){
        if(countRepetition[i]==2){
            minOprationCount++;
        }
    }
    return   minOprationCount; 
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int out_;
        out_ = Minimum_Operations(n, s);
        cout << out_;
        cout << "\n";
    }
}
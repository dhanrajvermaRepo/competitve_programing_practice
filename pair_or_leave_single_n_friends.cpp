#include<iostream>
using namespace std;


//print all posible ways to paire or leave single n friends

void printsAllPossibleWaysToPair(string s,string ans){
    if(s.length() == 0 || s.length()==1 || s.length()==2){
        cout<<ans<<endl;
        return;
    }
    if(ans.length()>0){
        ans= ans+", "+ s[0];
    }else{
        ans=ans+s[0];
    }
    printsAllPossibleWaysToPair(s.substr(1),ans);
    for(int i=1;i<s.length();i++){
        if(ans.length()>0){
             ans = ans+s[0]+s[i];
        }else{
             ans = ans+", "+s[0]+s[i];
        }
        string remString = s.substr(1,i-1)+s.substr(i+1);
        // cout<<"*"<<remString<<endl;
        printsAllPossibleWaysToPair(remString,ans);
    }


}

//Find the number of ways to pair or leave single n friends

int paireFriends(int n){
    if(n==0 || n==1 || n==2) return n;   //base condition
    return  paireFriends(n-1) + paireFriends(n-2)*n-1;
}


int main(){
    cout<<paireFriends(4)<<endl;
    printsAllPossibleWaysToPair("ABCD","");
}
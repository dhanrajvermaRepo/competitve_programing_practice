#include<iostream>
using namespace std;

void printPermutations(string s,string ans){
    cout<<ans<<endl;
    if(s.length()==1){
        return;
    }
    for(int i=0;i<s.length();i++){
        printPermutations(s.substr(0,i)+s.substr(i+1),ans+s[i]);
    }
}


void printPermutationIterativeApproach(string s){
}





int main(){
    printPermutations("ABC","");
    cout<<"ABC"<<endl;
    return 0;
}
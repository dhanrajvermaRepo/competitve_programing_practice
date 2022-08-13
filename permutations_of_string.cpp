#include<iostream>
using namespace std;

//print permutations of given string

void printPermutations(string s,string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    };
    for(int i=0;i<s.length();i++){
        string remaingString;
        if(i==(s.length()-1)){
            remaingString = s.substr(0,i);
        }else{
            remaingString = s.substr(0,i)+s.substr(i+1);
        }
        printPermutations(remaingString,ans+s[i]);
    }

}


int main(){
    string s;
    cin>>s;
        printPermutations(s,"");
return 0;
}
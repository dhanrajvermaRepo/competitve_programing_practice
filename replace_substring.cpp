#include<iostream>
using namespace std;

//Given a string S you need replace pi with 3.14

string replacePi(string s){
    if(s.length()==0){
        return "";
    }
    if(s[0]=='p' && s[1]=='i'){
        return "3.14" + replacePi(s.substr(2));
    }else{
        return s[0]+replacePi(s.substr(1));
    }
}

int main(){
string s = "abcde";
cout<<replacePi("pippppiiiipi")<<endl;
return 0;
}
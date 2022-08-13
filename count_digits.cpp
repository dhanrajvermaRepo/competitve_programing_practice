#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int array[10]={0};
    for(int i=0;i<s.length();i++){
        array[s[i]-'0']+=1;
    }
    for(int i =0 ;i<10;i++){
        cout<<0<<" "<<array[0]<<endl;
    }

    return 0;
}
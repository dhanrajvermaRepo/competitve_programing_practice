#include<iostream>
using namespace std;


//Print all the subsets of the given set

void printAllSubset(char set[],int n){
    for(int i = 0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0){
                cout<<set[j]<<" ";
            }
        
        }
         cout<<endl;
    }
}








int main(){
char arr[] ={'a','b','c'};
printAllSubset(arr,3);
}
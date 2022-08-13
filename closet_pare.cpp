#include<iostream>
#include<climits>
using namespace std;

int main(){
    int numArr[] ={2,5,3,7,10};
    int num = 8;
    int pairFist;
    int pairLast;
    int closetSum = INT_MIN;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            int tempSum = numArr[i]+numArr[j];
            if(tempSum<=num && tempSum>closetSum){
                closetSum = tempSum;
                pairFist = numArr[i];
                pairLast = numArr[j];
            }
        }
    }
    cout<<"("<<pairFist<<", "<<pairLast<<")"<<endl;
}

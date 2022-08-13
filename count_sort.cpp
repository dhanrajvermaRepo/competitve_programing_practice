#include<iostream>
using namespace std;

//constraints
// The bigest element in the input array will always less than 1000

int checkArray[1000]={0};




void countSort(int array[],int n,int largestInArray){
    for(int i=0;i<n;i++){
        checkArray[array[i]]++;
    }
     for(int i=1;i<=largestInArray;i++){
        checkArray[i] += checkArray[i-1];
    }
    int temp[n];
    for(int i=n-1;i>=0;i--){
        temp[--checkArray[array[i]]]=array[i];
    }
    for(int i=0;i<n;i++){
        array[i] = temp[i];
    }
}

int main(){
    int inputArray[10]={0,20,1,4,6,0,12,30,9,10};
    countSort(inputArray,10, 30);
    for(int i=0;i<10;i++){
        cout<<inputArray[i]<<", ";
    }
    cout<<endl;
}
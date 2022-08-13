#include<iostream>
using namespace std;

//find last occurance of a key in n array
int findLastOccerance(int array[],int n,int i, int key){
    if(i==-1) return -1;
    if(array[i]==key) return i;
    return findLastOccerance(array,n,i-1,key);
}

//find first occurance of an element in an array
int findFirstOccerance(int array[],int n,int i, int key){
    if(i==n) return -1;
    if(array[i]==key) return i;
    return findFirstOccerance(array,n,i+1,key);
}

//print array elements usning recursion
void printArray(int array[],int n){
    if(n==1){
        cout<<array[0]<<", ";
        return;
    }
     printArray(array+1,n-1);
    cout<<array[0]<<", ";
}

//Check whether an array is sorted or not using recursion

bool checkArrey(int array[],int n){
    if(n==1) return true;
    return (array[n]>array[n-1] && checkArrey(array,n-1));
    }

int main(){
    int arra[]={1,8,3,4,5,6,7,8};
    cout<<findFirstOccerance(arra,8,0,8)<<endl;
    cout<<findLastOccerance(arra,8,8,8)<<endl;
    return 0;
}
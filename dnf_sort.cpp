#include<iostream>
using namespace std;

//constaints
//Array will have only three distinct numbers
// Here we are assuming that array has 0's, 1's and 2's

void swap(int arra[],int i,int j){
    int temp = arra[i];
    arra[i] = arra[j];
    arra[j] = temp;
}

void dnfSort(int array[],int n){
    int low=0;
    int mid=0;
    int high = n-1;
    while(mid<=high){
        if(array[mid] == 0){
            swap(array,low++,mid++);
        }else if(array[mid]==1){
            mid++;
        }else{
            swap(array,mid,high--);
        }
    }
}

int main(){
    int inputArra[10]={0,1,2,0,1,2,0,1,2,0};
    dnfSort(inputArra,10);
    for(int i=0;i<10;i++){
        cout<<inputArra[i]<<", ";
    }
    cout<<endl;
    return 0;
}
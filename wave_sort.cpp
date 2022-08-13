#include<iostream>
using namespace std;
void swap(int array[],int i,int j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
void waveSort(int array[],int n){
    for(int i =1;i<n;i+=2){
        if(array[i-1]<array[i]){
            swap(array,i-1,i);
        }
        if((i+1)<n&&array[i]>array[i+1]){
            swap(array,i,i+1);
        }
    }
}

int main(){
    int inputArray[11] = {1,2,3,11,4,5,6,7,8,9,10};
    waveSort(inputArray,11);
    for(int i =0;i<11;i++){
        cout<<inputArray[i]<<", ";
    }
    cout<<endl;
    return 0;
}
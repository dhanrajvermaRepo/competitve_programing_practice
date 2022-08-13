#include<iostream>
using namespace std;
void merge(int*a,int start,int end,int mid){
    int size = end-start+1; 
    int temp[size];
    for(int i=0;i<size;i++){
        temp[i]=a[start];
    }
    int j = 0;
    int k = size/2;
    for(int i =start;i<=end;i++){
        if(j>end/2){
            a[i]=temp[k++];
        }else if(k>end){
            a[i]=temp[j++];
        }else{
            if(temp[j]<temp[k]){
            a[i] = temp[j++];
        }else{
            a[i]=temp[k++];
        }
        }
        
    }
}
void mergeSort(int*a,int start,int end){
    if(start<end){
        int mid =  (start+end)/2;
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,end);
        merge(a,start,end,mid);
    }
}
int main(){

    int a[10] = {4,3,10,1,5,2,7,35,6,12};
    mergeSort(a,0,9);
    for(int i=0;i<10;i++){
        cout<<a[i]<<", ";
    }
    cout<<endl;
    return 0;
}
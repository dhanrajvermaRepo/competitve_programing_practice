#include<iostream>
#include<climits>
using namespace std;

signed long int bestsumOf(signed long int* array, int n,signed long int maxSum,int size){
    if(n==1){
        return max(maxSum,array[0]);
    }
    signed long int sum = 0;
    int i =1;
    for(i = 1;n>=(i*i+i)/2;i++);
    i--;
    int last = (i*i+i)/2-1;
    if(size>n){
        sum=array[size-n+last] - array[size-n-1];
    }else{
       sum=array[last]; 
    }
    return bestsumOf(array,n-1,max(maxSum,sum),size);
}


int main(){
    int n;
    cin>>n;
    signed long int nums[100000];
    signed long int maxSum = INT64_MIN;
    for(int i=0;i<n;i++){
        if(i==0){
            cin>>nums[i];
        }else{
            signed long int temp ;
            cin>>temp;
            nums[i]= nums[i-1]+temp;
        }
    }

    cout<<bestsumOf(nums,n,maxSum,n)<<endl;

    return 0;
}
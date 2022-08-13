#include<iostream>
#include<climits>
using namespace std;

int main(){
    long long nums[100000];
    int n;
    long long maxSum = 0;
    int maxElements =1;
    long long  maxNumber = LLONG_MIN;
    int maxNumPosotion;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(nums[i]>maxNumber){
            maxNumber = nums[i];
            maxNumPosotion = i;
        }
    }
    maxSum = maxNumber;

    for(int i=0;i<n;i++){
        if(i == maxNumPosotion){
            continue;
        }
        long long tempSum = maxSum + nums[i];
        if(tempSum>=maxSum){
            maxElements++;
            maxSum+=nums[i];
        }
    }

    cout<<maxSum<<" "<<maxElements;
    return 0;
}
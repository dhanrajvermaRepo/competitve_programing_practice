#include<iostream>
#include<climits>
#define MONK_QUITENT 1000000007;

using namespace std;

long int gcd(long int a,long int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

long int g(int nums[],int n){
    long int gcdValue = gcd(nums[0],nums[1]);
    for(int i=2;i<n;i++){
        gcdValue = gcd(gcdValue,nums[i]);
    }
    return gcdValue;
}
long int f(int nums[],int n){
    long int multiplicationValue=1;
   for(int i=0;i<n;i++){
    multiplicationValue=(multiplicationValue*nums[i])%1000000007;
    }
    return multiplicationValue;
}

long int modularExponentiation(long int n,long int power){
    if(power == 0) return 1;
    if(power%2==0){
        long int  temp = (n*n)%1000000007;
        return modularExponentiation(temp,power/2);
    }else{
        long  int temp = (n*n)%1000000007;
        return (n*modularExponentiation(temp,(power-1)/2))%1000000007;
    }
}

int main(){
    int n;
    int nums[50];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<modularExponentiation(f(nums,n),g(nums,n))<<endl;
    return 0;
}


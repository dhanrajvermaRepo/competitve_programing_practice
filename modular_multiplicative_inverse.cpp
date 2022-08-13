#include<iostream>
using namespace std;
int d,x,y;
int modularExponentiation(int num,int n,int m){
    if(n==0)return 1;
    if(n%2==0){
        return modularExponentiation((num*num)%m,n/2,m);
    }else{
        return (num*modularExponentiation((num*num)%m,(n-1)/2,m))%m;
    }
}

void extentedEuclidTheorem(int a,int b){
    if(b==0){
        d=a;
        x=1;
        y=0;
    }else{
         extentedEuclidTheorem(b,a%b);
         int temp = x;
         x=y;
         y= temp-(a/b)*y;
    }

}

int modularMultiplicativeInverase(int a,int b){
    extentedEuclidTheorem(a,b);
    return (x%b+b)%b;
}

int main(){
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    int ans1 = modularExponentiation(a,b,m);
    int ans2 = 1/modularMultiplicativeInverase(c,m);
    cout<<(ans1*ans2)%m;
}
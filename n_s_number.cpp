#include<iostream>
using namespace std;

int main(){
    int n,s;
    cin>>n;
    cin>>s;
    int largestNumber = 0;
    while(n--){
        if(s>=9){
            largestNumber=largestNumber*10+9;
            s=s-9;
        }else if(s!=0){
            largestNumber = largestNumber*10 +s;
        }else{
            largestNumber = largestNumber*10;
        }
    }
    cout<<largestNumber<<endl;
}

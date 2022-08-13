#include <iostream>
#include<math.h>
#include<map>
using namespace std;

bool isAlreadyVisited(int*a,int n,int number){
    for(int i =0 ;i<n;i++){
        if(a[i] == number) return true;
    }
    return false;
}

int minOprations(int* a,int n,int k){
    if(n%2!=0) return -1;
    int uniqueEven = 0;
    int uniqueOdd = 0;
    int availableEven=k/2;
    int availableOdd= k- availableEven;
    map<int,int> uniqueEvenArray;
    map<int,int> uniqueOddArray;
    for(int i=0;i<n;i++){
        if(uniqueEven>=n/2&&a[i]%2==0){
            continue;
        }else if(uniqueOdd>=n/2&&a[i]%2!=0){
            continue;
        }
        if(a[i]%2==0){
            if(uniqueEvenArray[a[i]]==0){
                uniqueEvenArray[a[i]]=1;
                  uniqueEven++;
                if(a[i]<=k){
                    availableEven--;
                }
            }

        }else{
            if(uniqueOddArray[a[i]]==0){
                uniqueOddArray[a[i]]=1;
                 uniqueOdd++;
                  if(a[i]<=k){
                    availableOdd--;
                }
            }
        }
    }
    int requiredEvens = n/2 - uniqueEven;
    if(requiredEvens >availableEven) return -1;
    int requiredOds = n/2 - uniqueOdd;
    if(requiredOds> availableOdd) return -1;
    // cout<<"requiredEven "<<requiredEvens<<endl;
    // cout<<"requiredOdds "<<requiredOds<<endl;
	int minops =0;
	if(requiredOds>0){
		minops+=requiredOds;
	}
	if(requiredEvens>0){
		minops+=requiredEvens;
	}
    return minops;

}

int findGCD(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b){
        return findGCD(a%b,b);
    }else{
        return findGCD(a,b%a);
    }
}

int main() {
    // int t,n,k;
    // cin>>t;
    // int a[100000];
    // while (t--){
    //     cin>>n;
    //         for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // cin>>k;
    // cout<<minOprations(a,n,k)<<endl;

    // }

    cout<<findGCD(20,40)<<endl;
    
    return 0;
}
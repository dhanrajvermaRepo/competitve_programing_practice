#include<iostream>
#define ULL unsigned long long int
using namespace std;
ULL MODEn = 1000000007;
ULL facts [1005];

ULL  possibleCombinations(int n,int r){
    ULL factn = facts[n];
    ULL factnMinusr = facts[n-r];
    ULL factr = facts[r];
    ULL nCr= factn/(factnMinusr*factr)%MODEn;
    return nCr;
}


int main(){
    facts[0] = 1;
    facts[1] = 1;
    for(int i=2;i<=1005;i++){
        facts[i] = (facts[i-1]*i)%MODEn;
    }
    cout<<facts[93]<<", "<<facts[94]<<endl;
	// int t;
	// cin>>t;
	// while(t>0){
	// 	int n,p;
	// 	cin>>n;
	// 	cin>>p;
	// 	long long  int sum=0;

	// 	while(p>=0){
	// 		sum += possibleCombinations(n,p);
    //         sum%=1000000007;
	// 		p--;
	// 	}

	// 	cout<<sum<<endl;


	// 	t--;
	// }
    return 0;
}
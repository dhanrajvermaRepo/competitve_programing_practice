#include <iostream>
#include<string>
using namespace std;

bool hasMatch(string str1,string str2,int k){
	for(int i=0;i<k;i++){
		if(str1[i]==str2[i]&&str1[i]=='1'){
			return 1;
		}
	}
	return 0;
}
int main() {
	int t;
	cin>>t;
	while(t>0){
		int n,k,minDishes=0;
		cin>>n>>k;
		string pattern[n]={""};
		for(int i=0;i<n;i++){
            cin>>pattern[i];
            if(i==0){
                minDishes++;
                continue;
            }
			int j = i-1;
			bool matched=0;
			while(j>=0){
				if(matched=hasMatch(pattern[i],pattern[j],k)){
					break;
				}
				--j;
			}
			if(!matched){
				minDishes++;
			}
		}	
		cout<<minDishes<<endl;	
		--t;
	}
	return 0;
}
#include <iostream>
#include<climits>
using namespace std;



// Problem
// You are given two arrays  and . In each step, you can set  if . Determine the minimum number of steps that are required to make all 's equal.

// Input format

// First line:  
// Second line: 
// Third line: 
// Output format

// Print the minimum number of steps that are required to make all 's equal. If it is not possible, then print -1.

// Constraints


// Sample input

// 2
// 5 6
// 4 3

// Sample output

// -1

// Sample Input
// 5
// 5 7 10 5 15
// 2 2 1 3 5
// Sample Output
// 8
// Time Limit: 1
// Memory Limit: 256
// Source Limit:

bool isEqual(int arr[],int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]) return false;
	}
	return true;
}

int findmin(int arr[],int n){
	int minimum = INT_MAX;
	for(int i=0;i<n;i++){
		minimum = min(minimum,arr[i]);
	}
	return minimum;
}

int main() {
	int n;
    cin>>n;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
    int steps = 0;
    int min = findmin(a,n);
    int i = 0;
    while(!isEqual(a,n)){
                if(i==n){
            i=0;
        }
        if(a[i]>min){
            if(b[i]<=a[i]){
                a[i] = a[i]-b[i];
                if(a[i]<min){
                    min = a[i];
                }
                steps++;
            }else{
                steps=-1;
                break;
            }
        }
        i++;
    }
    cout<<steps<<endl;
	return 0;
}
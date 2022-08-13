#include <bits/stdc++.h>

using namespace std;


int binaryToDecimal(int number){
    int x=1;
    int ans =0;
    while (number > 0)
    {
        int lastDegit = number%10;
        ans +=lastDegit*x;
        number /=10;
        x*=2;
    }
    return ans;
}
string decimalToBinary(int num){
    string binary;
    while(num>0){
         binary = binary+to_string(num%2);
         num/=2;
    }
     reverse(binary.begin(),binary.end());
     return binary;
}

int reveseNumber(int num){
    int ans =0;
    while(num>0){
        int lastDigit = num%10;
        ans = ans*10 + lastDigit;
        num /=10;
    }
    return ans;
}


int main(){
    // int binaryNum;
    // cout<<"Enter binary number:";
    // cin>> binaryNum;
    // int decimal = binaryToDecimal(binaryNum);
    // cout<<"Corresponding decimal value: "<<decimal<<endl;
    cout<<decimalToBinary(8)<<endl;
    return 0;
}
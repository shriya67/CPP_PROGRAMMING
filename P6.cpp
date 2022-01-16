/*PROGRAM TO CALCULATE SUM OF DIGITS OF 2 NUMBERS USING FUNCTION */
#include<bits/stdc++.h>
using namespace std;
int digit_sum(int n){
    int digit_sum=0;
    while(n){
        digit_sum=digit_sum+n%10;
        n=n/10;
    }
    return digit_sum;

}
int main(){
    int a,b;
    cout<<endl<<"ENTER THE TWO NUMBERS WHOSE SUM OF DIGITS ARE CALCULATED : "<<endl;
    cin>>a>>b;
    cout<<endl<<"SUM OF DIGITS OF GIVEN 2 NUMBERS ARE : ";
    cout<<digit_sum(a)+digit_sum(b);
    return 0;
}
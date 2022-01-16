/*PROGRAM TO CALCULATE SUM OF DIGITS OF A GIVEN NUMBER*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE NUMBER WHOSE DIGIT SUM TO BE CALCULATED : "<<endl;
    cin>>n;
    int digit_sum=0;
    while(n){
        digit_sum=digit_sum+n%10;
        n=n/10;
    }
    cout<<"DIGIT_SUM OF THE GIVEN NUMBER IS : "<<digit_sum<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int sum1( int a,int b){
    if(a>b)return 0;
    else if(a%2!=0){
        return a+=sum1(a+1,b);
    }
    else return sum1(a+1,b);
}
int main(){
    int  a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Sum  of  odd numbers from "<<a<<" to "<<b<<"is : "<<sum1(a,b);// Function call

}
#include<iostream>
using namespace std;
int power(int n){
    if (n==1) return true;//Base case
    if (n==0|| n%2!=0) return false; 
    // Recursive case
    return power(n/2);
    
}
int main(){
    int  n;
    cout<<"Enter value of n :";
    cin>>n;
    

}
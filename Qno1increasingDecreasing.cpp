#include<iostream>
using namespace std;
void printIncreasing(int n){
    //Base case
    if(n==0) return;
    //Recursive call
      
        printIncreasing(n-1);
        cout<<n<<" ";

}
void printDecreasing(int n){
    //Base case
    if(n==0) return;
    //Recursive call
        cout<<n<<" ";
        printDecreasing(n-1);

}
int main(){
    int  n;
    cout<<"Enter value of n :";
    cin>>n;
    printIncreasing(n);//Function call
    printDecreasing(n-1);

}
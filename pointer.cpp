#include<iostream>

using namespace std;

void PassbyValue(int a){//pass by value -> change occur in the copy of the variable
    a=10;
}
void PassbyRefPointer(int* ptr){//pass by reference using pointers -> change occur in the main variable
    *ptr = 10;
}
void PassbyRefAlias(int &b){//pass by reference using reference(alias) -> chnage occur in the main variable 
    b = 50;
}
int main(){
    int a = 5;
    // int* ptr = &a;
    // int* p = &a;
    // int** q = &p;

    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<p<<endl;
    // cout<<*q<<endl;
    // PassbyRefAlias(a);
    // cout<<a<<endl;
    //que
    int arr[]={10,20,30,40};
    int* ptr = arr;
    cout<<*(ptr+1)<<endl;//deref->20
    cout<<*(ptr+3)<<endl;//deref->40
    ptr++;
    cout<<*ptr<<endl;//20

    
    return 0;
}
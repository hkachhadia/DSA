#include<iostream>

using namespace std;

void linearsearch(int a[]){
    int target,flag,x;
    cout<<"Enter the target element: ";cin>>target;
    for (int i = 0; i < 10; i++)
    {
        if (target == a[i])
        {
            flag = 1;
            x=i;
            break;
        }
        else{
            flag=0;
        }
    }
    if (flag == 1)
    {
            cout<<target<<" element found at "<<x<<" index"<<endl;
    }
    else{
         cout<<target<<" element not found in the array"<<endl;
    }
}
int main(){
    int a[10];
    cout<<"Enter 10 element in the array: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    linearsearch(a);
    
    return 0;
}
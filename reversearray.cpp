#include<iostream>

using namespace std;

int main(){
    //two pointer approach
    int a[7]={4,2,7,8,1,2,5};
    int size =7;
    int start = 0,end = size - 1;
    cout<<"actual array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<a[i]<<" ";
    }
    
    while (start<=end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<endl;
    cout<<"reverse array: "<<endl;
    
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<a[i]<<" ";
    }
    

    return 0;
}
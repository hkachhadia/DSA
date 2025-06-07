#include<iostream>

#include<vector>

using namespace std;

vector<int> NextPermutation(vector<int> &a) //O(1) = TC , SC = O(n)
{
    int piv = -1,n= a.size();
    for (int i = n -2; i >=0; i--) //1-> finding the pivot
    {
        if(a[i]< a[i+1])
        {
            piv = i;
            break;
        }
    }
    if(piv == -1) //reversing the array
    {
        int  i = 0,j = n-1;
        while(i<=0)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
        return a;
    }
    for (int i = n-1; i > piv; i--) // 2-> finding the most right element greater than pivot
    {
        if(a[i] > a[piv])
        {
            swap(a[i],a[piv]);
            break;
        }
    }
    int i=piv+1 , j= n-1;
    while (i<=j) // 3-> reversing the part of an array
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
    return a;
    
}
int main(){
    // vector<int> vec = {1,2,3,5,4};
    vector<int> vec = {4,3,2,1};
    vector<int> a = NextPermutation(vec);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
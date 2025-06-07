#include <iostream>

using namespace std;
int BinarySearch(int arr[],int n, int target)
{
    int s = 0, e = n, mid;
    for (int i = 0; i < n; i++)
    {
        mid = s + ((e-s) / 2); //optimisation
        if (arr[mid] > target)
        
        {
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else if (arr[mid] == target)
        {
            return mid;
        }
    }
    return -1;
}
int BinSearchRecursion(int arr[],int target,int s,int e){
    if(s<=e){
        int mid = s + ((e-s) / 2); //optimisation
        if (arr[mid] > target)
        {
            return BinSearchRecursion(arr,target,s,mid-1);
        }
        else if (arr[mid] < target)
        {
            return BinSearchRecursion(arr,target,mid+1,e);
        }
        else if (arr[mid] == target)
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    // cout << BinarySearch(arr,6,1) << endl;
    // cout << BinSearchRecursion(arr,90,0,6) << endl;
    return 0;
}
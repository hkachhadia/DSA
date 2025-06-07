#include <iostream>

using namespace std;
int SumofArray(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int ProductofArray(int a[], int size)
{
    int pro = 1;
    for (int i = 0; i < size; i++)
    {
        pro = pro * a[i];
    }
    return pro;
}
void minmax(int a[], int size)
{
    int min = INT16_MAX, max = INT16_MIN, x, y;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            x = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            y = i;
        }
    }
    swap(a[x], a[y]);
    for (int i = 0; i < size; i++)
    {
        cout << " " << a[i] << " ";
    }
}
void unique(int a[], int size)
{
    //only one element should be unique in the array;;
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ a[i];
    }
    cout<<"unique element : "<<ans<<endl;
    
}
void intersection(int a[], int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
            }
        }
    }
}

int main()
{
    int a[5], b[5], size = 5;
    cout << "Enter the 5 elements in array a: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    // cout << "Enter the 5 elements in array b: " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> b[i];
    // }
    // cout<<"sum : "<<SumofArray(a,size)<<endl;
    // cout<<"product : "<<ProductofArray(a,size)<<endl;
    // minmax(a,size);
    unique(a, size);
    // intersection(a, b, size);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
void TwoSum (vector<int> &vec,int target){
    int i,j,x,y,size = vec.size();
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if (vec[i] + vec [j] == target)
            {
                x=i;
                y=j;
            }
            
        }
        
    }
    vector<int>a;
    a.push_back(x);
    a.push_back(y);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}
int main()
{
    vector<int>a={2,7,11,15};
    TwoSum(a,9);
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
void TwoSum (vector<int> &vec,int target,int size){
    int i,j,x,y;
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
vector<int> pairsum(vector<int> &vec,int target,int size){//O(n  )
    int i=0,j=size-1,x,y;
    vector<int>ans;
    while (i<j)
    {
        int ps = vec[i]+vec[j];
        if(ps > target){
            j--;
        }
        else if(ps<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    
    
}
int main()
{
    vector<int>a={2,11,15,7};
    vector<int> ans = pairsum(a,9,4);
    cout<< ans[0]<<", "<<ans[1]<<endl;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<int> &vec, int target)
{
    for (int val : vec)
    {
        if (val == target)
        {
            return 1;
            break;
        }
    }
    return 0;
}
void reverse(vector<int> &vec,int size){
    int start =0,end = size-1;
    while(start<=end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    cout<<"after swap in function: "<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    
}
int main()
{
    vector<int> vec = {4, 1, 2, 1, 2};
    // int target;
    int size = vec.size();

    // int ans=0;
    // for(int val : vec){
    //     ans = ans^val;
    // }
    // cout<<"answer: "<<ans;


    // cout << "target: ";
    // cin >> target;
    // cout << "answer :" << linearsearch(vec, target);

    cout<<"before swap in main: "<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    reverse(vec,size);
    cout<<endl;
    cout<<"after swap in main: "<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}
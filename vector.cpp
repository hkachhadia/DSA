#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    cout<<"after push_back size = "<<vec.size()<<endl;
    cout<<"after push_back capacity= "<<vec.capacity()<<endl;
    // vec.pop_back();
    // cout<<"after pop_back size = "<<vec.size()<<endl;
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<vec.at(0)<<endl;

    // for (int val : vec)
    // {
    //     cout << val << endl;
    // }

    return 0;
}
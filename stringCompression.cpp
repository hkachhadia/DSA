#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void compression(vector<char> &chars) //O(n)
{
    int idx = 0, n = chars.size();
    for (int i = 0; i < n;)
    {
        char ch = chars[i];
        int count = 0;
        while (i < n && chars[i] == ch) 
        {
            count++;
            i++;
        }
        if (count == 1)
        {
            chars[idx++] = ch;
        }
        else
        {
            chars[idx++] = ch;
            string str = to_string(count);
            for (char dig : str)
            {
                chars[idx++] = dig;
            }
        }
    }
    chars.resize(idx); // resize the vector based on compression
    cout << "idx = " << idx << endl;
    for (int i = 0; i < idx; i++)
    {
        cout << chars[i] << " ";
    }
}
int main()
{
    vector<char> vec = {'a', 'a', 'b', 'b', 'c', 'c', 'c'}; // should be continues (order)
    compression(vec);
    return 0;
}
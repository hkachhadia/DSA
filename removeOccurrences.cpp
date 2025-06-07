#include<iostream>

#include<algorithm>

#include<vector>

using namespace std;
string removeOccurrences(string s,string part)
{
    while(s.length()>0 && s.find(part) < s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
void myVersion(string str,string part)
{
    int count = 0;
    while(str.find(part) < str.length())
    {
        int start = str.find(part),end = part.length();
        str.erase(start,end);
        count++;
    }
    cout<<"occurrence of part (abc) : "<<count<<endl;
    cout<<"string : "<<str;
}
int main(){
    string str = "daabcbaabcbc";
    // string str = "abcabcabc";
    string part = "abc";
    myVersion(str,part);
    cout<<endl;
    cout<<"AC's version : "<<removeOccurrences(str,part);
    return 0;
}
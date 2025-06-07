#include<iostream>

#include<algorithm>

#include<vector>

using namespace std;
bool isFreqSame(int freq1[],int freq2[]) //O(1)
{
    for (int i = 0; i < 26; i++)
    {
        if(freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
    
}
bool checkInclusion(string s1,string s2)
{
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++; //a->0,b->1,c->2 ...
    }
    int windSize = s1.length(); //---> window size  = 2 [a,b]
    for (int i = 0; i < s2.length(); i++)
    {
        int windIdx = 0,idx = i;
        int windFreq[26] = {0};
        while (windIdx < windSize && idx < s2.length())  //*difficult to understand
        {
            windFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }                                                //*
        if(isFreqSame(freq,windFreq)) //found
        {
            return true;
        }
    }
    return false;
    
    
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout<<checkInclusion(s1,s2);
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int brutef(vector<int> &a,int n){//O(n^2)
    for(int val : a){
        int freq = 0;
        for(int el : a){
            if(el == val){
                freq++;
            }
        }
        if(freq>(n/2)){
            return val;
        }
    }
    return -1;
}
int optbrutef(vector<int> &a,int n){//O(nlogn + n) = O(nlogn)
    int freq =1,ans = a[0];
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
    {
        if(a[i] == a[i-1]){
            freq++;
        }
        else{
            freq =1;
            ans =a[i];
        }
        if(freq > (n/2)){
            return ans;
        }
    }
}
int moorevoting(vector<int> &a,int n){//O(n)
    int freq = 0, ans =0;
    for (int i = 0; i < n; i++)
    {
        if(freq == 0){//selecting first element as ans
            ans = a[i];
        }
        if(ans == a[i]){//if first element repeats in the vector then freq++
            freq++;
        }
        else{//instead of reseting the freq, freq--
            freq--;
        }
    }
    if (freq > (n/2))//variation
    {
        return ans;
    }
    else{
        return -1;
    }
    
}
int main(){
    vector<int> a = {1,2,3,3,3};
    int n = a.size();
    // cout<<brutef(a,n);
    // cout<<optbrutef(a,n);
    cout<<moorevoting(a,n);

    
    return 0;
}
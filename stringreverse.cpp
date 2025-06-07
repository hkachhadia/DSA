#include<iostream>
#include<algorithm> //for reverse function 
#include<string>
#include<vector>
using namespace std;

bool isPalindrome(string str)
{
    string  rst = str;
    reverse(str.begin(),str.end());
    if(rst == str)
    {
        return true;
    }
    else{
        return false;
    }

}
int main(){
    //for char array
    // char x[] = "hetkachhadia";
    // int i = 0,j = 0;
    // for (int k = 0; x[k] != '\0'; k++)
    // {
    //     j++;
    // }
    // int s = j;
    // while(i<j)
    // {
    //     swap(x[i],x[j]);
    //     j--;
    //     i++;
    // }

    // for (int k = 0; k <= s; k++)
    // {
    //     cout<<x[k];
    // }
    
    //for String
    // string str = "kachhadia";
    // int i = 0,j = str.length()-1;
    // while(i<j)
    // {
    //     swap(str[i],str[j]);
    //     i++;
    //     j--;
    // }
    // cout<<str;

    //string function
    // string str = "kachhadia";
    // reverse(str.begin(),str.end());
    // cout<<str;
    //palindrom or not
    string str = "racecar";
    cout<<isPalindrome(str);
    
    return 0;
}
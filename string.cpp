#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    // char str[] = "Het Kachhadia";
    // cout<<"Enter the String : ";
    // // cin>>str;
    // // cout<<"output without getline: "<<str<<endl;
    // cin.getline(str,100);
    // cout<<"output with getline: "<<str<<endl;

    // for(char ch : str)
    // {
    //     cout<< ch <<" ";  
    // }
    // int len = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     len++;
    // }
    // cout<<len<<endl;

    //STRINGS
    // string str = "het kachhadia";//dynamic => runtime resize
    // cout<< str <<endl;
    // str = "hello";
    // cout<<str<<endl;
    // string str1 = "good";
    // string str2 = " day";
    // string str3 = str1 + str2; //concatenation
    // cout<<str3<<endl;
    // cout<<(str1 == str2)<<endl; // compare
    // cout<<(str1 < str2)<<endl;

    string str;
    cout<<"Enter the string : ";
    // cin >> str;
    getline(cin,str);
    cout<<"Output : " << str << endl; 
    return 0;
}
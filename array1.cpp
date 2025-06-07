#include<iostream>

using namespace std;

int main(){
    int num[10],smallest,largest,i,x,y;
    cout<<"Enter the 10 element in array: "<<endl;
    for (i = 0; i < 10; i++)
    {
        cin>>num[i];
    }
    smallest =INT16_MAX;
    largest =INT16_MIN;
    for ( i = 0; i < 10; i++)
    {
        if (num[i]<smallest)
        {
            smallest = num[i];
            x = i;
        }
                    //OR
        // smallest = min(num[i], smallest);

        if (num[i]>largest)
        {
            largest = num[i];
             y = i;

        }
                    //OR
        // largest = max(num[i], largest);
        

    }
    cout<<"minimum number in the array: "<<smallest<<" at "<<x<<endl;
    cout<<"maximum number in the array: "<<largest<<" at "<<y<<endl;
    

    
    return 0;
}
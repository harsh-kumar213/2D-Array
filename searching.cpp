#include<iostream>
using namespace std;
int main()
{
    int arr[10][20];
    for(int i = 0 ; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    int i = 0; 
    int j = 0;
    bool found = 0;
    while(i<3)
    {
        j=0;
        while(j<3)
        {
            if(arr[i][j]==key)
            {
                cout<<i<<" "<<j<<endl;
                found = 1;
                break;
            }
            else
        {
            j++;
        }
        }
        if(found==0)
        {
            i++;
        }
        else{
            break;
        }
    }
    return 0;
}
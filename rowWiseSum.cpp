#include<iostream>
using namespace std;
int main()
{
    int arr[10][10];
    
    int row;
    cin>>row;
    int col;
    cin>>col;
    cout<<"enter the elements of array"<<endl;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0 ; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i<row; i++)
    {
        sum = 0; 
        for(int j = 0 ; j<col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<"sum of "<<i+1<<"row is"<<sum<<endl;
    }
    return 0;

}
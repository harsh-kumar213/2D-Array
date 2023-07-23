//rotate matrix by 90degree
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
    int startingrow = 0;
    int lastcol = col - 1;
    while(startingrow<row)
    {
        
    }
}
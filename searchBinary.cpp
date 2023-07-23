#include<iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int row,col;
    cout<<"enter the number of rows"<<endl;
    cin>>row;
    cout<<"enter the number of col"<<endl;
    cin>>col;
    for(int i = 0; i<row;i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter the value of target"<<endl;
    cin>>key;
    int s = 0;
    int e = row*col - 1;
        int mid = (e -s)/2 + s;
        while(s<e)
        {
            int element = arr[mid/col][mid%col];
            if(element==key)
            {
                cout<<"found at index "<<(mid/col)<<" "<<(mid%col);
                break;
            }
            else if(element<key)
            {
                s = mid + 1;
            }
            else 
            {
                e = mid -1;
            }
            mid = s +(e-s)/2;
        }
        return 0;
}
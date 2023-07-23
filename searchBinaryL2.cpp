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

    int startRow = 0;
    int endCol = col - 1;
    while(endCol>=0 && startRow<row)
    {
        int element = arr[startRow][endCol];
        if(element == key)
        {
            cout<<"element present at index"<<startRow<<" "<<endCol;
            break;
        }
        else if(element<key)
        {
            startRow++;
        }
        else{
            endCol--;
        }
    }
    return 0;
}
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

     int s = 0;
     int e = 0;
     bool down = true;
     while(e<col)
     {
       while(s<row && s>=0)
       {
          cout<<arr[s][e]<<" ";
           if(down== true){
          s++;}
          else{
            s--;
          }
       }
       if(s==row)
       {
          s = row - 1;
          down = false;
       }
       else
       {
         s = 0;
         down = true;
       }
       e++;
     }
     return 0;

}
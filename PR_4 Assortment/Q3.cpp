#include<iostream>
using namespace std;

int main()
{
    int row, column;

    cout<<"Enter Row:";
    cin>>row;

    cout<<"Enter Column:";
    cin>>column;

    int arr[row][column], transpose[row][column];

    cout<<endl;
    cout<<"Enter the Elements:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            transpose[j][i] = arr[i][j];
        }
        
    }

    cout<<"Transpose Maxtrix is:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
    
}
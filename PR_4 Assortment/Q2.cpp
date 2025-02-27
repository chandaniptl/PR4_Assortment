#include<iostream>
using namespace std;

int main()
{
    int row, column,large_value;

    cout<<"Enter the array's row size:";
    cin>>row;

    cout<<"Enter the array's column size:";
    cin>>column;

    int arr[row][column];

    cout<<endl;
    cout<<"Enter arry's elements:"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
        
    }

    large_value=arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] > large_value)
            {
                large_value = arr[i][j];
            }
            
        }
        
    }

    cout<<"Print the Largest values:"<<large_value;
    
    
    return 0;
}
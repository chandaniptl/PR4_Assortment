#include <iostream>
using namespace std;

int main() {
    int row, column;
    int row_num, col_num;
    int row_sum=0, col_sum = 0;

    cout << "Enter the row : ";
    cin >> row;
    cout << "Enter the column : ";
    cin >> column;

    int arr[row][column];

    cout<<endl;
    cout << "Enter Elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    
    cout << "Enter row number: ";
    cin >> row_num;
    
    if (row_num >= 0 && row_num < row) {
        cout << "Elements of row " << row_num << ": ";
        for (int j = 0; j < column; j++) {
            cout << arr[row_num][j];
            if (j < column - 1) cout << ", ";
            row_sum += arr[row_num][j];
        }
        cout<<endl;
        cout << "The sum of a row " << row_num << ": " << row_sum << endl;
    } else {
        cout << "Invalid number!" << endl;
    }

    cout<<endl;
    cout << "Enter column number: ";
    cin >> col_num;
    
    if (col_num >= 0 && col_num < column) {
        cout << "Elements of column " << col_num << ": ";
        
        for (int i = 0; i < row; i++) {
            cout << arr[i][col_num];
            if (i < row - 1) cout << ", ";
            col_sum += arr[i][col_num];
        }
        cout<<endl;
        cout << "The sum of column " << col_num << ": " << col_sum << endl;
    } else {
        cout << "Invalid number!" << endl;
    }

    return 0;
}

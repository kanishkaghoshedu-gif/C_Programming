#include <iostream>
using namespace std;

int main(){
    int mat[3][3]={{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
    int diag_sum1 = 0;
    int diag_sum2 = 0;
    int flag = 1;

    for(int i = 0; i < 3; i++){
        int row_sum = 0;
        int col_sum = 0;

        for(int j = 0; j < 3; j++){
            row_sum = row_sum + mat[i][j];
            col_sum = col_sum + mat[j][i];
        }

        cout << "Sum of row " << i + 1 << " = " << row_sum << endl;
        cout << "Sum of column " << i + 1 << " = " << col_sum << endl;

        if(row_sum != col_sum){
            flag = 0;
            break;
        }
    }

    for(int i = 0; i < 3; i++){
        diag_sum1 += mat[i][i];
        diag_sum2 += mat[i][3 - i - 1];
    }

    cout << "Diagonal 1 = " << diag_sum1 << endl;
    cout << "Diagonal 2 = " << diag_sum2 << endl;

    if(flag == 1 && diag_sum1 == diag_sum2)
        cout << "Magic Square";
    else
        cout << "Not A Magic Square!";

    return 0;
}
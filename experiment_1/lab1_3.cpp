#include <iostream>
#define a matrix[i][j]
#define b matrix[j][i]

using namespace std;
typedef int(*R)[3]; 

R getInputMatrix(R matrix){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

R reverseMatrix(R matrix){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i < j){      //请注意宏
                a = a + b;
                b = a - b;
                a = a - b;
            }
        }
    }
    return matrix;
}

void printMatrix(R matrix){
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrix[i][j] <<" ";
        }
        cout<< endl;
    }
}

int main(int argc, char const *argv[])
{
    int matrix[3][3] = {0};
    R matrixAddr = matrix;
    cout << "请输入矩阵, 格式如下:" << endl;
    cout << "a00 a01 a02" <<endl;
    cout << "a10 a11 a12" <<endl;
    cout << "a20 a21 a22" <<endl;
    getInputMatrix(matrixAddr);
    cout << "正在转置..." << endl;
    reverseMatrix(matrixAddr);
    cout << "结果如下:" << endl;
    printMatrix(matrixAddr);
    cin.clear();
    cin.sync();
    cin.get();
    cin.get();
    return 0;
}

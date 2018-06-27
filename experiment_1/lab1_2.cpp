#include <iostream>
#define MAX(a,b) a > b ? a : b
using namespace std;

int maxl(int a, int b){
    cout << "function 1 ";
    return MAX(a,b);
}

long maxl(long a, long b){
    cout << "function 2 ";
    return MAX(a,b);
}

float maxl(float a, float b){
    cout << "function 3 ";
    return MAX(a,b);
}

double maxl(double a, double b){
    cout << "function 4 ";
    return MAX(a,b);
}

int main(int argc, char const *argv[]){
    cout << maxl(1, 2) << endl;
    cout << maxl(1L, 2L) << endl;
    cout << maxl(1.2f, 2.4f) << endl;
    cout << maxl(1.2, 2.4) << endl;
    cin.get();
    return 0;
}


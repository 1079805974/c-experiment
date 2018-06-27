#include <cstring>
#include <iostream>

using namespace std;

template <class T>
T imin(T x,T y){
     return x < y ? x : y ;
}

// char *min(char *a,char *b)
// {
//   return (strcmp(a,b)<0?a:b);
// }


int main(int argc, char const *argv[])
{
    string a = "sss";
    string b = "aaa";
    cout << imin(a, b) << endl;
    cout << imin(2, 4) << endl;
    return 0;
}

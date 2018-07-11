#include <bits/stdc++.h>

#define MB 1000000
#define GB 1000*MB

int main(int argc, char const *argv[])
{
    char* mem = (char*)malloc(20 * MB);
    char* cur = mem;
    //label:
    while(cur < mem + 2*GB){
        cur++;
        *cur = 'a';
    }
    cur = mem;
    std::cout << cur;
    //goto label;
    return 0;
}

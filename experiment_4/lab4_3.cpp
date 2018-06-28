#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    vector<int> vec;
    cin >> x;
    while (x != 0)
    {
        vec.push_back(x);
        cin >> x;
    }
    sort(vec.begin(), vec.end(), less<int>());
#ifdef A
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
#elif B
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
#elif C
    for_each(vec.begin(), vec.end(), [](int i){
        cout << i << " ";
    });
#endif
    cout << endl;
    cin.get();
    return 0;
}

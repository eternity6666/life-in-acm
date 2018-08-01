#include <iostream>
using namespace std;
template<typename T>
T sum(T *begin, T *end)
{
    T *p = begin;
    T ans = 0;
    for( p = begin; p != end; p++)
    {
        ans = ans + *p;
    }
    return ans;
}
int main()
{
    double a[] = {1.1, 2.2, 3.3, 4.4};
    int b[] = {1, 2, 3, 4};
    cout << sum(a, a + 4) << endl;
    cout << sum(b, b + 4) << endl;
    return 0;
}

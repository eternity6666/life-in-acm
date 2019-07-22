#include <iostream>
#include <iterator>
#include <time.h>
#include <vector>
#include <algorithm>
#include <functional>

using std::cout;
using std::vector;
using std::endl;
using std::sort;
using std::partition;
using std::less;
using std::bind2nd;
using std::ostream_iterator;
using std::copy;
using std::back_inserter;

int main()
{
    // Seed random number generator
    
    srand(time(NULL));

    vector <int> vecInt;

    // declaring it here once will compile under dodgy VC, and also
    // standards conforming compilers, VC included if you set a flag
    int i;

    cout << "Inserting values into vector\n";

    for(i = 0; i <= 20; i++)
    {
        vecInt.push_back(rand() % 200);
        cout << vecInt.at(i) << ", ";
    }

    cout << "\n\nIterating through vector and doubling values\n";

    std::vector<int>::iterator it;

    for(it = vecInt.begin(); it != vecInt.end(); it++)
    {
        *it *= 2;
        cout << *it << ", ";
    }

    cout << "\n\nPartition values under 200\n";

    std::vector<int>::iterator itBelow200 = partition(vecInt.begin(), vecInt.end(), bind2nd(less<int>(), 200));
    
    copy(vecInt.begin(), vecInt.end(), ostream_iterator<int>(cout, ", "));

    cout << "\n\nCopying values below 200 to new vector\n";

    vector<int> vecInt2;

    copy(vecInt.begin(), itBelow200, back_inserter(vecInt2));

    copy(vecInt2.begin(), vecInt2.end(), ostream_iterator<int>(cout, ", "));

    cout << "\n\nSorting the first vector and output the result\n";

    sort(vecInt.begin(), vecInt.end());

    copy(vecInt.begin(), vecInt.end(), ostream_iterator<int>(cout, ", "));
    
    cout << endl;

    return 0;
}

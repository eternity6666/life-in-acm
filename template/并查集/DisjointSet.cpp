#include <vector>
#include <iostream>
using namespace std;

struct DisjointSet 
{
    std::vector<int> father, rank;

    DisjointSet(int n) : father(n), rank(n) 
    {
        for(int i = 0; i < n; ++i) 
            father[i] = i;
    }

    int find(int x) 
    {
        return father[x] == x ? x : find(father[x]);
    }

    void merge(int x, int y)
    {
        int a = find(x);
        int b = find(y);
        if(rank[a] < rank[b])
            father[a] = b;
        else
        {
            father[b] = a;
            if(rank[b] == rank[a])
                ++rank[a];
        }
    }
};

int main()
{
    return 0;
}


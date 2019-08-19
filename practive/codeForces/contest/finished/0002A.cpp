#include <iostream>
#include <map>
using namespace std;

map<string, int> ma, mb;
string name[1005];
int n, score[1005];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie();
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> name[i] >> score[i];
        ma[name[i]] += score[i];
    }
    map<string, int>::iterator mit;
    int max = -100000000;
    for(mit = ma.begin(); mit != ma.end(); mit++)
        if(max < (*mit).second)
            max = (*mit).second;
    for(int i = 0; i < n; i++)
        if(ma[name[i]] == max)
        {
            mb[name[i]] += score[i];
            if(mb[name[i]] >= max)
            {
                cout << name[i] << endl;
                break;
            }
        }
    return 0;
}

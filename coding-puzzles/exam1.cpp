#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers,int target);
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
vector<int> number;
int tmp;
int target;
cin>>target;
while(cin>>tmp)
{
    number.push_back(tmp);
    // cout<<tmp;
}
vector<int> result=twoSum(number,target);
for(int i=0;i<result.size();i++)
{
    cout<<result[i]<<endl;
}
return 0;
}

vector<int> twoSum(vector<int> &numbers,int target)
{
    map<int,int> mapping;
    vector<int> result;
    for(int i=0;i<numbers.size();i++)
    {
        mapping[numbers[i]]=i;
    }
    for(int i=0;i<numbers.size();i++)
    {
        int searched = target-numbers[i];
        if(mapping.find(searched)!=mapping.end()&&i!=mapping[searched])
        {
            result.push_back(i+1);
            result.push_back(mapping[searched]+1);
            break;
        }
    }
    return result;
}
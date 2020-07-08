#include <iostream>
#include <stack>
using namespace std;

string s[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void print(int sum)
{
    if (sum == 0)
    {
        cout << s[0] << endl;
        return;
    }
    stack<int> st;
    while (sum)
    {
        int tmp = sum % 10;
        sum /= 10;
        st.push(tmp);
    }
    while(!st.empty())
    {
        int tmp = st.top();
        st.pop();
        cout << s[tmp];
        if(!st.empty())
            cout << " ";
        else cout << endl;
    }
}

int main()
{
    string n;
    cin >> n;
    int len = n.length();
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        int tmp = n[i] - '0';
        sum += tmp;
    }
    print(sum);
    return 0;
}
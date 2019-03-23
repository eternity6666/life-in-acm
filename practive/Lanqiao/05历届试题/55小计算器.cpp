#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;

int n;
string ans;
int k = 10;
string code, tmpCode;
map<char, int> ma;
map<int, char> mb;
 
long long changeTo10(string ans);
string change(long long num10);
string caculate(string code1, string way, string code2);

int main()
{
	freopen("./in.txt","r", stdin); 
	// freopen("./out.txt", "w", stdout);
	
	for(int i = 0; i < 26; i++)
	{
		ma['A' + i] = 10 + i;
		mb[i + 10] = 'A' + i;
	} 
	cin >> n;
	ans = "0";
	tmpCode = "ADD";
	while(n--)
	{
		// cout << ans << endl;
		cin >> code;
		// cout << 1 << endl;
		if(code == "CLEAR")
			ans = "0";
		else if(code == "ADD" || code == "SUB" || code == "MUL" || code == "DIV" || code == "MOD")
			tmpCode = code;
		else if(code == "EQUAL")
			cout << ans << endl; 
		else if(code == "CHANGE")
		{
			int tmp = changeTo10(ans);
			cin >> k;
			ans = change(tmp);
		}
		else
		{
			// cout << 2 << endl;
			string num;
			cin >> num;
			ans = caculate(ans, tmpCode, num);
		}	
	}
	return 0;
}

string caculate(string code1, string way, string code2)
{
	long long tmp1 = changeTo10(code1);
	long long tmp2 = changeTo10(code2);
	
	long long ans;
	if(way == "ADD")
		ans = tmp1 + tmp2;
	else if(way == "SUB")
		ans = tmp1 - tmp2;
	else if(way == "MUL")
		ans = tmp1 * tmp2;
	else if(way == "DIV")
		ans = tmp1 / tmp2;
	else
		ans = tmp1 % tmp2;
	// cout << tmp1 << " " << tmp2 << " " << ans << endl;
	return change(ans); 
}

long long changeTo10(string ans)
{
	long long tmpAns = 0;
	int len = ans.length();
	
	for(int i = 0; i < len; i++){
		tmpAns = tmpAns * k;
		if(ans[i] <= '9' && ans[i] >= '0')
			tmpAns = tmpAns + (ans[i] - '0');
		else
			tmpAns = tmpAns + ma[ans[i]];	
	}
	return tmpAns;
}

string change(long long num10)
{
	string tmpAns = "";
	
	long long tmp;
	while(num10 / k != 0){
		tmp = num10 % k;
		if(tmp < 10)
			tmpAns = tmpAns + (char)('0' + tmp);
		else
			tmpAns = tmpAns + mb[tmp]; 
		num10 /= k;
	}
	tmp = num10 % k;
	if(tmp < 10)
		tmpAns = tmpAns + (char)('0' + tmp);
	else
		tmpAns = tmpAns + mb[tmp]; 
	// cout << tmpAns << endl;
	
	string tmpAns2 = "";
	
	for(int i = tmpAns.length() - 1; i >= 0; i--)
		tmpAns2 = tmpAns2 + tmpAns[i];
	return tmpAns2;
}


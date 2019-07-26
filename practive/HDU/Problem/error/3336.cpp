/*
int kmp(string p, int pLen)
{
    int i = 0;
    int j = 0;
    int ans = 0;
    while(i < sLen && j < pLen)
    {
        if(j == -1 || s[i] == p[j])
        {
            if(j == pLen - 1 && s[i] == p[j])
            {
                ans++;
                j = -1;
            }
            i++;
            j++;
        }
        else
            j = pre[j];
    }
    // cout << p << " " << pLen << " " << ans << endl;
    return ans;
}
*/

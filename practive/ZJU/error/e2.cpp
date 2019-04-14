

/*
bool deal()
{
    for(int i = n; i >= 1; i--)
    {
        long long tmp = 0;
        for(int j = n; j >= i; j--)
            tmp = tmp + b[j] * (j / i);


        for(int j = 1; j <= n; j++)
            cout << " " << b[j];
        cout << ": " << tmp << ": " << a[i] << endl;

        if(tmp >= a[i])
        {
            long long tmp2 = a[i];
            // cout << tmp2 << endl;
            for(int j = i; j <= n; j++)
            {
                if(b[j] > 0)
                {
                    long long tmp3 = j / i;
                    if(tmp3 * b[j] > tmp2)
                    {
                        b[j] -= tmp2 / tmp3;
                        // b[j - tmp2 % tmp3 * i] += tmp2 % tmp3;
                        if(tmp2 % tmp3 != 0)
                            b[j] -= 1;
                        tmp2 = 0;
                    }
                    else
                    {
                        // b[j - tmp3 * i] += b[j];
                        tmp2 -= tmp3 * b[j];
                        b[j] = 0;
                    }
                }
                if(tmp2 == 0)
                    break;
            }
        }
        else
            return false;
    }
    return true;
}
*/

                        /*
                        cout << "tmp2=" << tmp2 << " tmp3=" << tmp3;
                        cout << " b[" << j - tmp3 * i << "]=" << b[j - tmp3 * i] << " tmp2/tmp3 = " << tmp2 / tmp3 << endl;
                        */
                        // b[j - tmp3 * i] += tmp2 / tmp3;
/*
if(b[j] * tmp3 > tmp2 * i)
{
    if(tmp2 / tmp3 > b[j])
    b[j - tmp3 * i] = b[j - tmp3 * i] + tmp2 / tmp3;
    b[j] -= tmp2 / tmp3;
    if(tmp2 % tmp3 != 0)
    {
        b[j - i * (tmp2 % tmp3)] += 1;
        b[j]--;
    }
}
if(b[j] * j > tmp2)
{
    b[j - i] += tmp2;
    b[j] -= tmp2;
    tmp2 = 0;
}
else
{
    b[j - i] += b[j];
    tmp2 -= b[j];
    b[j] = 0;
}
*/


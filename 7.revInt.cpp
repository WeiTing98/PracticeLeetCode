#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long og = x, ans = 0;
    while (og != 0)
    {
        ans = ans * 10 + og % 10;
        og /= 10;
    }
    if (ans > INT32_MAX || ans < INT32_MIN)
        ans = 0;
    return ans;
}
int main()
{
    int x;
    cin >> x;
    cout << reverse(x);
    return 0;
}

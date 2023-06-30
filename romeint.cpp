#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num)
{
    string ans = "";
    int thou = 0, hun = 0, ten = 0, dig = 0;
    thou = num / 1000;
    num %= 1000;
    hun = num / 100;
    num %= 100;
    ten = num / 10;
    num %= 10;
    dig = num;
    // thousand
    for (int i = 0; i < thou; i++)
        ans += "M";
    // hundred
    if (hun == 4)
    { // 400 = DM
        ans += "CD";
    }
    else if (hun > 4 && hun < 9)
    { // 400< hun <900
        ans += "D";
        for (int i = 6; i <= hun; i++)
            ans += "C";
    }
    else if (hun == 9)
    { // 900 = CM
        ans += "CM";
    }
    else
    { // < 400
        for (int i = 1; i <= hun; i++)
            ans += "C";
    }
    // ten
    if (ten == 4)
    { // 40 = DM
        ans += "XL";
    }
    else if (ten > 4 && ten < 9)
    { // 40 < ten <90
        ans += "L";
        for (int i = 6; i <= ten; i++)
            ans += "X";
    }
    else if (ten == 9)
    { // 90 = CM
        ans += "XC";
    }
    else
    { // < 40
        for (int i = 1; i <= ten; i++)
            ans += "X";
    }
    // digit
    if (dig == 4)
    { // 4
        ans += "IV";
    }
    else if (dig > 4 && dig < 9)
    { // 4 < dig < 9
        ans += "V";
        for (int i = 6; i <= dig; i++)
            ans += "I";
    }
    else if (dig == 9)
    { // 9
        ans += "IX";
    }
    else
    { // < 4
        for (int i = 1; i <= dig; i++)
            ans += "I";
    }

    return ans;
}
int main()
{
    int a = 400;
    cout << intToRoman(a);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// int lcs(string, string);
// bool isPalindrome(int x)
// {
//     string temp, temp2;
//     temp = to_string(x);
//     // do LCS
//     temp2 = temp;
//     reverse(temp2.begin(), temp2.end());
//     int num = lcs(temp, temp2);
//     if (num == temp.length())
//     {
//         return true;
//     }
//     else
//         return false;
// }
// int lcs(std::string str1, std::string str2)
// {
//     int len = str1.length() + 1;
//     vector<int> prev(len, 0), curr(len, 0);

//     for (int i = 1; i < len; i++)
//     {
//         for (int j = 1; j < len; j++)
//         {
//             if (str1[i - 1] == str2[j - 1])
//             {
//                 curr[j] = prev[j - 1] + 1;
//             }
//             else
//             {
//                 curr[j] = max(prev[j], curr[j - 1]);
//             }
//         }
//         prev = curr;
//     }
//     return prev[str1.length()];
// }
bool isPalindrome(int x){
        int reverseNum = 0, shift = 1 ,ognum = x;
        // reverse the num

        if(x < 0) return false;
        else{
            while(x > 0){
                reverseNum = reverseNum*10 + x % 10;
                x /= 10;
                // shift *= 10;
            }
        }
        return reverseNum == ognum;
    }

int main()
{
    int x;
    cin >> x;
    cout << isPalindrome(x);
    return 0;
}
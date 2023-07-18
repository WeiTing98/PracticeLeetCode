#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
    int max_a = 0;      
    int left = 0, right = height.size() - 1;
    while(left < right){
        int h = height[left] > height[right] ? height[right] : height[left];
        if((right - left) * h > max_a) max_a = (right - left) * h;
        if(height[left] > height[right])
            right--;
        else 
            left++;
    }
    return max_a;
}
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << endl;
    return 0;
}
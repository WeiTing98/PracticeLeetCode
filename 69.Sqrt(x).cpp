int mySqrt(int x) {
    int left = 0, right = x;
    long mid;
    if(x <= 1)
        return x;
    // use binary search
    while(left <= right){
        mid = (right + left) / 2;
        if(mid * mid <= x && (mid + 1) * (mid + 1) > x){
            return mid;
        }
        else if(mid * mid > x){
            right = mid - 1;
        }
        else if(mid * mid < x){
            left = mid + 1;
        }
    }        
    return mid;
}
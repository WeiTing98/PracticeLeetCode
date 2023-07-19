void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //把2填入1後排序即可
    if(m == 0)
        nums1 = nums2;
    else if(n != 0){
        for(int i = m; i < m+n ;i++){
            nums1[i] = nums2[i - m];
        }
    }
    sort(nums1.begin(),nums1.end());
}
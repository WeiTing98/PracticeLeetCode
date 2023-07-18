int removeElement(vector<int> &nums, int val)
{
    int k = 0, i = 0;
    while (i < nums.size())
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin() + i);
        }
        else
        {
            i++;
            k++;
        }
    }
    return k;
}
// the first approach : 
int sum(int *array, int n)
{
    int temp = 0, i = 0;
    if(i < n)
    {
        for(; i < n ; i++)
            temp+=array[i];
        return temp;
                
    }
    else
        return 0;
        
}
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *ans = malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    for(int i = 0 ; i < numsSize ; i++)
        ans[i]= nums[i] + sum(nums,i);
    return ans;
}
/* -------------------------------- Second Approach very fast ----------------------*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    for(int i = 1 ; i < numsSize ; i++)
        nums[i]+=nums[i-1];
    return nums;
}
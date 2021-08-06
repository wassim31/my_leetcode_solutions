/**
 * @param {number[]} nums
 * @return {number[]}
 */
 var getConcatenation = function(nums) {
    var ans = new Array(nums.length * 2);
    for(let i = 0, j = 0 ; i <= 2 * nums.length ; i++)
    {
        if(i > nums.length)
        {
            ans[j+ nums.length] = nums[j];
            j++;
        }
        else
            ans[i] = nums[i];
    }
    return ans;
};

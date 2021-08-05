public class array_permutation {
    public int[] buildArray(int[] nums) {
        int[] test = new int [nums.length];
        int temp;
        for(int i = 0 ; i < nums.length ; i++)
        {
           temp = nums[nums[i]];
            nums[i] = temp;
        }
        return nums;
}
}
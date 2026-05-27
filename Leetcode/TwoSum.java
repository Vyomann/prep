class TwoSum{
    public static void main(String[] args) {
        int[] nums = {3,5,7,6,9};
        int target = 11;
        System.out.println("Return indices of two numbers they add upto target");
            for(int i=0; i<nums.length; i++){
                for(int j=i+1; j<nums.length; j++){
                    if(nums[i] + nums[j] == target){
                        System.out.println("["+i+","+j+"]");
                    }
                }
            }
    }
}
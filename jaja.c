int numSize = 6;
int search(int* nums, int numsSize, int target){
    for(int i = 0; i < numsSize; i++){
        if(target == nums[i]){
            return numSize;
        } else {
            return -1;
        }
    }
}

compilador c
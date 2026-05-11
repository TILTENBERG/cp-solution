/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultsArray(int* nums, int numsSize, int k, int* returnSize) {
    int* ret;
    ret=(int *)malloc((numsSize-k+1)*sizeof(int));
    int err=1, max=0;
    for(int i=0; numsSize>i; i++) {
        if(nums[i]==max+1) {
            if(err<k)
                err=err+1;;
        } else {
            err=1;
        }
        max=nums[i];
        if(i+1>=k) {
            if(err>=k) {
                ret[i-k+1]=max;
            } else {
                ret[i-k+1]=-1;
            }
        }
        *returnSize=numsSize-k+1;
    }
    return ret;
}
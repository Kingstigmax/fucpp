#include <iostream>


void swap(int nums[], int i, int j){

    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}




void sort(int nums[], int size){
    
    for (int pass = 0; pass < size; pass++){

        for (int i = 1; i < size; i++){
            if (nums[i] < nums[i -1]){
                swap(nums, i, i-1);
            }
        }
    }
}


int main() {

    int nums[] {20,10,30};

    sort(nums, std::size(nums));
    
    for (int num: nums){
        std::cout << num << std::endl;
    }

    return 0;
}
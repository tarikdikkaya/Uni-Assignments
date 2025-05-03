#include <stdio.h>

void sortIntegers(int *nums, int len); // function prototype
int main() {
    int len, num, i = 0; // Variable declarations
    puts("Please enter how many numbers you want to sort: ");

    scanf("%d", &len); // Read the number of elements
    int nums[len]; // Declare an array with the given size

    // Read 'len' number of integers from the user
    while (i < len) {
        scanf("%d", &num);  // Read a number
        nums[i] = num;      // Store it in the array
        ++i;                // Move to the next index
    }

    printf("\n"); // Print a newline for formatting

    // Call the sorting function to sort the array
    sortIntegers(nums, len);

    // Print the sorted array, one number per line
    printf("Sorted numbers > ");
    for (int i = 0; i < len; i++) {
        printf("%d ", nums[i]);
    }
    return 0; // End of the program
}

void sortIntegers(int *nums, int len) {
    int i = 0, j = 0, temp = 0; // Variable declarations: loop counters and a temporary variable
    // Loop through each element in the array
    for (i = 0; i < len; i++) {
        // Compare the current element with all following elements
        for (j = i; j < len; j++) {
            // If the current element is greater than the compared element, swap them
            if (nums[i] > nums[j]) {
                temp = nums[i];      
                nums[i] = nums[j];   
                nums[j] = temp;      
            }
        }
    }
}

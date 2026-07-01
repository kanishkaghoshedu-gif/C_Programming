/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

  */

#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int nums[n];   // declare after input
    int pos[2];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target = 9;   // fixing the target value for testing
    //checking for the two numbers that add up to target
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                pos[0] = i;
                pos[1] = j;
            }
        }
    }

    printf("%d %d", pos[0], pos[1]);

    return 0;
}
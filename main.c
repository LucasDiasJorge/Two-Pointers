#include <stdio.h>

int main() {
    int arr[] = {2, 5, 7, 11, 15};
    int target_sum = 9;
    int n = sizeof(arr) / sizeof(int);

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        printf("left + right = %i\n",sum);

        if (sum == target_sum) {
            printf("Os numeros %d e %d somam %d\n", arr[left], arr[right], target_sum);
            break;
        } else if (sum < target_sum) {
            left++;
        } else {
            right--;
        }
    }

    return 0;
}

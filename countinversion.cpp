#include <iostream>
#include <vector>
using namespace std;

int merge(int l, int mid, int r, vector<int>& arr) {
    vector<int> nums(r - l + 1); // Temporary array to store merged elements
    int i = l, j = mid + 1;
    int idx = 0;
    int invCount = 0; // To store the number of inversions

    // Merge the two halves while counting inversions
    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            nums[idx++] = arr[i++];
        } else {
            nums[idx++] = arr[j++];
            // All elements from arr[i] to arr[mid] are greater than arr[j]
            invCount += (mid - i + 1); // Count inversions
        }
    }

    // Copy remaining elements from the left subarray, if any
    while (i <= mid) {
        nums[idx++] = arr[i++];
    }

    // Copy remaining elements from the right subarray, if any
    while (j <= r) {
        nums[idx++] = arr[j++];
    }

    // Copy the merged elements back into the original array
    for (int k = 0; k < nums.size(); k++) {
        arr[l + k] = nums[k];
    }

    return invCount; // Return the number of inversions found during the merge
}

int mergeSort(int l, int r, vector<int>& arr) {
    if (l >= r) return 0;

    int mid = l + (r - l) / 2;
    int invCount = 0;

    // Sort and count inversions in the left half
    invCount += mergeSort(l, mid, arr);

    // Sort and count inversions in the right half
    invCount += mergeSort(mid + 1, r, arr);

    // Merge the two halves and count cross-inversions
    invCount += merge(l, mid, r, arr);

    return invCount;
}

int main() {
    vector<int> arr = {9, 7, 8, 3, 6, 4, 5, 2, 1, 10};
    int n = arr.size();

    // Call merge sort and count inversions
    int inversions = mergeSort(0, n - 1, arr);

    // Output the sorted array
    for (int &num : arr) cout << num << " ";
    cout << endl;

    // Output the number of inversions
    cout << "Number of inversions: " << inversions << endl;

    return 0;
}

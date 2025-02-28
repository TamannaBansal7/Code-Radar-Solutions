#include<stdio.h>
int main(){
def bubble_sort(arr):
  n = len(arr)
  for i in range(n):
    # Flag to optimize, if no swaps occur, the list is already sorted
    swapped = False
    for j in range(0, n - i - 1):
      # Compare adjacent elements
      if arr[j] > arr[j + 1]:
        # Swap if they are in the wrong order
        arr[j], arr[j + 1] = arr[j + 1], arr[j]
        swapped = True
    # If no two elements were swapped in inner loop, the array is sorted
    if not swapped:
      break
  return arr

# Example usage
my_list = [64, 34, 25, 12, 22, 11, 90]
sorted_list = bubble_sort(my_list)
print("%d", sorted_list)}
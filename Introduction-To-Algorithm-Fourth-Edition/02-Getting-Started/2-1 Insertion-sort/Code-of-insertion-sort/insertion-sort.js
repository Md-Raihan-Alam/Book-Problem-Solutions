function insertionSort(arr, n) {
  for (let i = 1; i < n; i++) {
    let j = i - 1;
    let key = arr[i];
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = arr[j];
  }
}

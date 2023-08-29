x=int(input())
n = list()
for i in range(x):
    x = int(input())
    n.append(x)

def insertionSort(nums):
    i = 1
    while i < len(nums):
        j = i - 1
        key = nums[i]
        while j >= 0 and nums[j] > key:
            nums[j + 1] = nums[j]
            j -= 1
        nums[j + 1] = key
        i += 1

insertionSort(n)
print(n)

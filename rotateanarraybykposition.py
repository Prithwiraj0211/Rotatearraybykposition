def rotate_left(arr, k):
    n = len(arr)
    k = k % n
    return arr[k:] + arr[:k]

def rotate_right(arr, k):
    n = len(arr)
    k = k % n
    return arr[-k:] + arr[:-k]

arr = [1, 2, 3, 4, 5, 6, 7]
k = 2

print("Original:", arr)
print("Left Rotate by", k, ":", rotate_left(arr, k))
print("Right Rotate by", k, ":", rotate_right(arr, k))

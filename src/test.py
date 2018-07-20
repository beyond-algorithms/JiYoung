number_list = [2,4,6,8,10,12,14,16]

def binarySearch(array, value, low, high):
    if low > high:
	    return False
    mid = (low+high)/2

	if array[mid] > value:
		return binarySearch(array, value, low, mid-1)
	elif array[mid] < value:
		return binarySearch(array, value, mid+1, high)
	else:
        return mid


print(binarySearch(number_list, 11, 0, 8))
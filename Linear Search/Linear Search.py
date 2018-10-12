# Searching Algorithms
# Linear Search
# Programmed by Marufur Rahman

def linear_search(arr, x):
		for i in range(len(arr)):
			if arr[i] == x:
				return i
		return -1

arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
x = 4

result = linear_search(arr, x)

if result==-1:

	print ("The element is not found in the list")
else:
	print ("The element is in the list at the index %d" %(result))
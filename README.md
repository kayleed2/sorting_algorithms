# Big O and Sorting Algorithms


## The Project
This project is to implement various sorting algorithms and determine the time
complexities of their associated functions in the best, worst, and average
case scenarios.


## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone 
the following:

* At least four different sorting algorithms.
* What is the Big O notation, and how to evaluate the time complexity of an algorithm.
* How to select the best sorting algorithm for a given input.
* What is a stable sorting algorithm.


## Tasks

### Syntax of Answer Files
O(1)
O(n)
O(n!)
n square -> O(n^2)
log(n) -> O(log(n))
n * log(n) -> O(nlog(n))
n + k -> O(n+k)
…

### 0. Bubble sort

	Write a function that sorts an array of integers in ascending order based on
	the Bubble sort algorithm.

	Bubble sort is a simple sorting algorithm that repeatedly steps through an array
	of elements, compares adjacent elements, and swaps them if they are in the 
	incorrect order. The pass through the list is repeated until the list is sorted.

	This algorithm is not used in real world applications, and is instead primarily
	used as an education tool.

### 1. Insertion sort

	Write a function that sorts a doubly-linked list of integers in ascending order
	based on the Insertion sort algorithm.

	Insertion sort is a sorting algorithm that builds the final sorted list one
	element at a time. As Insertion sort iterates through the array or linked
	list, it consumes one input element on each pass, and builds a sorted 
	output list. Simply put, insertion sort removes one element of input data
	and determines where it belongs on the sorted list, and inserts it there.

	Insertion sort is inefficient on large data sets, but is very quick for small
	data sets. It is also adaptive, which means that it is effecient for data sets
	that are already substantially sorted.

### 2. Selection sort

	Write a function that sorts an array of integers in ascending order using the
	Selection sort algorithm.

	Selection sort is an in-place comparison sorting algorithm, which means it
	uses no auxiliary data structure. The algorithm devides the list into two
	parts: a sorted sublist of items built up from left to right at the front 
	of the list, and a sublist of the remaining unsorted items that occupy the
	rest of the list. The algorithm proceeds to find the smallest or largest 
	integer (depending on sort order) element in the unsorted sublist, then 
	swaps it with the leftmost unsorted element, and moving the sublist boundaries
	one element to the right

	There are a good number of sorting techniques that have better time complexity
	than Selection sort. However a couple advantages of Selection sort is that it 
	makes the minimum number of swaps possible. It is also more simple than other 
	algorithms, and has performance advantages on systems where auxiliary memory
	is limited.

### 3. Quick sort

	Write a function that sorts an array of integers in ascending order using the
	Quick sort algorithm.

	Quick sort is another in-place sorting algorithm, and was developed by British
	computer scientist Tony Hoare in 1959. It is still commonly used, and when 
	implemented well, it is faster than merge sort, and significantly faster than
	heap sort. Quick sort works by selecting a pivot element from the array and
	partitions the other elements into two sub-arrays based on whether they are 
	less than or greater than the pivot. The sub-arrays are then sorted recursively.

	Quick sort has gained widespread adoption, appearing in Unix as the default
	library sort subroutine. As well as lending its name to the C standard
	library function `qsort`.

---
## Creators
This project was contributed to, and maintained, by Kaylee Dao and
Adam Brummer.

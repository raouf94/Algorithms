# Algorithms
The word Algorithm means ” A  set of rules to be followed in calculations or other problem-solving operations ” Or ” A procedure for solving a mathematical problem in a finite number of steps that frequently by recursive operations “. 

An algorithm is a set of commands that must be followed for a computer to perform calculations or other problem-solving operations.
According to its formal definition, an algorithm is a finite set of instructions carried out in a specific order to perform a particular task. 
It is not the entire program or code; it is simple logic to a problem represented as an informal description in the form of a flowchart or pseudocode.
<img width="500" alt="image" src="https://user-images.githubusercontent.com/106764529/184726266-3956ccca-dd46-4e8b-854d-43f3f0bd2d40.png">

## _Advantages of Algorithms:_
> It is easy to understand.

> An algorithm is a step-wise representation of a solution to a given problem.

>In Algorithm the problem is broken down into smaller pieces or steps hence, it is easier for the programmer to convert it into an actual program.

## _Disadvantages of Algorithms:_
> Writing an algorithm takes a long time so it is time-consuming.

> Understanding complex logic through algorithms can be very difficult.

> Branching and Looping statements are difficult to show in Algorithms(imp).


## _How to Write an Algorithm?_
- [X] There are no well-defined standards for writing algorithms. It is, however, a problem that is resource-dependent. Algorithms are never written with a specific programming language in mind.
- [X] As you all know, basic code constructs such as loops like do, for, while, all programming languages share flow control such as if-else, and so on. An algorithm can be written using these common constructs.
- [X] Algorithms are typically written in a step-by-step fashion, but this is not always the case. Algorithm writing is a process that occurs after the problem domain has been well-defined. That is, you must be aware of the problem domain for which you are developing a solution.

We will see some algorithms


## Factoriel
The factorial of a number is the product of all the integers between 1 and itself. There are three ways to find a factorial of a given number, using the for loop, recursion, or creating a function over a range from 1 to X (number entered by the user). Remember that the stop value must be the number entered by the user + 1. [Link](https://drive.google.com/file/d/1FIxyNTt8TN5BEOF27lUlGJVIbd_Bdb9l/view?usp=sharing) to tutorial video.

## Fibonacci number
The Fibonacci sequence is a sequence of integers from 0, 1, 1, 2, 3, 5, 8….

The first two terms are 0 and 1. All other terms are obtained by adding the previous two terms. This means that the nth term is the sum of the (n-1)th and (n-2)th term. [Link](https://drive.google.com/file/d/1JSa8JsiDCwRyVtahaA4Jp3y8yR2vIQOl/view?usp=sharing) to tutorial video.

## Hamming
The Hamming code is a coding system with 3 bits of cross parity checks to detect and eliminate (or at least very greatly reduce) any error in the transmission of information remotely.
_Indication:_ if n is an element of the Hamming sequence, its decomposition into a product of prime factors is of the form 2α3β5γ with α, β and γ non-zero integers. 2, 3 and 5 are elements of the sequence. If n > 5 is a candidate in your search, then, n having to be of the form 2α3β5γ, at least one of the three numbers n/2, n/3 and n/5 must appear in the sequence already constructed. This necessary condition is clearly sufficient. [Link](https://drive.google.com/file/d/1Jv2CUzWC_GzKHjqq4D6Zo4paKzekJtGJ/view?usp=sharing) to tutorial video.

## Towers of Hanoi
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: 
- [X] Only one disk can be moved at a time.
- [X] Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
- [X] No disk may be placed on top of a smaller disk.
[Link](https://drive.google.com/file/d/1l6EKTd-h36FMU20EovhluCodfXx64k4_/view?usp=sharing) to tutorial video.

## Subset algorithm
The SUBSET-SUM problem involves determining whether or not a subset from a list of integers can sum to a target value. For example, consider the list of _nums = [1, 2, 3, 4]_. If the target = 7, there are two subsets that achieve this sum: _{3, 4} and {1, 2, 4}_. If target = 11, there are no solutions.
In general, determining if there are even any solutions to SUBSET-SUM is NP-hard: if there are _n_ integers in the _nums_ list, there exist _2^n — 1_ subsets that need to be checked (excluding the empty set). In this article, we are going to look at a more efficient solving method using dynamic programming (DP). However, unlike most tutorials, not only will we determine if there exists a solution, we will see how to discover all solutions. The algorithm works for negative and positive input values, as well as repeating non-unique integers in _nums_. [Link](https://drive.google.com/file/d/182kRsx7RnOIMRJUfx_JozCuMywMR2WRG/view?usp=sharing) to tutorial video.


## _Sorting Algorithm_
Sorting is the process of arranging the elements either in ascending (or) descending order.

## Quick sort algorithm
It is a divide and conquer algorithm.

-  Step 1 − Pick an element from an array, call it as pivot element.
-  Step 2 − Divide an unsorted array element into two arrays.
-  Step 3 − If the value less than pivot element come under first sub array, the remaining elements with value greater than pivot come in second sub array.

[Link](https://drive.google.com/file/d/1gJ9ReohbxIHt7a2rQi-5cKbJU1v-SIt-/view?usp=sharing) to tutorial video.

## Merge sort algorithm
Merge Sort is one of the most popular sorting algorithms that is based on the principle of Divide and Conquer Algorithm.

Here, a problem is divided into multiple sub-problems. Each sub-problem is solved individually. Finally, sub-problems are combined to form the final solution.
Using the Divide and Conquer technique, we divide a problem into subproblems. When the solution to each subproblem is ready, we 'combine' the results from the subproblems to solve the main problem. 

[Link](https://drive.google.com/file/d/1s-f75h__FONqEpxlOGT9qFWoqJnTxr__/view?usp=sharing) to tutorial video.

## Tim sort algorithm
The timsort is also a comparison-based sorting technique but it is different from other commonly used sorting methods.
Timsort can be defined as a **hybrid sorting technique** as it combines both **insertion sort an merge sort** to sort a set of elements.

The array is divided into a number of blocks which is known as the run. Now, this run will be sorted using the insertion sort technique. After sorting each run, the run will now be marged using the **'merge sort'** technique to get the sorted array. It is not an **in-place sorting** algorithm as for merging it requires extra memory space. As it combines two different sorting techniques together the performance is better than bubble or selection sort. 

[Link](https://drive.google.com/file/d/1N3W-8g5NlYZZLyh26BK8ZEPkvexp6nz3/view?usp=sharing) to tutorial video.

## Heap sort algorithm
The easiest way to sort using binary trees is quicksort. In most cases, quicksort requires O(nlogn) computation time, but if you are unlucky (the sorted value is included in the input), it will take O(n^2) computation time ). Heapsort fills this gap.

First, it starts by storing all the values and creating a heap. If condition (2) is not satisfied during creation, the vertex and the parent vertex are swapped and the heap is fixed. The computation time at this time is O(nlogn) at most in an n-vertex binary tree. Here is the heap sorting method.
1. If you can store all values and create a heap, the heap has the maximum value stored at the root, so save that value at the very end of the sort result.
2. Since the root value is removed, an alternate value must be stored in that root, but instead the deepest and rightmost value of the binary tree is stored and a temporary value is stored. Make a state.
3. In this tentative state, condition (2) is not satisfied, so again the parent and child values are swapped.

[Link](https://drive.google.com/file/d/1MooFlo4HRzbhzJOpLWeru3sUP2L6QfpR/view?usp=sharing) to tutorial video.

## Bubble sort algorithm
In this method, smaller values gradually move up, like an air bubble in water, and larger values move down the chart.
If there are N elements to sort, the bubble sort does N-1 to traverse the array. 

In each loop, successive pairs of elements are compared and swapped if necessary. 
If the pair has the same value or is in ascending order, we keep it.

[Link](https://drive.google.com/file/d/1T6bzq8aaGhV6YWhJy-mlqTFacFSH27Bu/view?usp=sharing) to tutorial video.

## Insertion sort algorithm
We can create a C program to sort the elements of an array using insertion sort. The insertion sort algorithm is only useful for small items because it takes longer to sort a large number of items.

[Link](https://drive.google.com/file/d/1aID1z7SeVFsAG8hDjx07uTCNS1iOMWw_/view?usp=sharing) to tutorial video.

## Selection sort algorithm
In the selection sort algorithm, we look for the smallest element and put it in the right place. We swap the current element with the next smallest element.

[Link](https://drive.google.com/file/d/1CVKEFjia1338NNFKygnAXldAabPU5uIu/view?usp=sharing) to tutorial video.

## Tree sort algorithm
The properties of binary search tree is completely make use of tree sort algorithm. The tree sort algorithm first builds a binary search tree using the elements in an array which is to be sorted and then does an in-order traversal so that the numbers are retrived in a sorted order.

-  ***Advantages-Tree Sort***
    - The main advantage of tree sort algorithm is that we can make changes very easily as in a linked list.
    - Sorting in Tree sort algorithm is as fast as quick sort algorithm.

- ***Disadvantages-Tree Sort***
   - The worst case occur when the elements in an array is already sorted.
   - In worst case, the running time of tree sort algorithm is 0 (n2).

[Link](https://drive.google.com/file/d/19-ouzjJeLqGLiiaDHdQ-VuXSXlb-pGnW/view?usp=sharing) to tutorial video.

## Shell sort algorithm
The Shell sort in C is used to sorts the array by sort the pair of elements far apart from each other, then successively reduces the gap between the elements to be sorted. The Shell sort is the version of the insertion sort algorithm. In insertion sort, the element moves one position ahead to insert an element at its correct position, whereas the shell sort exchanges the far elements. If an element has to move far ahead many moves are required. The shell sort starts by sorting the pair of elements that are far apart from each other and successively interval between them. It can transfer some out-of-place elements into the correct place faster than a simple nearest-neighbor exchange if it starts with far apart elements. Shell sort is not a stable sorting algorithm since it ignores the items that fall in between the intervals. The worst-case running time complexity of the shell sort is O(n2) and the best-case running time complexity is O(nlog(n)).

[Link](https://drive.google.com/file/d/1JxfHeCPk3KtJVxDHN-wr67BvIdWXawB1/view?usp=sharing) to tutorial video.

## Bucket sort algorithm
Sorting by bucket or sort by compartment also called Bucket Sort in English is a sorting algorithm in which the elements of the input array are distributed in compartments. Following the distribution of the elements, the buckets are sorted individually by another sorting algorithm or by a recursive call to itself. After all buckets are sorted, the elements in those buckets are combined to form a sorted array.


-  ***Advantages-Bucket Sort***
    - Bucket sorting reduces the number of comparisons.
    - It is asymptotically fast due to the uniform distribution of elements.
    
-  ***Limits-Bucket Sort***
    - It may or may not be a stable sorting algorithm.
    - The cost of the bucket sort algorithm increases as the size of the array becomes large.
    - It is not an in-place sorting algorithm, because extra space is needed to sort the buckets.

The complexity of the best-case and average-case bucket sort algorithm is O(n + k); and in the worst case, the complexity of the bucket sort algorithm is O(n^2), where n is the number of elements in the array.   Bucket sort is commonly used with floating point values and when the input is evenly distributed over a range.

[Link](https://drive.google.com/file/d/1cUD7CuasNShygn4wVdvbK3BTdYQZvzHr/view?usp=sharing) to tutorial video.

## Radix sort algorithm
The Radix sort is a non-comparative sorting algorithm. The Radix sort algorithm is the most preferred algorithm for the unsorted list. 

It sorts the elements by initially grouping the individual digits of the same place value. The idea of Radix Sort is to do digit by digit sort starting from *least significant digit(LSD)* to the *most significant digit(MSD)*, according to their increasing/decreasing order. Radix sort is a small method that is used several times when alphabetizing an oversized list of names. Specifically, the list of names is initially sorted according to the first letter of every name, that is, the names are organized in twenty-six categories.

[Link](https://drive.google.com/file/d/1zH_ZDQMetJqek2nxYunx_nSlxTK28k7Z/view?usp=sharing) to tutorial video.

## Counting sort algorithm
Counting sort is an integer-based sorting algorithm for sorting an array whose keys fall between a specific range. It counts the total number of items with each distinct key value, then uses these counts to determine the positions of each key value in the output.

Unlike other sorting algorithms like *Insertion Sort, Selection Sort, Merge Sort, Quick Sort, etc.*, counting sort is not a comparison sort. It uses key values as indices into an array.

The time complexity of counting sort is O(n + k), where n is the input size and k is the input range. Sorting by counting can be very space-efficient when the range of keys k is significantly less than the total number of elements n, but when the variation of keys is significantly greater than the total number of elements k >> n, sorting by counting consumes a lot of space.

[Link](https://drive.google.com/file/d/1ITGGoZ-dBXeBT7ldm4JPV-GRGxhFFAYK/view?usp=sharing) to tutorial video.

## Cube sort algorithm
Given an array arr[] of N integers, the task is to sort the array according to the cubes of each element. The idea is to use the Comparator function with an inbuilt sort function() to sort the array according to the cubes of its elements. 

[Link](https://drive.google.com/file/d/1mkDKQtJf8S-LFi0meBlq_GNmuQyrIw37/view?usp=sharing) to tutorial.




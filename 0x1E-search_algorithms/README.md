You will be asked to write files containing big O notations. Please use this format:

    O(1)
    O(n)
    O(n!)
    n*m -> O(nm)
    n square -> O(n^2)
    sqrt n -> O(sqrt(n))
    log(n) -> O(log(n))
    n * log(n) -> O(nlog(n))
    …

|| MANDATORY TASKS ||
Task 0;
Write a function that searches for a value in an array of integers using the Linear search algorithm

    Prototype : int linear_search(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    Your function must return the first index where value is located
    If value is not present in array or if array is NULL, your function must return -1
    Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

Task 1;
Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

    Prototype : int binary_search(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    Your function must return the index where value is located
    You can assume that array will be sorted in ascending order
    You can assume that value won’t appear more than once in array
    If value is not present in array or if array is NULL, your function must return -1
    You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

Task 2;
What is the time complexity (worst case) of a linear search in an array of size n?

Task 3;
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

Task 4;
What is the time complexity (worst case) of a binary search in an array of size n?

Task 5;
What is the space complexity (worst case) of a binary search in an array of size n?

Task 6;
What is the space complexity of this function / algorithm?

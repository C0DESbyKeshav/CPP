/*
What is STL ?
--> # STL stands for Standard Template Library.
    # STL is used in Competitive Programming.
    # STL is the library of Generic Classes and Functions.

Why use STL ?
--> # Reuse of Well Tested Components.
    # Time Saving.
    # It's a good idea not to re-invent the wheel.

Components of STL:
--> 1. Containers -> an object that stores data by using template classes.
    2. Algorithms -> set of instructions by using template functions (searching, sorting, merging, etc).
    3. Iterators -> an object that points to an element in a container. Handled just like pointers. Connects algorithms with containers.

I. Containers:
    1. Sequence Containers -> stores data in linear fashion (vector, list, dequeue(double ended queue), etc).
        a. Vector -> Random Access is fast & Insertion/Deletion is slow. Insertion is fast at the end as compared to an array.
        b. Linked List -> Random Access is slow. Insertion in middle is fast as compared to an array. Insertion/Deletion at the end is fast.

    2. Associate Containers -> direct access (map, multimap, set, multiset, etc).
        All operations are fast except random access.

    3. Derived Containers -> real world modelling (stack(LIFO), queue(FIFO), priority queue etc).
        Depends on the type of container.
*/
# c++ stl

## 1 .algorithm

## 2 .containers

### Sequence Containers:

array

vector: Dynamic array that can grow or shrink in size.
deque: Double-ended queue, supports fast insertion/removal at both ends.
list: Doubly-linked list, supports fast insertion/removal anywhere in the list.
forward_list: Singly-linked list, similar to list but more memory-efficient.

### Associative Containers:

set: Collection of unique, sorted elements.
multiset: Collection of sorted elements that can have duplicates.
map: Collection of key-value pairs, keys are unique and sorted.
multimap: Collection of key-value pairs, keys can have duplicates and are sorted.

### Unordered Containers (C++11 and later):

unordered_set: Collection of unique elements, unordered for fast access.
unordered_multiset: Collection of elements, unordered, and can have duplicates.
unordered_map: Collection of key-value pairs, unordered for fast access.
unordered_multimap: Collection of key-value pairs, unordered, and keys can have duplicates.

### Container Adapters:

stack: LIFO (Last-In-First-Out) structure, uses a container as underlying implementation (default is deque).
queue: FIFO (First-In-First-Out) structure, uses a container as underlying implementation (default is deque).
priority_queue: Queue where elements are in partially ordered fashion (largest/smallest element is at the front).

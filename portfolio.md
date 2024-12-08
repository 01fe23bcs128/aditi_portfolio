# 1. What are the kinds of problems we see in nature?
Nature shows many examples of problem-solving:

Iteration: Tides rise and fall in a regular, repeated pattern.
Recursion: A cauliflower looks the same at every level, from stem to tip.
Backtracking: Solving a maze by going back when you hit a dead end.
These ideas help us solve similar problems in algorithms.

# 2. What is space and time efficiency? Why are they important?
Time efficiency: How fast an algorithm works.
Space efficiency: How much extra memory it needs.
If an algorithm is too slow or uses too much memory, it won’t work well for large problems.

Types of growth in algorithms:

Constant time (O(1)): Always the same speed.
Logarithmic time (O(log n)): Gets slower, but not by much.
Linear time (O(n)): Slows down as input gets bigger.
Linearithmic time (O(n log n)): Slower than linear, but not too bad.
Quadratic time (O(n²)): Much slower as input grows.
Cubic time (O(n³)): Slower than quadratic.
Exponential (O(2ⁿ)) and Factorial time (O(n!)): Extremely slow for large inputs.

# 3. What are the takeaways from different design principles?
Key ideas to solve problems:

Divide and conquer: Break a problem into smaller pieces, solve them, and combine the results.
Dynamic programming: Save answers to smaller problems so you don’t repeat work.
Greedy algorithms: Always choose the best option at each step.
Backtracking: Test all possibilities and undo bad choices.
These ideas make algorithms faster and easier to understand.

# 4. How do tree data structures solve problems?
Trees are used to organize data in a hierarchy:

Binary Search Tree (BST): Good for searching sorted data but can become unbalanced.
AVL Tree: A balanced BST that works efficiently.
2-3 Tree: Easier to use for changing data.
Red-Black Tree: A balanced tree with fewer changes needed.
Heap: Used to find the largest or smallest value quickly.
Trie: Used to search words based on their prefixes.

# 5. Why do we need array query algorithms?
Array query algorithms make it faster to answer questions about an array, like finding the sum or maximum in a range.

Examples:

Prefix sums: Quickly calculate sums over any range.
Segment trees and Fenwick trees: Update and query data fast.
These are useful in games, stock markets, and databases.

# 6. What is the difference between trees and graphs?
Tree: A strict hierarchy with no loops (like a family tree).
Graph: A collection of connected nodes that can form loops (like a map of roads).
Traversals:

Trees: Preorder, Inorder, Postorder (for hierarchical data).
Graphs: DFS and BFS (for exploring networks or maps).
Uses:

Trees are used for organizing files and decision-making.
Graphs are used in social networks and routing systems.
# 7. What about sorting and searching algorithms?
Sorting: Organizes data:

Simple ones (Bubble Sort) are for small data.
Fast ones (Quick Sort, Merge Sort) work for big data.
Searching: Finds data:

Linear Search: Check each item, slower.
Binary Search: Look in sorted data, faster.
Real-life examples: Sorting helps rank search results, and searching is used in maps or finding contacts.

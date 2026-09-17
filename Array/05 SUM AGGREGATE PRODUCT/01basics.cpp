// // 📘 Chapter 2: Arrays
// // 🔹 2.9 — Sum, Product and Aggregates
// // 🟢 Topic 1: Sum of All Elements

// // We’ll follow your learning style:

// // Theory → Example → Dry Run → Conceptual Question → Your Code → Debugging → Complexity

// // Ready? 🚀

// // ok  
// // 📘 Chapter 2: Arrays
// // 🔹 2.9.1 — Sum of All Elements

// // Welcome back, Mandeep! 🎓 Let's start with the first topic.

// // 📍 Progress Tracker

// // Completed earlier: Array basics, traversal, linear search, binary search and other previously practiced topics.

// // Learning now: Sum of all elements.

// // Next: Product of elements.

// // 1. 📘 Theory — What is the sum of all elements?

// // The sum of all elements means adding every value present in an array.

// // For example:

// // int arr[5] = {10, 20, 30, 40, 50};

// // We need to calculate:

// // 10+20+30+40+50=150

// // Answer: 150

// // 🎯 Why do we need this?

// // Suppose you have marks of 5 students:

// // {80, 70, 90, 60, 100}

// // To calculate the total marks, we add all the elements.

// // This same logic is used in:

// // Total marks of students

// // Total sales

// // Total expenses

// // Sum of numbers in an array

// // 2. 🧠 The main logic

// // We need a variable called sum.

// // Initially, sum should be 0.

// // Why?

// // Because 0 is the starting value for addition. It does not change the result.

// // Then we visit every element and add it to sum.

// // Example
// // int sum = 0;






// 1. 📘 Theory — What is Average?

// Average means the total sum of all elements divided by the number of elements.

// Formula
// Average=
// Number of elements
// Sum of all elements
// 	​

// Example

// Array:

// int arr[5] = {10, 20, 30, 40, 50};

// Sum:

// 10+20+30+40+50=150

// Number of elements = 5

// Average=
// 5
// 150
// 	​

// =30

// Answer: 30


// 1. 📘 Theory — What are even elements?

// An even number is a number that is completely divisible by 2.

// Examples: 2, 4, 6, 8, 10, 12

// An odd number is not completely divisible by 2.

// Examples: 1, 3, 5, 7, 9

// 🔍 How do we check even numbers in C++?

// We use the modulus operator %.

// number % 2 == 0


// 2. 🧠 Logic of the problem

// Suppose:

// int arr[6] = {10, 15, 20, 7, 8, 11};

// We need to:

// Create a variable sum = 0.

// Traverse every array element.

// Check whether the current element is even.

// If even, add it to sum.

// Print the final sum.


// 🟢 2.9.6 Sum of Positive and Negative Elements

// An integer can be:

// Positive: arr[i] > 0

// Negative: arr[i] < 0

// Zero: arr[i] == 0
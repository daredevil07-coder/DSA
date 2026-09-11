// Data Structure vs Algorithm ✅
// Why complexity analysis is needed ✅
// Time complexity ✅
// Space complexity ✅
// Time-space trade-off ✅
// Constant growth O(1) ✅
// Logarithmic growth O(log n) ✅
// Linear growth O(n) ✅
// Quadratic growth O(n²) ✅
// Big-O concept ✅
// Omega concept ✅
// Theta concept ✅
// Best / average / worst case ✅










// What is the difference between a Data Structure and an Algorithm?

// A data structure is not specifically about filtering data. It is a way of organizing and storing data so that we can use it efficiently.

// An algorithm is a step-by-step procedure used to solve a problem or perform a task

// Data Structure = How the data is organized
// Algorithm = What steps we take to solve the problem using that data


// Q2 — Complexity

// as the amount of data increases, the amount of work can increase too.


// 📘 Chapter 1: Introduction
// 🔹 Subchapter: Complexity Analysis



// we use complexity to know which algorith might take longer work and time 


// 🔹 Subchapter 1.3 — Time Complexity

// How the number of operations performed by an algorithm grows as the input size grows.

// growth using a notation called Big-O.



// 🌱 Pattern 1 — Constant

// Imagine:

// 1 operation

// Whether there are:

// 10 elements
// 100 elements
// 10,000 elements
// 1,000,000 elements

// the algorithm still performs roughly the same amount of work.

// That's called constant work.


// 🌱 Pattern 2 — Linear

// Imagine:

// 10 elements  → 10 operations
// 100 elements → 100 operations
// 1000 elements → 1000 operations

// Work grows along with the input.

// That's called linear growth

// 🌱 Pattern 3 — Quadratic

// Imagine:

// 10 elements   → around 100 operations
// 100 elements  → around 10,000 operations
// 1000 elements → around 1,000,000 operations

// Here the work grows much faster.

// That's called quadratic growth.



// 🔹 Subchapter 1.3 — Time Complexity
// 🔸 Growth Pattern 2: Linear

// if we have 5 elements → 5 checks
// 100 elements → 100 checks
// 1,000 elements → 1,000 checks
// 10,000 elements → 10,000 checks


// As the input becomes n times larger, the work also becomes approximately n times larger.



// 🔹 Subchapter 1.3 — Time Complexity
// 🔸 Growth Pattern 3: Quadratic

// tAKE  an example A → compare with A B C D
// B → compare with A B C D
// C → compare with A B C D
// D → compare with A B C D


// 4 × 4 = 16 operations

// So the work grows much faster than the number of students.



// | Growth        | Basic idea                                      |
// | ------------- | ----------------------------------------------- |
// | **Constant**  | Input increases, work stays about the same      |
// | **Linear**    | Work increases roughly with input               |
// | **Quadratic** | Work increases roughly with the square of input |



// 📘 Chapter 1: Introduction
// 🔹 Subchapter 1.4 — Big-O Notation


// Big-O is simply a way of describing how an algorithm's work grows when the input becomes larger.

// Constant  → O(1)
// Linear    → O(n)
// Quadratic → O(n²)

// 🧠 What does n mean?

// n simply represents the size of the input.


// 🔹 Subchapter 1.4 — Big-O Notation
// 🔸 Understanding O(1), O(n), O(n²)


// Big-O focuses on growth, not the exact number of operations.

// 🔸 Comparing Growth Rates

// O(1) < O(log n) < O(n) < O(n²)




// 📘 Chapter 1 — Introduction
// 🔹 Subchapter 1.5 — Logarithmic Complexity

// repeatedly cuts the remaining search area approximately in half.

// O(log n) 📉


// When the input becomes much larger, the number of steps 
// increases only a little because we repeatedly reduce the problem.

// n = 8        → 3 steps
// n = 16       → 4 steps
// n = 32       → 5 steps
// n = 64       → 6 steps

// Every time the input doubles, the number of steps increases by only 1.

// That's why O(log n) is much more efficient than O(n) for very large inputs.


// A common real-world example is Binary Search. 🔍

// You have to remember one important condition, though:

// Binary Search works by repeatedly cutting the search space in half, so the
//  data must have the required ordering condition (typically sorted).

// O(1) is actually even more efficient than O(log n), because its work stays constant regardless of input size.

// O(1) → O(log n) → O(n) → O(n²)
//   🟢       🟢        🟡        🔴
//  faster                         slower



// 📘 Chapter 1 — Introduction
// 🔹 Subchapter 1.6 — Space Complexity

// Space complexity is about how much extra memory an algorithm needs as the input size grows.


// ⏱️ Time Complexity → How much work?
// 💾 Space Complexity → How much extra memory?

// Approach A: Reverse it inside the same array using a few variables.

// Approach B: Create a second array and put the reversed elements there.

// Both may produce the correct answer.

// But:

// A uses less extra memory
// B uses more extra memory




// 🔹 Subchapter 1.7 — Time-Space Trade-off ⚖️



// faster by using more memory, or
// use less memory but perform more work.

// Approach A
// → More computation
// → Less extra memory

// Approach B
// → Less computation
// → More extra memory

// this is calleed time space trade off

// We can sometimes use more memory to reduce the amount of work. 🧠





// 📘 Chapter 1 — Introduction
// 🔹 Subchapter 1.8 — Asymptotic Notations


// Now we move to the three notations in your syllabus:

// Big-O — O
// Omega — Ω
// Theta — Θ



// 🟢 Best Case

// The minimum work the algorithm may need.

// 🔴 Worst Case

// The maximum work the algorithm may need.

// 🟡 Average Case

// The expected/typical amount of work across inputs, when that analysis is meaningful



// Think of them as describing bounds on an algorithm's growth:


// 🔴 Big-O — O

// Think:

// "The algorithm will not grow worse than this order."

// It is commonly used to describe the upper/worst-case growth bound.

// 🟢 Omega — Ω

// Think:

// "The algorithm will require at least this much growth."

// It describes a lower bound.

// 🔵 Theta — Θ

// Think:

// "The algorithm grows at this exact order."

// It describes a tight bound — both upper and lower bounds match



// | Notation | Think of it as        |
// | -------- | --------------------- |
// | **`O`**  | Upper bound ⬆️        |
// | **`Ω`**  | Lower bound ⬇️        |No matter what, the algorithm needs at least this much work.
// | **`Θ`**  | Tight/exact growth ↔️ |




// And for Big-O, constant multipliers are ignored:

// O(2n) → O(n)




// 📘 Chapter 1 — Introduction
// 🔹 Subchapter 1.9 — Complexity Analysis from Code


// for i = 0 to n-1
//     print(i)

// for j = 0 to n-1
//     print(j)

    // it time complexity is O(n) + O(n) =2n but 
    // we romve constant and think it like n only so O(n)


// for i = 0 to n-1
//     print(i)

// for j = 0 to n-1
//     for k = 0 to n-1
//         print(j, k)


//     First loop: O(?)       
// Nested loops: O(?)
// Overall: O(?)

// First loop       → O(n)   ✅
// Nested loops     → O(n²)  ✅
// Overall          → O(n²)  ✅


// 📘 Chapter 1 — Introduction
// 🔹 Subchapter 1.9 — Complexity Analysis
// 🔸 Removing Constants and Smaller Terms


// Rule 1️⃣ — Ignore constant multipliers

// Rule 2️⃣ — Keep the dominant term



// 📘 Chapter 1 — Introduction
// 🔹 Subchapter 1.9 — Complexity Analysis
// 🔸 Complexity of Common Loop Patterns

// 🔸 Logarithmic Loop


// for i = 0 to n-1
//     print(i)

// i = 1
// while i < n
//     i = i * 2

// //     1 → O(n)      ✅
// // 2 → O(log n)  ✅
// // 3 → O(n)      ✅



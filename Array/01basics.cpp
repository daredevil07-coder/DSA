// 📘 Chapter 2 — Arrays
// 🔹 Subchapter 2.1 — What is an Array?

// n array is a data structure used to store multiple values in an organized sequence

// [10, 20, 30, 40, 50]

// Value:    10   20   30   40   50
// Index:     0    1    2    3    4



// 🔹 Subchapter 2.2 — Array Traversal

// Going through the elements of an array, usually one by one.

// Time Complexity = O(n) ⏱️



// 🧠 Traversal has different purposes

// When traversing an array, you might want to:

// 🔍 Search for a particular value
// ➕ Calculate the sum
// 🏆 Find the maximum/minimum
// 🔢 Count elements satisfying a condition
// 🔄 Modify every element
// 📊 Compare elements
// etc.

// The basic traversal pattern is the same,
//  but the problem you're solving changes



// 🔹 Subchapter 2.3 — Access vs Traversal vs searching


// ACCESS
// "I know WHERE"
//       ↓
// Give me that value 👆

// TRAVERSAL
// "I want to visit EVERYTHING"
//       ↓
// Go through the whole array 🚶

// SEARCH
// "I know WHAT I want"
//       ↓
// Find where it is 🔍


// 📘 Chapter 2 — Arrays
// 🔹 Subchapter 2.4 — Array Operations & Their Differences


// 👆 1. Access

// Goal: Get an element when you already know its index.

// [10, 20, 30, 40, 50]
//           ↑
//        index 2

// arr[2] → 30

// Array changes? ❌ No
// Need to move elements? ❌ No
// Typical time: O(1)


// 🚶 2. Traversal

// Goal: Visit elements one after another.

// 10 → 20 → 30 → 40 → 50
// Array changes? ❌ Usually no
// Visit one or all? Usually all
// Time: O(n)

// 🔍 3. Searching

// Goal: Find a particular value or its position.

// [10, 20, 30, 40, 50]
//               ↑
//             find 40

// With linear search:

// 10 ❌ → 20 ❌ → 30 ❌ → 40 ✅
// Array changes? ❌ No
// Do we necessarily visit everything? ❌ No
// Worst case: O(n)


// ✏️ 4. Updating

// Goal: Change an existing value.

// Before: [10, 20, 30, 40]
//                      ↓
// After:  [10, 20, 30, 100]

// If you know the index:

// arr[3] = 100
// Array size changes? ❌ No
// Existing value changes? ✅
// Typical time: O(1)

// ➕ 5. Insertion

// Goal: Add a new element.

// Example:

// Before:
// [10, 20, 30, 40]

// Insert 25:

// After:
// [10, 20, 25, 30, 40]

// ⚠️ Here's the important difference from updating:

// Updating replaces a value.

// Insertion increases the number of elements and may require shifting other elements.

// We'll study insertion separately in detail.



// ❌ 6. Deletion

// Goal: Remove an existing element.

// Before:
// [10, 20, 30, 40]

// Delete 20:

// After:
// [10, 30, 40]

// The array becomes smaller, and 
// elements may need to shift to fill the empty position




// | Operation    | Main purpose | Array size changes? |
// | ------------ | ------------ | ------------------- |
// | 👆 Access    | Get value    | ❌                   |
// | 🚶 Traversal | Visit values | ❌                   |
// | 🔍 Searching | Find value   | ❌                   |
// | ✏️ Updating  | Change value | ❌                   |
// | ➕ Insertion  | Add value    | ✅ Increases         |
// | ❌ Deletion   | Remove value | ✅ Decreases         |


// 🧠 Why is this important?

// Because this shifting determines the time complexity of insertion.

// If you insert at the beginning, many elements may need to move.

// If you insert in the middle, some elements may need to move.

// If you insert at the end, there may be little or no shifting.

// That's why we cannot simply say "insertion = O(n)" without 
// understanding where the insertion happens.


// Beginning → many elements may shift → O(n)
// Middle    → some elements may shift  → O(n)
// End       → no shifting             → O(1)*


// So deletion is basically the opposite movement of insertion:

// ➕ Insertion → elements may shift RIGHT ➡️
// ❌ Deletion  → elements may shift LEFT  ⬅️


// | Operation   | Beginning | Middle |     End |
// | ----------- | --------: | -----: | ------: |
// | ➕ Insertion |    `O(n)` | `O(n)` | `O(1)`* |
// | ❌ Deletion  |    `O(n)` | `O(n)` |  `O(1)` |




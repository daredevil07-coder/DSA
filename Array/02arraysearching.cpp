// 📘 Chapter 2 — Arrays
// 🔹 2.5 Array Searching 🔍


// ✅ How Linear Search works
// ✅ Searching unsorted arrays
// ✅ Best case
// ✅ Worst case
// ✅ Finding index
// ✅ First occurrence
// ✅ Last occurrence
// ✅ Duplicate values
// ✅ Count occurrences
// ✅ Find all positions
// ✅ Element not found
// ✅ Existence check
// ✅ O(n) reasoning

// [10, 25, 7, 40, 15]

// this is an array and we want to find 40 but we dont 
// know where it is here comes searching.?

// 🧠 Core idea

// Check elements one by one until
//  the target is found or there are no more elements



// 🟢 Best Case: Target is at the beginning → very few checks.

// 🟡 Average Case: Target is somewhere in the middle → several checks.

// 🔴 Worst Case: Target is at the end or doesn't exist → potentially 
// check every element




// 🔹 2.5 — Linear Search
// Part 2: What if the element is NOT found?

// [10, 20, 30, 40, 50]

// this ia an array and we want to search for 60

// then we cANT use 0 so we can use -1 




// 🔹 2.5 — Linear Search
// Part 3: Duplicate Elements





// [10, 20, 30, 20, 40, 20]




// Index:  0   1   2   3   4   5
// Array: [10, 20, 30, 20, 40, 20]
//             ↑       ↑       ↑
//            1st     2nd     3rd


// here w search for 20 and we can find it at index 1, 3, and 5.

// output: 20

// In a normal linear search, once the target is found, we don't need to continue.




// 🧠 But here's the important part:

// Sometimes the question specifically asks:

// "Find all occurrences of 20."

// sometimes it asla last occurence of 20 also 




// | Question asks    | What we do                      |
// | ---------------- | ------------------------------- |
// | Find element     | Stop at first match             |
// | Find index       | Return index when found         |
// | First occurrence | Stop at first match             |
// | Last occurrence  | Continue to the end             |
// | All occurrences  | Continue and record every match |
// | Not found        | Return `-1`                     |





// 🧩 Next: Count Occurrences 🔢

// [5, 2, 8, 2, 9, 2]

    // "How many times does 2 occur?"

    // Start a count at 0 → whenever the target is found, increase the count.




// 🔹 2.5 Linear Search — Next Concept
// Searching for ALL Positions 📍



// [5, 2, 8, 2, 9, 2]


// [5, 2, 8, 2, 9, 2]
// target = 2



// We now want:

// "Give me the index of every occurrence of 2."


// Find first  → stop
// Find last   → continue + update answer
// Count       → increase count
// All indexes → store index
// Not found   → keep searching until the end



// 📘 Chapter 2 — Arrays
// 🔹 2.5 Array Searching
// 🔸 Linear Search — Complexity


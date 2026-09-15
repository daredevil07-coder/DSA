// 📘 Chapter 2 — ARRAYS
// 🔢 Subchapter 2.7 — Maximum and Minimum Elements



// 🏆 2.7.1 — Finding the Maximum Element
// 1️⃣ What is the maximum element?


// The maximum element is the largest value in an array.

// Example:

// 12   45   7   89   23   56

// The maximum is:

// 89

// Because 89 is greater than all other elements

// RULE:
// 1.we maintain a variable called maximum
// 2. initially we assume first element as a maximum.
// 3. we do not start with 0 cause an array can contains negative number .



// 4️⃣ Core rule 🧠

// For every element:

// If current element > maximum:
//     update maximum
// Otherwise:
//     keep maximum unchanged

// We visit each element only once.


// // 📘 Chapter 2 — ARRAYS
// // 🔢 Subchapter 2.8 — Counting and Frequency of Elements

// // We’ll start with the basics: counting positive, negative, even, and odd numbers. 🔍



// rule :
// 1.create a counter 
// int positiveCount = 0;
// 2. transverse the arry check
// if (arr[i] > 0)
// 3. if the conditon is true increse the counter 
// positiveCount++;





// 📌 2.8.1 Counting Positive Numbers

// A positive number is greater than zero.

// int arr[7] = {-5, 10, 0, 8, -2, 7, 0};
// Positive numbers are:

// 10, 8, 7

// Positive count = 3

// 🔎 Important

// arr[i] > 0 → positive

// arr[i] < 0 → negative

// arr[i] == 0 → zero

// Zero is neither positive nor negative



// 🔢 Subchapter 2.8 — Counting and Frequency
// 📌 2.8.4 Counting Even and Odd Numbers
// 🧠 Theory

// A number is even when it is completely divisible by 2.

// arr[i] % 2 == 0

// A number is odd when:

// arr[i] % 2 != 0






// 📘 Chapter 2 — ARRAYS
// 🔢 Subchapter 2.8 — Counting and Frequency
// 📌 2.8.6 Count Occurrences of a Target

// Now we’ll count how many times a particular value appears in an array. 🔍


// int arr[8] = {10, 20, 30, 20, 40, 20, 50, 20};
// int target = 20;

// The value 20 appears at indexes:

// 1, 3, 5, 7
// Count = 4



// 🧠 Logic

// Create a counter:

// int count = 0;

// Traverse the array and compare each element with the target:

// if (arr[i] == target) {
//     count++;
// }
// ⚠️ Important Difference

// = means assignment

// == means comparison
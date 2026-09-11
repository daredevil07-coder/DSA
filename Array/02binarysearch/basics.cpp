// 📚 Chapter 2 — ARRAYS
// 🔍 2.6 Binary Search

// 2.6.1 What is Binary Search?

// Binary Search is a searching technique that 
// repeatedly cuts the search area into half.


// 🧠 2.6.2 The most important requirement
// The array must be sorted. ⚠️




// ❌ You cannot normally use Binary Search correctly.

// Why?

// Because Binary Search makes decisions like:

// "The target is greater than the middle, therefore search the right half."

// That decision is only valid when the values are ordered.



// low                    high
//  ↓                       ↓
// 10  20  30  40  50  60  70  80
//              ↑
//             mid
// low → beginning of current search area
// high → end of current search area
// mid → middle of current search area

// 🧠 Key rule
// Comparison	What we do
// arr[mid] == target	🎯 Found
// arr[mid] < target	➡️ Search right half
// arr[mid] > target	⬅️ Search left ha






// 📚 Chapter 2 — ARRAYS
// 🔍 2.6 Binary Search
// 2.6.3 Understanding low, mid, and high


// 10  20  30  40  50  60  70  80  90
// ↑                   ↑               ↑
// low                mid             high

// Initially:

// low = first index → 0
// high = last index → 8
// mid = middle index → 4

// So:




// 🔹 What happens after comparing?

// Suppose target = 70.

// We compare:

// arr[mid] = 50
// target   = 70

// Since:

// 70 > 50

// we know the target must be on the right side.

// So we move low forward:

// old low = 0
// new low = mid + 1 = 5

// Now our search area becomes:

// 10  20  30  40  50 | 60  70  80  90
//                     ↑               ↑
//                    low             high

// Then we calculate a new middle inside this smaller area.

// 🔹 If target is smaller than mid

// Suppose target = 30.

// Since:

// 30 < 50

// we eliminate the right half.

// So high moves backward:

// new high = mid - 1

// The search area becomes:

// 10  20  30  40 | 50  60  70  80  90
// ↑             ↑
// low          high

// index:  5   6   7   8
// value: 60  70  80  90
//             ↑
//            mid

// low +high /2



// 📚 Chapter 2 — Arrays
// 🔍 2.6 Binary Search
// 2.6.4 What happens when the target is not present?


// it do nothing just maing hlaf and half and afte that when it 
// becomes kow > high that means not search 


// 🚨 low > high

// That means there is no search area left.

// Therefore:




// 📚 Chapter 2 — ARRAYS
// 🔍 2.6 Binary Search
// 2.6.5 Binary Search — Best & Worst Case



// | Search        | Best |    Worst |
// | ------------- | ---: | -------: |
// | Linear Search | O(1) |     O(n) |
// | Binary Search | O(1) | O(log n) |




//  📚 Chapter 2 — ARRAYS
// // 🔍 2.6 Binary Search

// 🔍 2.6.7 — Iterative Binary Search

// low = beginning
// high = ending

//        ↓
//    calculate mid
//        ↓
//  compare arr[mid]
//        ↓
//  ┌─────┼─────┐
//  ↓     ↓     ↓
// <     ==     >
//  ↓     ↓     ↓
// right found  left
//  ↓           ↓
// update low  update high
//        ↓
//     repeat




// 🧮 2.6.8 — Calculating the Middle Index




// The basic formula is:

// mid = (low + high) / 2

// when the sum is odd think integer division



// 📚 Chapter 2 — ARRAYS
// 🧩 2.6.10 — Binary Search Conditions


// 1️⃣ The array should be sorted

// 2️⃣ We need valid boundaries

// 3️⃣ The search continues while a search area existsThe condition is:

// low <= high
// If:

// low > high
// then there is nothing left to search.

// 4️⃣ We must update the correct boundary


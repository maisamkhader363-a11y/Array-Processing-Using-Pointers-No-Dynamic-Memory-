# Array Processing Using Pointers (No Dynamic Memory)

A C++ program developed to perform advanced operations on a static array using strictly **pointer arithmetic** and memory traversal, without relying on traditional array indexing or dynamic memory allocation.

## 📌 Project Overview
This project demonstrates low-level memory handling in C++ by processing a static array through pointers only. It fulfills specific architectural and logical constraints typically required in structural computer science courses.

## 🛠️ Core Features & Operations
1. **Safe Input Handling:** Reads a user-defined integer `n` (where $1 \le n \le 50$).
2. **Pointer-Based Array Reading:** Utilizes a pointer to read exactly `n` elements into a static array of size 50.
3. **Data Analysis via Pointer Arithmetic:**
   * Counts the total number of **even** and **odd** elements.
   * Efficiently finds the **second largest** element in the array.
4. **Result Display:** Prints the entered elements, the even/odd counts, and the second-largest value strictly via pointer manipulation.

## 🚫 Strict Constraints Followed
* **No Array Indexing:** Array notation like `arr[i]` is completely avoided; instead, pointer arithmetic like `*(ptr + i)` or pointer increments are used.
* **No Dynamic Memory:** Memory allocation using keywords like `new` or `delete` is not utilized, relying entirely on static allocation as per the specifications.

## 💻 Skills Demonstrated
* C++ Programming
* Pointer Arithmetic & Traversal
* Algorithm Design & Logic Optimization

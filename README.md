# Data Structures and Algorithms - Interview Preparation

This repository contains C++ implementations of common data structure and algorithm problems frequently asked in technical interviews.

## 📁 Files Overview

### 1. `first.cpp` - Longest Increasing Subsequence (LIS)
**Problem**: Find the length of the longest increasing subsequence in an array.

**Algorithm**: Dynamic Programming approach
- **Time Complexity**: O(n²)
- **Space Complexity**: O(n)

**Example**:
```cpp
Input: [10, 9, 2, 5, 3, 7, 101, 18]
Output: 4 (The LIS is [2, 3, 7, 18])
```

**Key Concepts**:
- Dynamic Programming
- Array manipulation
- Subsequence problems

### 2. `second.cpp` - String Interleaving Check
**Problem**: Check if a third string is formed by interleaving two given strings while maintaining the relative order of characters.

**Algorithm**: Two-pointer technique
- **Time Complexity**: O(n) where n = length of string3
- **Space Complexity**: O(1)

**Example**:
```cpp
Input: str1 = "ab", str2 = "cd", str3 = "acbd"
Output: Yes (str3 can be formed by interleaving str1 and str2)
```

**Key Concepts**:
- String manipulation
- Two-pointer technique
- Sequence validation

## 🚀 How to Run

### Prerequisites
- C++ compiler (g++, clang++, or Visual Studio)
- Standard C++ library

### Compilation and Execution

**For first.cpp:**
```bash
g++ -o first first.cpp
./first
```

**For second.cpp:**
```bash
g++ -o second second.cpp
./second
```

## 📝 Problem Categories

| File | Category | Difficulty | Topics |
|------|----------|------------|--------|
| `first.cpp` | Dynamic Programming | Medium | LIS, Array, DP |
| `second.cpp` | String Processing | Easy-Medium | Two Pointers, Strings |

## 🎯 Learning Objectives

These implementations help understand:

1. **Dynamic Programming Patterns**
   - State definition and transition
   - Optimal substructure
   - Overlapping subproblems

2. **String Algorithms**
   - Character-by-character processing
   - Maintaining sequence order
   - Efficient validation techniques

3. **Optimization Techniques**
   - Space-time trade-offs
   - Two-pointer approach
   - Early termination conditions

## 🔍 Test Cases

### Longest Increasing Subsequence
- `[10, 9, 2, 5, 3, 7, 101, 18]` → 4
- `[0, 1, 0, 3, 2, 3]` → 4
- `[7, 7, 7, 7, 7, 7, 7]` → 1

### String Interleaving
- str1="ab", str2="cd", str3="acbd" → Yes
- str1="ab", str2="cd", str3="acb" → No (with current test case)

## 💡 Key Interview Tips

1. **For LIS Problems**:
   - Consider both DP and Binary Search approaches
   - Understand the difference between subsequence and subarray
   - Practice variants like printing the actual LIS

2. **For String Problems**:
   - Always consider edge cases (empty strings, single characters)
   - Think about the order of operations
   - Consider both recursive and iterative solutions

## 🌟 Future Enhancements

- [ ] Add binary search optimization for LIS (O(n log n))
- [ ] Implement recursive solution for string interleaving
- [ ] Add more test cases and edge case handling
- [ ] Include input validation
- [ ] Add performance benchmarking

## 📚 Related Problems

- **LIS Variants**: Print LIS, Count of LIS, Russian Doll Envelopes
- **String Interleaving**: Edit Distance, Longest Common Subsequence, String Matching

---

**Author**: Darshan-204  
**Repository**: DSA-BY-ME  
**Purpose**: Interview Preparation & Algorithm Practice

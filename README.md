# 🧮 Fractional Knapsack in C

## 📌 Overview
This project implements the **Fractional Knapsack Problem** using the greedy algorithm in C.  
The program sorts items by their **value-to-weight ratio** and then fills the knapsack to maximize profit.  
If an item cannot fit completely, a fraction of it is taken.

---

## ⚙️ How It Works
1. **Input**
   - `value[]`: array of item values (profits).
   - `weight[]`: array of item weights.
   - `capacity`: maximum weight the knapsack can hold.

2. **Sorting**
   - Items are sorted in descending order of `value/weight` ratio.
   - This ensures the most profitable items (per unit weight) are chosen first.

3. **Knapsack Filling**
   - If the whole item fits → take it completely.
   - If only part fits → take the fraction proportional to remaining capacity.

4. **Output**
   - Prints the maximum value achievable with given capacity.

---

## 🖥️ Example
Input:
```c
value[] = {60, 100, 120}
weight[] = {10, 20, 30}
capacity = 50
---
```
## 📖 Learning Notes
- This is a greedy algorithm: always pick the best ratio first.
- Fractional knapsack allows splitting items, unlike 0/1 knapsack.
- Useful for optimization problems in resource allocation.

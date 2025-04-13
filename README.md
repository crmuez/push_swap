# 🧠 **Push Swap**

A sorting algorithm project written in C for **42's School** curriculum. The task is to sort a stack of integers using a limited set of operations with minimal moves. The project involves implementing an efficient sorting algorithm by using an optimized cost-based approach to minimize the number of operations.

## 🚀 **Project Overview**

The main goal of this project is to sort a stack of integers using the fewest operations possible, using only the following actions:
- **sa**: Swap the first two elements of stack A.
- **sb**: Swap the first two elements of stack B.
- **ss**: Perform sa and sb simultaneously.
- **pa**: Push the top element of stack B to stack A.
- **pb**: Push the top element of stack A to stack B.
- **ra**: Rotate stack A upwards by 1.
- **rb**: Rotate stack B upwards by 1.
- **rr**: Perform ra and rb simultaneously.
- **rra**: Reverse rotate stack A by 1.
- **rrb**: Reverse rotate stack B by 1.
- **rrr**: Perform rra and rrb simultaneously.

The algorithm aims to sort the stack by determining the cost of each operation in real-time and applying the least costly ones.

## 🧩 **How it Works**

This sorting system is based on a **cost-based algorithm**, where each operation's "cost" is calculated using specific rules for each of the stacks. The solution involves calculating the total cost for each potential move and selecting the one that minimizes the number of operations. This ensures that the program sorts the stack in the least number of moves possible.

Key features:
- **Cost calculation**: For each element, the cost to push it to the correct position is calculated. The cost takes into account the position of the element and the required movements.
- **Efficient execution**: Using the least costly operations minimizes the number of moves, which is essential for large sets of data.
- **Real-time calculation**: The algorithm adjusts in real-time to ensure optimal performance during the sorting process.

## 📚 **Learning Outcomes**

This project helped me develop:
- A deeper understanding of sorting algorithms and their complexities.
- Efficient memory and stack management techniques in C.
- The ability to create optimized algorithms based on problem-specific constraints.

## 🔧 **Technologies Used**
- C programming language
- Linux operating system

---

Feel free to check out the code and reach out if you have any questions or suggestions!

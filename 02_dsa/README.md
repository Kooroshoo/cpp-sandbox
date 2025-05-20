# 🧠 C++ Quick Reference for LeetCode

This document provides a practical overview of essential C++ topics commonly used in coding interviews and problem-solving platforms like LeetCode.

---

## 🧱 1. Arrays  
Fixed-size container.

```cpp
int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; ++i) {
    cout << arr[i] << " ";
}
```

---

## 📦 2. Vectors  
A dynamic array — resizes as needed.

```cpp
#include <vector>
vector<int> v = {10, 20, 30};
v.push_back(40);
for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
}
```

---

## 🧵 3. Strings  
Used for text manipulation.

```cpp
#include <string>
string s = "hello";
s += " world";  // Concatenate
cout << s << endl;

for (char c : s) {
    cout << c << " ";
}
```

---

## 🔁 4. Loops  

### For Loop
```cpp
for (int i = 0; i < 3; ++i)
    cout << "i = " << i << endl;
```

### While Loop
```cpp
int j = 0;
while (j < 3) {
    cout << "j = " << j << endl;
    j++;
}
```

---

## 🗺️ 5. Hash Maps (`unordered_map`)  
Stores key-value pairs.

```cpp
#include <unordered_map>
unordered_map<string, int> age;
age["Alice"] = 25;
age["Bob"] = 30;

for (auto& pair : age) {
    cout << pair.first << ": " << pair.second << endl;
}
```

---

## 📚 6. Hash Sets (`unordered_set`)  
Stores unique values only.

```cpp
#include <unordered_set>
unordered_set<int> nums = {1, 2, 2, 3};
nums.insert(4);  // Adds 4

for (int val : nums) {
    cout << val << " ";
}
```

---

## 🧮 7. Functions  

```cpp
int add(int a, int b) {
    return a + b;
}

cout << add(3, 5);  // Output: 8
```

---

## 🔗 8. Linked Lists  
Used in many LeetCode problems.

```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Traverse a linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}
```

---

## 📚 9. Stacks and Queues  

### Stack (LIFO)
```cpp
#include <stack>
stack<int> st;
st.push(10);
st.push(20);
cout << st.top(); // 20
st.pop();
```

### Queue (FIFO)
```cpp
#include <queue>
queue<int> q;
q.push(1);
q.push(2);
cout << q.front(); // 1
q.pop();
```

---

## 🧠 10. Recursion  
A function that calls itself.

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

---

## 🧰 11. Useful STL Algorithms  

### Sort a vector
```cpp
vector<int> nums = {5, 3, 2, 4};
sort(nums.begin(), nums.end());  // Ascending
```

### Reverse a string or vector
```cpp
reverse(s.begin(), s.end());
```

### Find max/min
```cpp
int maxVal = *max_element(nums.begin(), nums.end());
```

---

## ✅ 12. If/Else and Switch

### If/Else
```cpp
int x = 10;
if (x > 5) {
    cout << "Greater than 5";
} else {
    cout << "Less or equal to 5";
}
```

### Switch
```cpp
switch(x) {
    case 1: cout << "One"; break;
    case 2: cout << "Two"; break;
    default: cout << "Other";
}
```

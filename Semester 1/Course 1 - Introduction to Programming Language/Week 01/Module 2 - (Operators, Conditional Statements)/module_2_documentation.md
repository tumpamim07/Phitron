
# **Module 2 Documentation**
<details>
<summary><b>Operators</b></summary>

## ✅ Types of Operators

### 🔶1. **Arithmetic Operators**

Used to perform basic mathematical operations.

| Operator | Meaning | Example | Result |
| --- | --- | --- | --- |
| `+` | Addition | `a + b` | Adds a and b |
| `-` | Subtraction | `a - b` | Subtracts b from a |
| `*` | Multiplication | `a * b` | Multiplies a and b |
| `/` | Division | `b / a` | Divides b by a |
| `%` | Modulus | `b % a` | Remainder of b/a |

---

### 📝 Example Code for Arithmetic Operators

```c
#include<stdio.h>
int main()
{
    int a = 3, b = 20;

    // int sum = a + b;         // ➕ Adds a and b → 3 + 20 = 23
    // int mns = a - b;         // ➖ Subtracts b from a → 3 - 20 = -17
    // int mlt = a * b;         // ✖️ Multiplies a and b → 3 * 20 = 60

    // float dvd = b * 1.0 / a; // ➗ Division with float casting:
                               // b * 1.0 = 20.0 (float)
                               // 20.0 / 3 = 6.666667

    int mod = b % a;           // 🔢 Modulus → 20 % 3 = 2
                               // Modulus gives the **remainder**

    // printf("%d", sum);      // Output for addition
    // printf("%d", mns);      // Output for subtraction
    // printf("%d", mlt);      // Output for multiplication
    // printf("%f", dvd);      // Output for float division
    printf("%d", mod);         // Output for modulus → prints 2

    return 0;
}

```

## 🎯 Output:

```makefile

Sum: 23
Minus: -17
Multiply: 60
Divide: 6.67
Modulus: 2

```

## 📝 **Explanation of Floating Point Division**

### 👉 Issue:

If you do:

```c

float dvd = b / a;
```

This will **NOT** give the correct decimal result because both `b` and `a` are integers. It will perform **integer division** first (20 / 3 = 6), then convert to float → `6.000000`.

### ✅ Solution:

To get accurate float result, **cast** one of the operands to float:

```c

float dvd = b * 1.0 / a;
// OR
float dvd = (float)b / a;

```

This gives:

```

20.0 / 3 = 6.666667
```

---

### 🔶 2. **Relational Operators**

Used to compare values and return either **true (1)** or **false (0)**.

| Operator | Description | Example |
| --- | --- | --- |
| `<` | Less than | `a < b` |
| `<=` | Less than or equal | `a <= b` |
| `>` | Greater than | `a > b` |
| `>=` | Greater than or equal | `a >= b` |
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |

---

### 📝 Example Code for Relational Operators

```c
#include<stdio.h> 

int main() 
{
    int a = 3, b = 20; // 🧮 Declaring two integer variables and assigning them values

    // ✅ Relational Operators – they compare two values and return either 1 (true) or 0 (false)
    
    printf("a < b : %d\n", a < b);      // 🔍 Checks if a is less than b (3 < 20 → 1)
    printf("a <= b : %d\n", a <= b);    // 🔍 Checks if a is less than or equal to b (3 <= 20 → 1)
    printf("a > b : %d\n", a > b);      // 🔍 Checks if a is greater than b (3 > 20 → 0)
    printf("a >= b : %d\n", a >= b);    // 🔍 Checks if a is greater than or equal to b (3 >= 20 → 0)
    printf("a == b : %d\n", a == b);    // 🔍 Checks if a is equal to b (3 == 20 → 0)
    printf("a != b : %d\n", a != b);    // 🔍 Checks if a is NOT equal to b (3 != 20 → 1)

    return 0; // 🏁 Ends the main function, returns 0 to indicate successful completion
}

```

### ✅ Output for this code:

```yaml

a < b : 1
a <= b : 1
a > b : 0
a >= b : 0
a == b : 0
a != b : 1

```

---

### 🔶 3. **Logical Operators**

Used to combine multiple conditions.

| Operator | Description | Syntax | Meaning |
| --- | --- | --- | --- |
| `&&` | Logical AND | `(cond1 && cond2)` | True if both conditions are true |
| `..` | Logical OR | `(cond1 .. cond2)` |   Returns **false (0)** only if **both** conditions are false. |

---

### 📝 Example Code for Logical Operators

```c

#include<stdio.h>  // Include the standard input/output library

int main()  // Main function: entry point of the program
{
    int a = 3, b = 20;  // Declare and initialize two integers: a = 3, b = 20

    // 👇 Logical AND operation:
    // Checks: (a < b) && (a != b)
    // a < b => 3 < 20 → true (1)
    // a != b => 3 != 20 → true (1)
    // true && true = true → output: 1
    printf("a < b AND a != b: %d\n", (a < b) && (a != b));

    // 👇 Logical OR operation:
    // Checks: (a > b) || (a == 3)
    // a > b => 3 > 20 → false (0)
    // a == 3 => 3 == 3 → true (1)
    // false || true = true → output: 1
    printf("a > b OR a == 3: %d\n", (a > b) || (a == 3));

    return 0;  // End the program
}
```

### 🧪 Output of the Program:

```yaml

a < b AND a != b: 1
a > b OR a == 3: 1

```

---

### 🧠 Note:

- **True = 1**, **False = 0**
- Always use brackets `()` for clarity in logical expressions.
- Logical operators are mostly used in `if` statements or loops.

</details>
<details>

 <summary><b>Conditional Statements</b></summary>

## 🔶1. Simple `if...else` Statement

```c
#include<stdio.h>
int main() {
    int tk;
    scanf("%d", &tk);              // Command: Take integer input and store in variable tk

    if (tk >= 100) {               // Condition: Check if tk is greater than or equal to 100
        printf("Burger Khabo");    // Action: Print if condition is true
    } else {
        printf("Khabo Na");        // Action: Print if condition is false
    }

    return 0;                     // Command: End program successfully
}

```

---

### Explanation:

- **if** checks condition `tk >= 100`.
- If true, prints `"Burger Khabo"`.
- Else prints `"Khabo Na"`.

---

### Sample Output:

| Input | Output |
| --- | --- |
| 120 | Burger Khabo |
| 50 | Khabo Na |

---

## 🔶 2. `if...else if...else` Ladder

```c
#include<stdio.h>
int main() {
    int tk;
    scanf("%d", &tk);                // Command: Take input

    if (tk >= 100) {                 // Condition 1: tk >= 100
        printf("Burger Khabo");      // Action: Print if true
    }
    else if (tk >= 50) {             // Condition 2: tk >= 50
        printf("Fuchka Khabo");      // Action: Print if true
    }
    else if (tk >= 20) {             // Condition 3: tk >= 20
        printf("Ice Cream Khabo");   // Action: Print if true
    }
    else {                          // Else block if none of above conditions true
        printf("Khabo Na, Basay jabo");  // Action: Print fallback message
    }

    return 0;                       // Command: End program
}

```

---

### Explanation:

- Checks multiple conditions **in order**.
- Executes first matching block only.
- Else block runs if none matches.

---

### Sample Output:

| Input | Output |
| --- | --- |
| 150 | Burger Khabo |
| 75 | Fuchka Khabo |
| 30 | Ice Cream Khabo |
| 10 | Khabo Na, Basay jabo |

---

## 🔶 3. Nested `if...else`

```c
#include<stdio.h>
int main() {
    int tk;
    scanf("%d", &tk);                      // Command: Input value

    if (tk >= 5000) {                      // Outer condition
        printf("Cox's Bazar Jabo\n");      // Action: print if true

        if (tk >= 10000) {                 // Inner condition
            printf("Saint Martin Jabo\n"); // Action: print if inner true
        } else {
            printf("Ferot Asbo\n");        // Action: print if inner false
        }
    } else {
        printf("Kothao Jabo Na\n");        // Action: print if outer false
    }

    return 0;                             // End program
}

```

---

### Explanation:

- Outer `if` runs if tk ≥ 5000.
- Inner `if` checks if tk ≥ 10000 and acts accordingly.
- Else parts execute if conditions fail.



## 🔶 4. Single-line `if` without braces

```c
#include<stdio.h>
int main() {
    int tk;
    scanf("%d", &tk);             // Command: Input from user

    if (tk >= 1000)               // Condition: if true execute next line only
        printf("Pizza Khabo\n");  // Action: Print message

    return 0;                    // End program
}

```

---

### Explanation:

- When only one statement follows `if`, braces `{}` can be omitted.
- Be careful: only the next single statement is controlled by the `if`.

---

### Sample Output:

| Input | Output |
| --- | --- |
| 1500 | Pizza Khabo |
| 500 | (no output) |

### 📝 Summary Table:

| Statement Type | Use Case |
| --- | --- |
| `if` | Single condition to check |
| `if-else` | Two-way decision making |
| `if-else if-else` | Multi-way decision making |
| `Nested if-else` | Multi-level conditions inside other blocks |

</details>

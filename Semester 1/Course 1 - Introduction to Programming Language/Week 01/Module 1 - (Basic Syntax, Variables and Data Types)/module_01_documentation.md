# 📘 Module 1 Documentation
<details>
<summary><b> Basic Syntax, Variables and Data Types></b></summary>

### Code Structure, Main Function, `printf()`, Special Characters

## ✅ Code Example:

```c
#include <stdio.h>

int main()
{
    // printf("Hello.\nI am a programmer.\n\tThis is a tab");
    printf("100%%.\n\\"); // Special Character (%, \)
    return 0;
}
```

---

## 🧠 Code Breakdown:

### 1. `#include <stdio.h>`

- This is a **preprocessor directive**.
- It includes the **Standard Input Output header file** which allows us to use input/output functions like `printf()` and `scanf()`.

---

### 2. `int main()`

- This is the **main function**, the **starting point** of every C program.
- `int` means it returns an integer value — typically `0` on successful execution.

---

### 3. `{ ... }`

- These curly braces enclose the **body of the main function**.
- All executable statements go inside this block.

---

### 4. `printf()` – 📤 **Print Function**

**🔹 What it does:**

- `printf()` is a **standard output function**.
- It is used to **display text or values on the screen**.

**🔹 Syntax:**

```c

printf("Your text here");

```

**🔹 Example:**

```c

printf("Hello, World!");

```

➡️ This prints: `Hello, World!`

---

### 5. Code Line:

```c

// printf("Hello.\nI am a programmer.\n\tThis is a tab");

```

- This line is **commented out**, so it doesn’t run.
- It shows usage of:
    - `\n` for **new line**
    - `\t` for **tab space**

---

### 6. Code Line:

```c

printf("100%%.\n\\");
```

- This is the **active print line**.
- It uses **special characters**:
    - `%%` to print `%`
    - `\\` to print `\`
    - `\n` to print a **new line**

---

### 7. `return 0;`

- This ends the `main()` function.
- Returning `0` tells the system the program finished **successfully**.

---

## 🔍 Special Characters Summary:

| Code | Description | Output |
| --- | --- | --- |
| `\n` | New Line | ⏎ |
| `\t` | Tab Space | → |
| `%%` | Percent Sign (%) | `%` |
| `\\` | Backslash () | `\` |

---

## ✅ Output of This Program:

```bash

100%.
\
```

</details>
<details>
<summary><b>Variable & Data Type</b></summary>

## 🔶 1. What is a Variable?

A **variable** is a name given to a memory location that stores data during the execution of a program.

### 👉 Variable Actions:

- **Declaration**: Telling the compiler about the variable and its data type.
    
    Example: `int num;`
    
- **Assignment**: Giving a value to the variable later.
    
    Example: `num = 10;`
    
- **Initialization**: Declaring and assigning value at the same time.
    
    Example: `int num = 10;`
    

---

## 🔶 2. Basic Data Types in C

| Data Type | Description | Example | Format Specifier | Size |
| --- | --- | --- | --- | --- |
| `int` | Stores whole numbers | `int x = 5;` | `%d` | 4 Bytes |
| `float` | Stores decimal values | `float y = 3.14;` | `%f` | 4 Bytes |
| `char` | Stores a single character | `char z = 'A';` | `%c` | 1 Byte |
| `bool` | Stores boolean (true/false) | `bool flag = true;` | `%d` | 1 Byte |

🔸 *To use `bool`, include `#include <stdbool.h>`*

---

## 🔶 3. Format Specifiers in C

| Format | Used For | Example Output |
| --- | --- | --- |
| `%d` | Integer | `100` |
| `%f` | Float | `3.141593` |
| `%0.2f` | Float (2 decimals) | `3.14` |
| `%c` | Character | `'A'` |

---

## 🔶 4. Garbage Value

When you declare a variable without assigning it a value, C may print a **garbage value**, i.e., an unknown number from memory.

```c

int x;
printf("%d", x); // ❌ Undefined output (garbage value)
```

Always initialize your variables!

---

## 🔶 5. Sample Code with Explanation (Command Style)

```c

#include <stdio.h>              // Preprocessor directive to include Standard I/O functions

int main()                      // Main function from where program starts
{
    // int rahim = 100, karim = 200;    // Declaring and initializing two integer variables
    // printf ("%d %d", karim, rahim);  // Output: 200 100 (using format specifier %d)

    // float chol = 2.589785;           // Declaring a float variable with decimal value
    // printf("%f", chol);              // Output: 2.589785 (6 decimal places default)
    // printf("%0.3f", chol);           // Output: 2.590 (rounded to 3 decimal places)

    char ami = 'C';                    // Declaring a char variable with value 'C'
    printf("%c", ami);                 // Output: C (using format specifier %c)

    return 0;                          // Indicates successful program termination
}

```
</details>
<details>
<summary><b>Input, Output, Data Types, Variable Rules, and Limitations of Data Type</b> </summary>

## 🔶 **1. Input with `scanf()` and Output with `printf()`**

- `scanf()` is used to take input.
- `&` (ampersand) is used to store the input in a **variable's memory address**.
- `printf()` is used to display output.

```c

#include <stdio.h>
int main()
{
    int rahim, karim;
    float f;
    char c;

    scanf("%d %f %c", &rahim, &f, &c);
    printf("%d %0.2f %c", rahim, f, c);
    return 0;
}
```

📝 **Explanation**:

- `%d`: Format specifier for integer.
- `%f`: Format specifier for float.
- `%c`: Format specifier for char.
- `%0.2f`: Outputs float up to 2 decimal places.

---

## 🔶**2. Printing Percentage (%) with `scanf()` and `printf()`**

### ✅ Method 1: Using `char` to store `%`

```c

int a, b;
char p;
scanf("%d%c %d%c", &a, &p, &b, &p);
printf("%d%c %d%c", a, p, b, p);
```

### ✅ Method 2: Using `%%` directly

```c

int a, b;
scanf("%d%% %d%%", &a, &b);
printf("%d%% %d%%", a, b);
```

📝 **Note**:

- `%%` is used to **print or scan** the **% symbol** literally.

---

## 🔶 **3. Data Type Storage & Limitations**

### ✅ Integer

```c

int a = 1000000000;            // 4 bytes (32-bit)
long long int b = 10000000000000; // 8 bytes (64-bit)
printf("%d %lld", a, b);
```

- `int`: Stores up to 10 digits.
- `long long int`: Stores up to 20 digits.
- **4 bytes = 32 bits**, so max value = `2^31 - 1 = 2147483647`

---

### ✅ Float & Double

```c

float a = 2005.25265;           // 4 bytes
double b = 22.123456789123456;  // 8 bytes
printf("%f %0.15lf", a, b);

```

📝 **Note**:

- `float`: ~6 decimal digits precision.
- `double`: ~15 decimal digits precision.
- `%lf`: Format specifier for double.

---

## 🔶 **4. Data Size Summary**

| Data Type | Size | Range |
| --- | --- | --- |
| `int` | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| `long long int` | 8 bytes | ~±9 x 10¹⁸ |
| `float` | 4 bytes | ~±3.4 x 10³⁸ (6-7 digits) |
| `double` | 8 bytes | ~±1.7 x 10³⁰⁸ (15-16 digits) |
| `char` | 1 byte | ASCII characters |

---

## 🔶 **5. Bit & Byte Concepts**

- **1 Byte = 8 Bits**
- **2ⁿ - 1**: Formula used to calculate the maximum unsigned value storable with `n` bits.

Example:

- 4 bytes = 32 bits → `2³² - 1 = 4294967295`
- 8 bytes = 64 bits → `2⁶⁴ - 1 = 18,446,744,073,709,551,615`

---

## 🔶 **6. Variable Naming Rules**

✔ Valid:

- Must begin with a **letter** or an underscore `_`
- Can contain letters, digits, underscores
- Case sensitive (`Age` ≠ `age`)
- Should not use C **keywords** (e.g., `int`, `return`)

❌ Invalid:

- Cannot start with digits (e.g., `1num`)
- Cannot contain special symbols (`#`, `@`, etc
</details>

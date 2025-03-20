# Get_next_line - Function that reads a line from a file descriptor

## 📌 Overview

**get_next_line** is a function that reads a line from a file descriptor, dynamically managing memory to ensure efficient reading. The bonus version extends functionality to handle multiple file descriptors simultaneously, making it useful for reading from multiple files or input sources concurrently.

## 📦 Directory Structure
get_next_line/
 ├── get_next_line.c              # Main function
 ├── get_next_line_utils.c        # Utility functions
 ├── get_next_line.h              # Header file
 ├── get_next_line_bonus.c        # Bonus version
 ├── get_next_line_utils_bonus.c  # Bonus utilities
 ├── get_next_line_bonus.h        # Bonus header
 ├── gnlTester/                   # Testing for mandatory part
 │   ├── gnlMain.c
 │   ├── file.txt
 ├── gnlBonusTester/              # Testing for bonus part
 │   ├── main2.c
 │   ├── file1.txt
 │   ├── file2.txt
 │   ├── file3.txt

## 🚀 Compilation & Usage
To compile and use Get_next_line:
```sh
git clone https://github.com/Tudor-Ursescu/Get_next_line.git
cd Get_next_line
```
In order to run the mandatory part:
```sh
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c gnlTester/gnlMain.c -o gnl_tester
./gnl_tester
```
In order to run the bonus part(multiple FDs support):
```sh
cc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c gnlBonusTester/main2.c -o gnl_bonus_tester
./gnl_bonus_tester
```

## 🧪 Expected Output

For mandatory: Reads lines from `file.txt` one at a time.

For bonus:
```sh
Hello, this is file 1.
Hello, this is file 2.
Hello, this is file 3.
This is still file 1.
This is still file 2.
This is still file 3.
You will exit file 1.
You will exit file 2.
You will exit file 3.
```
## 🛠 Notes
- Make sure BUFFER_SIZE is properly defined for optimal performance.
- Always free() allocated memory to avoid leaks.
- Bonus version ensures independent reading from multiple files.

## 📜 License
This project is open-source.

## 👤 Author
[**Tudor Ursescu**](https://github.com/Tudor-Ursescu)
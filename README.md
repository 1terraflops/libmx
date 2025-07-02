# libmx
C library with lightweight functions

## 💡 About libmx
libmx is a C library that includes a range of useful functions. Some are unique, while others mimic the behaviour of standard functions (like strlen). All functions names are prefixed with 'mx_', for example: mx_strlen(). 

Almost all functions in this library are built only using basic tooling of C language (if statements, loops, pointers, etc). The only standard functions used in this these library are: `malloc`, `malloc_usable_size` (or `malloc_size` on macOS), `free`, `open`, `read`, `write`, `close`, `exit`.

The idea was to understand how many standard C functions work under the hood and use algorithmic thinking in order to develop a range of useful custom and built-in functions using as little as possible.

libmx offers a range of functions:
* Printing (mx_print_unicode, mx_printstr, etc)
* Math (mx_pow, mx_sqrt)
* Conversion (mx_nbr_to_hex, mx_hex_to_nbr, mx_itoa)
* Algorithmic (mx_foreach, mx_quick_sort, mx_binary_search, etc)
* String (mx_strtrim, mx_strdup, mx_strcmp, etc)
* File (mx_file_to_str, mx_read_line)
* Memory (mx_realloc, mx_memset, mx_memcpy, etc)
* Linked List (mx_create_node, mx_list_size, mx_sort_list, etc)


## 🔧 Built with
* **C**
* **Make**

## 🚀 Getting started
These instructions will help you configure and compile this project to run it on your machine.

### 🧩 Prerequisites
Before trying to compile the application, make sure you have clang compiler and Make installed on your system:

* On Linux (Ubuntu):
```
sudo apt install build-essential clang
```

* On macOS:
```
xcode-select --install
```

### ⚠️ Important
**You can skip this section if you are not using macOS.**

Linux and macOS use a different header and function in order to get the size of allocated memory.

To successfully build the library on macOS, navigate to `libmx/inc/libmx.h`. Open the header file and replace `#include <malloc.h>` with `#include <malloc/malloc.h>` . Then go to `libmx/src/realloc.c` and replace `malloc_usable_size` function with `malloc_size`.

### ⚙️ Building
After cloning the repository, navigate to libmx root directory and simply run 'make' command:
```
make
```

The library should now be built.
Now include "libmx.h" header in any C file.

When compiling the project, don't forget to link 'libmx.a' file, and 'libmx.h' header.


For example:
```
gcc -Iinc libmx.a test.c -o test
```

You should be all set to use this library in your projects.

## ✅ Usage

**Code snippet:**

![carbon](https://github.com/user-attachments/assets/295db48a-4e11-4015-a081-d798ca4b76d9)

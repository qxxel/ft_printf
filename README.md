# ft_printf
![42 Project](https://img.shields.io/badge/42-Project-blue)
![Language](https://img.shields.io/badge/C-0E7FC0?logo=c)

---

## 📌 Summary
- [About](#about)
- [Features](#features)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Directories structure](#directories-structure)
- [Author](#author)

---

<a id="about"></a>
## 📖 About

**ft_printf** is a project of 42 school.
It's a function that replicate printf of the stdio library. It's with some of the flags, but not each one.

---

<a id="features"></a>
## ✨ Features

✅ Print a string on the stdout  
✅ Handle many flags (cspdiuxX%)  
✅ Take as many arguments as the number of flags

---

<a id="installation"></a>
## ⚙️ Installation

**Clone the repository**

```bash
git clone git@github.com:qxxel/ft_printf.git
```

---

<a id="utilisation"></a>
## 🕹️ Utilisation

**1. If you don't want to update the ft_printf or recompile each time**

You have to use the `.a` that you get from the `make` to compile with your program who use this library.
Exemple: cc [your_file.c] ft_printf/libftprintf.a
Then you can launch your program and use the ft_printf !

**2. If you want to deeply connect your project with ft_printf**

You can add some lines in your Makefile to compile the ft_prinf with your project.

```Makefile
# Add variables
FT_PRINTFDIR = ft_printf
FT_PRINTF = $(FT_PRINTFDIR)/libftprintf.a

[...]

# Check ft_printf files to recompile only if it's usefull
FT_PRINTF_SRC = $(wildcard $(FT_PRINTFDIR)/*.c) $(wildcard $(FT_PRINTFDIR)/**/*.c)
FT_PRINTF_HDR = $(wildcard $(FT_PRINTFDIR)/*.h) $(wildcard $(FT_PRINTFDIR)/**/*.h)
FT_PRINTF_DEPS = $(FT_PRINTF_SRC) $(FT_PRINTF_HDR)

[...]

# Add the ft_printf rule to call its Makefile
$(FT_PRINTF): $(FT_PRINTF_DEPS)
	$(MAKE) -C $(FT_PRINTFDIR)

[...]

# Add the libftprintf.a in the compilation of your project
$(NAME): [your_objects] $()
	$(CC) $(CFLAGS) [your_objects] $(FT_PRINTF) -o $@

# Call the clean of the ft_printf's Makefile
clean:
	[...]
	$(MAKE) -C $(FT_PRINTFDIR) clean

# Call the fclean of the ft_printf's Makefile
fclean: clean
	[...]
	$(MAKE) -C $(FT_PRINTFDIR) $@
```

Then you can launch make at the root of your project to compile it with ft_printf. Don't forget to make another time if you modify a file in ./ft_printf/

---

<a id="directories-structure"></a>
## 📂 Directories structure

```plaintext
📂 ft_printf
 ┣ 📂 include        → headers files (.h)
 ┣ 📂 srcs           → sources files (.c)
 ┣ Makefile
 ┗ README.md
```

<a id="author"></a>
## 👤 Author

* Axel – [GitHub](https://gitub.com/qxxel)
* 42 student - login: *agerbaud*
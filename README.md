## **Libft**
> This project is about coding a C library. It will contain a lot of general purpose functions your programs will rely upon.

### **Development**
The projects is divided into three parts:
- First, the development of a ``Makefile`` where it is mandatory to include the ``$(NAME)``, ``all``, ``clean``, ``fclean`` and ``re`` rules. It must compile properly, without relinking and output a ``libft.a`` file.
- Secondly, we must re-develop some *libc* functions. They must have the same prototypes as the original functions and we must implement the same behaviour as the originals, the exact same way as defined in the ``man``. It is interesting to use previously coded functions, instead of re-coding constantly the same.
- Thirdly, we have to code a series of additional functions, exactly as described by the given subject: the functions in this part are either not in the *libc* or are part of it but in a different form

Bonus part:
- Implement to the previously coded ``Makefile`` a ``bonus`` rule to compile the bonus functions.
- Document ourselves about Linked Lists and develop a series of functions related to it as described by the given subject. Bonus part will only be considered if all the other previous functions work as expected.

### **Documentation**
To learn about the functions we had to re-code, a thorough reading of each function in the ``man`` is mandatory. Additionally, it is incredibly useful to compare the output of our code with the original function's output.
Additionally, linked lists' documentation and information came mostly from [Harvard CS50's Introduction to Computer Science: Week 5 - Data Structures](https://www.edx.org/learn/computer-science/harvard-university-cs50-s-introduction-to-computer-science).

### **Testing**
To test the functions it was essential to develop a ``main.c`` to then compile with the ``libft.a`` file. ``main.c`` file will not be uploaded along with the libft since it was not required by the subject. 

*Enjoy the coding!*

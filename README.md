Matthew Nwerem
2277158
nwere100@mail.chapman.edu


# HW3_SyntaxChecker
Write a C++ program that uses a stack to analyze source code written in any language (C, C++, Lisp…you name it) and report the location of any mismatched delimiters. For this assignment, delimiters are defined to be: ( ) { } [ ]

Source files: DelimMatch.cpp DelimMatch.h GenStack.h main.cpp

For this assignment I used the textbook (5.1.7 Matching Parentheses and HTML Tags) and the following sources:

Using/making templates
http://users.cis.fiu.edu/~weiss/Deltoid/vcstl/templates
https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file?rq=1
https://www.cprogramming.com/tutorial/templates.html
https://stackoverflow.com/questions/9355815/turning-a-non-template-class-into-a-template
https://stackoverflow.com/questions/35871847/not-a-class-namespace-or-enumeration-after-making-a-template-class/35871873


Smtring comparison
https://linux.die.net/man/3/strcmp

Exceptions
http://www.cplusplus.com/reference/exception/exception/

Michael Kulinich helped me with looping through multiple files

Issues: the opposite function does not pop() the way it is supposed to. Instead, it only returns the opposite of whatever delimiter is currently being checked

Instructions to run: make all, ./HW3_SyntaxChecker

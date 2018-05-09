# 00 Getting Started

## Program structure
C++ programs are usually in free form, meaning that spaces are required only when they keep adjacent symbols from running together. In particular, newlines (i.e., the way in which the implementation represents the change from one line of the program to the next) are just another kind of space, and usually have no additional special meaning. Where you choose to put spaces in a program can make it much easier-or harder-to read. Programs are normally indented to improve readability.
There are three entities that are not free-form:
1. string literals
    - characters enclosed in double quotes; may not span lines
2. #include name
    - must appear on a line by themselves (except for comments)
3. // comments
    - // followed by anything; ends at the end of the current line
    - A comment that begins with /* is free-form; it ends with the first subsequent */ and can span multiple lines.

## Types
Types define data structures and operations on those data structures. C++ has two kinds of types: those built into the core language, such as int , and those that are defined outside the core language, such as std::ostream. 

## Namespaces
Namespaces are a mechanism for grouping related names. Names from the standard library are defined in the namespace called std. String literals begin and end with double quotes ( " ); each string literal must appear
entirely on one line of the program. Some characters in string literals have special meaning when preceded by a backslash ( \ ):


 \n |  newline character
 ---|---
 \t | tab character
 \b | backspace character
 \\" |treats this symbol as part of the string rather than as the string terminatorsame meaning as ' in string literals, for consistency with character literals
 \\' | 
 \\ | includes a \ in the string, treating the next character as an ordinary character

## Definitions and headers
Every name that a C++ program uses must have a corresponding definition. The standard library defines its names in headers, which programs access through #include . Names must be defined before they are used; hence, a #include must precede the use of any name from that header. The <iostream> header defines the library's input-output facilities. 

## The main function
Every C++ program must define exactly one function, named main , that returns an int . The implementation runs the program by calling main . A zero return from main indicates success; a nonzero return indicates failure. In general, functions must include at least one return statement and are not permitted to fall off the end of the function.
The main function is special: It may omit the return; if it does so, the implementation will assume a zero return value. However, explicitly including a return from main is good practice. 

## Braces and semicolons
These inconspicuous symbols are important in C++ programs. They are easy to overlook because they are small, and they are important because forgetting one typically evokes compiler diagnostic messages that may be hard to
understand.

## Block Scope
A sequence of zero or more statements enclosed in braces is a statement, called a block, which is a request to execute the constituent statements in the order in which they appear. The body of a function must be enclosed in braces, even if it is only a single statement. 

## Scope
The statements between a pair of matching braces constitute a scope.

## Statement
An expression followed by a semicolon is a statement, called an expression statement, which is a request to execute the expression for its side effects and discard its result. The expression is optional; omitting it results in a null statement, which has no effect.

## Output
 Evaluating std::cout << e writes the value of e on the standard-output stream, and yields std::cout , which as type ostream , as its value in order to allow chained output operations.

# 01 Working with Strings

## Types

### char
Built-in type that holds ordinary characters as defined by the implementation.

### wchar_t
Built-in type intended to hold "wide characters," which are big enough to hold characters for languages such as Japanese.
### String
The string type is defined in the standard header <string> ;. An object of type
string contains a sequence of zero or more characters. 

If n is an integer, c is a char, is is an input stream, and os is an output stream, then the string operations include

- std::string s; 
    + Defines s as a variable of type std::string that is initially empty.
- std::string t = s; 
    + Defines t as a variable of type std::string that initially contains a copy of the characters in s , where s can be either a string or a string literal.
- std::string z(n, c); 
    + Defines z as a variable of type std::string that initially contains n copies of the character c . Here, c must be a char , not a string or a string literal.
- os << s 
    + Writes the characters contained in s , without any formatting changes, on the output stream denoted by os . The result of the expression is os .
- is >> s 
    + Reads and discards characters from the stream denoted by is until encountering a character that is not whitespace. Then reads successive characters from is into s , overwriting whatever value s might have had, until the next character read would be whitespace. The result is is .
- s + t 
    + The result of this expression is an std::string that contains a copy of the characters in s followed by a copy of the characters in t . Either s or t , but not both, may be a string literal or a value of type char .
- s.size() 
    + The number of characters in s .

## Definition of variables
Variables can be defined in one of three ways:
1. std::string hello = "Hello";
    - define the variable with an explicit initial value
2. std::string stars(100, '*'); 
    - construct the variable  according to its type and the given expressions
3. std::string name;
    - define the variable with an implicit initialization which depends on its type
Variables defined inside a pair of curly braces are local variables/which exist only while
executing the part of the program within the braces. When the implementation reaches
the } , it destroys the variables, and returns any memory that they occupied to the
system. Defining a variable as const promises that the variable's value, will not change
during its lifetime. Such a variable must be initialized as part of its definition, because
there is no way to do so later.

## Input
Executing std::cin >> v discards any whitespace characters in the standard input stream, then reads from the standard input into variable v . It returns std::cin , which has type istream , in order to allow chained input operations.
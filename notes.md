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

# 02 Looping and Counting

## Expressions
C++ programs can extend the core language by defining what it means to apply built-in operators to objects of class type. Correctly understanding complicated expressions is a fundamental prerequisite to effective programming in C++. Understanding such expressions requires understanding
- How the operands group, which is controlled by the precedence and associativity of the operators used in the expression
- How the operands will be converted to other types, if at all
- The order in which the operands are evaluated

Different operators have different precedence. Most of the operators are left-associative, although the assignment operators and the operators taking a single argument are right-associative. We list the most common operators here-regardless of whether we've used them in this chapter. We've ordered them by precedence from highest to lowest, with a double line separating groupings with the same precedence.

Expression | Meaning
---|---
x.y | The member y of object x
x[y] | The element in object x indexed by y
x++ | Increments x , returning the original value of x
x-- | Decrements x , returning the original value of x

Expression | Meaning
---|---
++x | Increments x , returning the incremented value
--x | Decrements x , returning the decremented value
!x | Logical negation. If x is true then !x is false .
x * y | Product of x and y
x / y | Quotient of x and y . If both operands are integers, the implementation chooses whether to round toward zero or - 8
x % y | Remainder of x divided by y , equivalent to x - ((x / y) * y)

Expression | Meaning
---|---
x + y | Sum of x and y
x - y | Result of subtracting y from x

Expression | Meaning
---|---
x >> y | For integral x and y, x shifted right by y bits; y must be non-negative. If x is an istream , reads from x into y
x << y | For integral x and y, x shifted left by y bits; y must be non-negative. If x is an ostream , writes y onto x .
x relop y | Relational operators yield a bool indicating the truth of the relation. The operators ( <, >, <= , and >= ) have their obvious meanings.
x == y | Yields a bool indicating whether x equals y
x != y | Yields a bool indicating whether x is not equal to y
x && y | Yields a bool indicating whether both x and y are true . Evaluates y only if x is true .
x || y | Yields a bool indicating whether either x or y is true . Evaluates y only if x is false .
x = y | Assign the value of y to x , yielding x as its result.
x op= y | Compound assignment operators; equivalent to x = x op y , where op is an arithmetic or shift operator.
x ? y1 : y2 | Yields y1 if x is true ; y2 otherwise. Evaluates only one of y1 and y2 .

There is usually no guarantee as to the order in which an expression's operands are evaluated. Because the order of evaluation is not fixed, it is important to avoid writing a single expression in which one operand depends on the value of another operand. 

Operands will be converted to the appropriate type when possible. Numeric operands in expressions or relational expressions are converted by the usual arithmetic conversions. Basically, the usual arithmetic conversions attempt to preserve precision. Smaller types are converted to larger types,and signed types are converted to unsigned. Arithmetic values may be converted to bool : A value of 0 is considered false ; any other value is true . Operands of class type are converted as specified by the type.

## Types:

### bool
Built-in type representing truth values; may be either true or false

### unsigned
Integral type that contains only non-negative values

### short

Integral type that must hold at least 16 bits

### long
Integral type that must hold at least 32 bits

### size_t
Unsigned integral type (from <cstddef> ) that can hold any object's size

### string::size_type
Unsigned integral type that can hold the size of any string


## Half-open ranges 
Half-open ranges include one but not both of their endpoints. For example, [1, 3) includes 1 and 2 , but not 3 .

## Condition
An expression that yields a truth value. Arithmetic values used in conditions are converted to bool : Nonzero values convert to true ; zero values convert to false.

## Statements:

- using namespace-name::name ;
Defines name as a synonym for namespace-name::name .

- type-name name;
Defines name with type type-name .
- type-name name = value;
Defines name with type type-name initialized as a copy of value.
- type-name name(args) ;
Defines name with type type-name constructed as appropriate for the given arguments in args .
- expression ;
Executes expression for its side effects.
- { statement(s) }
Called a block. Executes the sequence of zero or more statement(s) in order. May be used wherever a statement is expected. Variables defined inside the braces have scope limited to the block.
- while (condition) statement
If condition is false , do nothing; otherwise, execute statement and then repeat the entire while.
- for(init-statement condition; expression) statement
Equivalent to { init-statement while (condition ) {statementexpression ; } } .
- if (condition) statement
Executes statement if condition is true .
- if (condition) statement else statement2
Executes statement if condition is true , otherwise executes statement2 .
Each else is associated with the nearest matching if .
- return val ;
Exits the function and returns val to its caller.
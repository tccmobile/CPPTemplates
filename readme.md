# Templates

This example demonstrates several important concepts of templates:

1. **Template Functions**:
   - `isGreaterThan<T>`: A simple template function that compares two values
   - `printPair<T, U>`: Shows how to use multiple template parameters

2. **Template Class**:
   - `DataContainer<T>`: A generic container that can store any data type
   - Shows how to define member functions within a template class
   - Demonstrates template method `processData` that accepts callable objects

3. **Practical Uses**:
   - Type-safe generic programming
   - Code reusability (same container works with different types)
   - Generic algorithms (finding maximum, processing data)

4. **Advanced Features**:
   - Template method within template class (`processData`)
   - Exception handling in templates
   - Using templates with STL containers
   - Lambda functions with templates

When you run this program, it will output:
```
Numbers: 5 2 8 1
Max number: 8
Doubled numbers: 10 4 16 2

Words: apple banana cherry
Longest word: cherry
Pair: 42, Hello
Pair: 3.14, A
```

This example shows how templates enable you to write generic, reusable code while maintaining type safety. The same container and functions work with different data types (integers, strings) without code duplication.
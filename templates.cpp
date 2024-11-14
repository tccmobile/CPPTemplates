#include <iostream>
#include <vector>
#include <string>

// Template function: Generic comparison
template<typename T>
bool isGreaterThan(T a, T b) {
    return a > b;
}

// Template class: Generic data container
template<typename T>
class DataContainer {
private:
    std::vector<T> data;
    
public:
    // Add element to container
    void add(T element) {
        data.push_back(element);
    }
    
    // Template method within template class
    template<typename Func>
    void processData(Func operation) {
        for (T& element : data) {
            operation(element);
        }
    }
    
    // Find maximum element using template function
    T findMax() {
        if (data.empty()) throw std::runtime_error("Container is empty");
        
        T max = data[0];
        for (const T& element : data) {
            if (isGreaterThan(element, max)) {
                max = element;
            }
        }
        return max;
    }
    
    // Print all elements
    void print() const {
        for (const T& element : data) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
};

// Template function with multiple type parameters
template<typename T, typename U>
void printPair(T first, U second) {
    std::cout << "Pair: " << first << ", " << second << std::endl;
}

int main() {
    // Using DataContainer with integers
    DataContainer<int> numbers;
    numbers.add(5);
    numbers.add(2);
    numbers.add(8);
    numbers.add(1);
    
    std::cout << "Numbers: ";
    numbers.print();
    
    // Using template function
    std::cout << "Max number: " << numbers.findMax() << std::endl;
    
    // Using lambda with template method
    std::cout << "Doubled numbers: ";
    numbers.processData([](int& n) { n *= 2; });
    numbers.print();
    
    // Using DataContainer with strings
    DataContainer<std::string> words;
    words.add("apple");
    words.add("banana");
    words.add("cherry");
    
    std::cout << "\nWords: ";
    words.print();
    std::cout << "Longest word: " << words.findMax() << std::endl;
    
    // Using template function with multiple type parameters
    printPair(42, "Hello");
    printPair(3.14, 'A');
    
    return 0;
}

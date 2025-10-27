#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <memory>
#include <algorithm>
#include <functional>
#include <thread>
#include <mutex>
#include <fstream>
#include <sstream>
#include <exception>
#include <typeinfo>
#include <chrono>

using namespace std;

// Forward declarations
class Shape;
template<typename T>
class SmartContainer;

// Custom exception class
class CustomException : public exception {
private:
    string message;
public:
    CustomException(const string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

// Abstract base class demonstrating inheritance and polymorphism
class Shape {
protected:
    string name;
    static int shapeCount;
    
public:
    Shape(const string& n) : name(n) { shapeCount++; }
    virtual ~Shape() { shapeCount--; }
    
    // Pure virtual function
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    
    // Virtual function
    virtual void display() const {
        cout << "Shape: " << name << ", Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
    
    // Static function
    static int getShapeCount() { return shapeCount; }
    
    // Friend function declaration
    friend ostream& operator<<(ostream& os, const Shape& shape);
    
    // Getter
    string getName() const { return name; }
};

// Static member definition
int Shape::shapeCount = 0;

// Friend function definition
ostream& operator<<(ostream& os, const Shape& shape) {
    os << "Shape[" << shape.name << "]";
    return os;
}

// Derived class - Rectangle
class Rectangle : public Shape {
private:
    double width, height;
    
public:
    Rectangle(double w, double h) : Shape("Rectangle"), width(w), height(h) {}
    
    double area() const override {
        return width * height;
    }
    
    double perimeter() const override {
        return 2 * (width + height);
    }
    
    void display() const override {
        cout << "Rectangle: " << width << "x" << height 
             << ", Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
};

// Derived class - Circle
class Circle : public Shape {
private:
    double radius;
    static constexpr double PI = 3.14159;
    
public:
    Circle(double r) : Shape("Circle"), radius(r) {}
    
    double area() const override {
        return PI * radius * radius;
    }
    
    double perimeter() const override {
        return 2 * PI * radius;
    }
    
    void display() const override {
        cout << "Circle: radius=" << radius 
             << ", Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
};

// Template class
template<typename T>
class SmartContainer {
private:
    vector<T> data;
    
public:
    void add(const T& item) {
        data.push_back(item);
    }
    
    T& get(size_t index) {
        if (index >= data.size()) {
            throw CustomException("Index out of bounds");
        }
        return data[index];
    }
    
    size_t size() const { return data.size(); }
    
    // Template member function
    template<typename Predicate>
    void removeIf(Predicate pred) {
        data.erase(remove_if(data.begin(), data.end(), pred), data.end());
    }
    
    // Iterator support
    typename vector<T>::iterator begin() { return data.begin(); }
    typename vector<T>::iterator end() { return data.end(); }
    typename vector<T>::const_iterator begin() const { return data.begin(); }
    typename vector<T>::const_iterator end() const { return data.end(); }
};

// Function template
template<typename T>
T maximum(const T& a, const T& b) {
    return (a > b) ? a : b;
}

// Template specialization
template<>
string maximum<string>(const string& a, const string& b) {
    return (a.length() > b.length()) ? a : b;
}

// Functor/Function object
class Multiplier {
private:
    int factor;
public:
    Multiplier(int f) : factor(f) {}
    int operator()(int value) const {
        return value * factor;
    }
};

// Namespace
namespace MathUtils {
    const double E = 2.71828;
    
    double power(double base, int exp) {
        double result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
        }
        return result;
    }
    
    // Function overloading
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
    string add(const string& a, const string& b) { return a + b; }
}

// Struct with constructor
struct Point {
    double x, y;
    
    Point(double x = 0, double y = 0) : x(x), y(y) {}
    
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
    
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

// Enum class (C++11)
enum class Color { RED, GREEN, BLUE, YELLOW };

// Union
union Data {
    int i;
    float f;
    char str[20];
};

// Global variables and constants
const int MAX_SIZE = 100;
mutex printMutex;

// Function demonstrating threading
void threadFunction(int id) {
    lock_guard<mutex> lock(printMutex);
    cout << "Thread " << id << " is running" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));
}

// Function demonstrating file I/O
void fileOperations() {
    try {
        // Write to file
        ofstream outFile("test.txt");
        if (outFile.is_open()) {
            outFile << "Hello, C++ File I/O!" << endl;
            outFile << "Line 2" << endl;
            outFile.close();
        }
        
        // Read from file
        ifstream inFile("test.txt");
        if (inFile.is_open()) {
            string line;
            cout << "\nFile contents:" << endl;
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        }
    } catch (const exception& e) {
        cout << "File operation error: " << e.what() << endl;
    }
}

// Function demonstrating STL algorithms
void stlDemo() {
    cout << "\n=== STL Containers and Algorithms Demo ===" << endl;
    
    // Vector operations
    vector<int> numbers = {5, 2, 8, 1, 9, 3};
    cout << "Original vector: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // Sort
    sort(numbers.begin(), numbers.end());
    cout << "Sorted vector: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;
    
    // Find
    auto it = find(numbers.begin(), numbers.end(), 5);
    if (it != numbers.end()) {
        cout << "Found 5 at position: " << distance(numbers.begin(), it) << endl;
    }
    
    // Map operations
    map<string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 35;
    
    cout << "Ages map:" << endl;
    for (const auto& pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // Lambda expressions (C++11)
    auto isEven = [](int n) { return n % 2 == 0; };
    auto evenCount = count_if(numbers.begin(), numbers.end(), isEven);
    cout << "Even numbers count: " << evenCount << endl;
    
    // Transform with lambda
    vector<int> doubled(numbers.size());
    transform(numbers.begin(), numbers.end(), doubled.begin(), 
              [](int n) { return n * 2; });
    cout << "Doubled numbers: ";
    for (int n : doubled) cout << n << " ";
    cout << endl;
}

// Function demonstrating smart pointers
void smartPointerDemo() {
    cout << "\n=== Smart Pointers Demo ===" << endl;
    
    // unique_ptr
    unique_ptr<Rectangle> rect = make_unique<Rectangle>(4.0, 5.0);
    rect->display();
    
    // shared_ptr
    shared_ptr<Circle> circle1 = make_shared<Circle>(3.0);
    shared_ptr<Circle> circle2 = circle1; // Shared ownership
    
    cout << "Circle reference count: " << circle1.use_count() << endl;
    circle1->display();
    
    // Polymorphism with smart pointers
    vector<unique_ptr<Shape>> shapes;
    shapes.push_back(make_unique<Rectangle>(2.0, 3.0));
    shapes.push_back(make_unique<Circle>(2.5));
    
    cout << "Polymorphic shapes:" << endl;
    for (const auto& shape : shapes) {
        shape->display();
    }
}

// Function demonstrating exception handling
void exceptionDemo() {
    cout << "\n=== Exception Handling Demo ===" << endl;
    
    try {
        SmartContainer<int> container;
        container.add(10);
        container.add(20);
        
        cout << "Container size: " << container.size() << endl;
        cout << "Element at index 1: " << container.get(1) << endl;
        
        // This will throw an exception
        cout << "Element at index 5: " << container.get(5) << endl;
    }
    catch (const CustomException& e) {
        cout << "Custom exception caught: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "Standard exception caught: " << e.what() << endl;
    }
    catch (...) {
        cout << "Unknown exception caught" << endl;
    }
}

// Function demonstrating templates and function objects
void templateDemo() {
    cout << "\n=== Templates and Function Objects Demo ===" << endl;
    
    // Function templates
    cout << "Maximum of 10 and 20: " << maximum(10, 20) << endl;
    cout << "Maximum of 3.14 and 2.71: " << maximum(3.14, 2.71) << endl;
    cout << "Maximum of 'hello' and 'world' (by length): " 
         << maximum(string("hello"), string("world")) << endl;
    
    // Template class
    SmartContainer<string> stringContainer;
    stringContainer.add("apple");
    stringContainer.add("banana");
    stringContainer.add("cherry");
    
    cout << "String container contents: ";
    for (const auto& str : stringContainer) {
        cout << str << " ";
    }
    cout << endl;
    
    // Function object
    Multiplier multiply3(3);
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Original numbers: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
    
    transform(nums.begin(), nums.end(), nums.begin(), multiply3);
    cout << "After multiplying by 3: ";
    for (int n : nums) cout << n << " ";
    cout << endl;
}

// Main function demonstrating various C++ features
int main() {
    cout << "=== Comprehensive C++ Features Demo ===" << endl;
    
    try {
        // Basic data types and variables
        int intVar = 42;
        double doubleVar = 3.14159;
        char charVar = 'A';
        bool boolVar = true;
        string stringVar = "Hello, C++!";
        
        cout << "\n=== Basic Data Types ===" << endl;
        cout << "int: " << intVar << endl;
        cout << "double: " << doubleVar << endl;
        cout << "char: " << charVar << endl;
        cout << "bool: " << boolVar << endl;
        cout << "string: " << stringVar << endl;
        
        // Arrays and pointers
        int arr[5] = {1, 2, 3, 4, 5};
        int* ptr = arr;
        cout << "\nArray element via pointer: " << *(ptr + 2) << endl;
        
        // Structures and unions
        Point p1(3.0, 4.0);
        Point p2(1.0, 2.0);
        Point p3 = p1 + p2;
        cout << "Point addition: (" << p3.x << ", " << p3.y << ")" << endl;
        
        Data data;
        data.i = 10;
        cout << "Union data as int: " << data.i << endl;
        data.f = 3.14f;
        cout << "Union data as float: " << data.f << endl;
        
        // Enums
        Color myColor = Color::RED;
        cout << "Enum value: " << static_cast<int>(myColor) << endl;
        
        // Classes and objects
        cout << "\n=== Object-Oriented Programming ===" << endl;
        Rectangle rect(4.0, 5.0);
        Circle circle(3.0);
        
        rect.display();
        circle.display();
        
        cout << "Total shapes created: " << Shape::getShapeCount() << endl;
        
        // Polymorphism
        vector<unique_ptr<Shape>> shapes;
        shapes.push_back(make_unique<Rectangle>(2.0, 3.0));
        shapes.push_back(make_unique<Circle>(2.5));
        
        cout << "\nPolymorphic behavior:" << endl;
        for (const auto& shape : shapes) {
            shape->display();
        }
        
        // Namespace usage
        cout << "\n=== Namespace Demo ===" << endl;
        cout << "Math constants - E: " << MathUtils::E << endl;
        cout << "Power function: 2^3 = " << MathUtils::power(2, 3) << endl;
        cout << "Function overloading:" << endl;
        cout << "add(5, 3) = " << MathUtils::add(5, 3) << endl;
        cout << "add(2.5, 3.7) = " << MathUtils::add(2.5, 3.7) << endl;
        cout << "add('Hello', 'World') = " << MathUtils::add(string("Hello"), string("World")) << endl;
        
        // Function calls for other demos
        stlDemo();
        templateDemo();
        smartPointerDemo();
        exceptionDemo();
        
        // Threading demo
        cout << "\n=== Threading Demo ===" << endl;
        vector<thread> threads;
        for (int i = 0; i < 3; ++i) {
            threads.emplace_back(threadFunction, i + 1);
        }
        
        for (auto& t : threads) {
            t.join();
        }
        
        // File I/O
        fileOperations();
        
        // Type information
        cout << "\n=== Type Information ===" << endl;
        cout << "Type of intVar: " << typeid(intVar).name() << endl;
        cout << "Type of stringVar: " << typeid(stringVar).name() << endl;
        
        // Constants and literals
        const int CONSTANT_VALUE = 100;
        cout << "Constant value: " << CONSTANT_VALUE << endl;
        
        // Auto keyword (C++11)
        auto autoVar = 42.5;
        cout << "Auto variable type deduced as: " << typeid(autoVar).name() << endl;
        
        // Range-based for loop (C++11)
        vector<string> fruits = {"apple", "banana", "cherry"};
        cout << "Fruits (range-based for): ";
        for (const auto& fruit : fruits) {
            cout << fruit << " ";
        }
        cout << endl;
        
    } catch (const exception& e) {
        cout << "Main exception caught: " << e.what() << endl;
    }
    
    cout << "\n=== Program completed successfully! ===" << endl;
    return 0;
}
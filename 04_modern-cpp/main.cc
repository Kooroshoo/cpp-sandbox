#include <iostream>
#include <vector>
#include <optional>       // C++17: for std::optional
#include <string_view>    // C++17: for std::string_view
#include <variant>        // C++17: for std::variant
#include <string>         // for std::string
using namespace std::string_view_literals; // Enables "..."sv string_view suffix

// C++11: Demonstrates usage of smart pointers
void smartPointerExample() {
    // unique_ptr: owns the object exclusively
    std::unique_ptr<int> up = std::make_unique<int>(42);
    std::cout << "unique_ptr value: " << *up << '\n';

    // shared_ptr: multiple owners
    std::shared_ptr<std::string> sp1 = std::make_shared<std::string>("Hello");
    std::shared_ptr<std::string> sp2 = sp1; // now shared

    std::cout << "shared_ptr value: " << *sp1 << ", use_count: " << sp1.use_count() << '\n';

    // weak_ptr: non-owning observer
    std::weak_ptr<std::string> wp = sp1;
    if (auto locked = wp.lock()) { // lock returns shared_ptr if still valid
        std::cout << "weak_ptr locked: " << *locked << '\n';
    }
}

// C++11: Demonstrates auto type deduction and range-based for loop
void autoAndRangeFor() {
    std::vector<int> v = { 1, 2, 3, 4, 5 };
    for (auto n : v)               // auto deduces int
        std::cout << n << ' ';     // prints each number
    std::cout << '\n';
}

// C++11: Demonstrates use of nullptr for pointer initialization
void nullptrExample() {
    int* p = nullptr;              // safer than using NULL
    if (p == nullptr)
        std::cout << "Pointer is null\n";
}

// C++11: Basic lambda function (anonymous function)
void lambdaExample() {
    auto add = [](int a, int b) { return a + b; };  // defines inline addition function
    std::cout << "Lambda add: " << add(3, 4) << '\n';
}

// C++14: Generic lambda (auto parameter allows any type)
void genericLambdaExample() {
    auto print = [](const auto& v) {
        std::cout << "Value: " << v << '\n';        // works with any printable type
    };
    print(123);                                     // prints int
    print("Hello"sv);                               // prints string_view
}

// C++17: Structured bindings (unpacking a pair into named variables)
void structuredBindingExample() {
    std::pair<int, std::string> p{ 42, "Answer" };
    auto [num, text] = p;                           // binds num = 42, text = "Answer"
    std::cout << num << " = " << text << '\n';
}

// C++17: std::optional for representing optional (nullable) values
void optionalExample() {
    std::optional<int> opt;                         // initially empty
    if (!opt) std::cout << "No value yet\n";
    opt = 10;                                       // assign a value
    std::cout << "Value: " << *opt << '\n';         // access with *
}

// C++17: std::string_view for non-owning views into strings
void stringViewExample() {
    std::string s = "Hello, world!";
    std::string_view sv = s;                        // view into s without copying
    std::cout << "String view: " << sv << '\n';
}

// C++17: std::variant for holding one of several types
void variantExample() {
    std::variant<int, std::string> v;               // can hold either int or string
    v = 42;
    std::cout << "Variant int: " << std::get<int>(v) << '\n';
    v = "Modern C++";
    std::cout << "Variant str: " << std::get<std::string>(v) << '\n';
}


int main() {
    smartPointerExample();
    autoAndRangeFor();
    nullptrExample();
    lambdaExample();
    genericLambdaExample();
    structuredBindingExample();
    optionalExample();
    stringViewExample();
    variantExample();
}

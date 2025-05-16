#include "iostream"
#include <memory>  // Required for smart pointers

void stackExample() {
    int x = 10;      // stored on the stack
    int y = x + 5;

    std::cout << "x: " << x << ", y: " << y << std::endl;
} // x and y are automatically destroyed here

void heapExample() {
    int* ptr = new int(42);  // dynamically allocated memory on heap

    std::cout << "Heap value: " << *ptr << std::endl;

    delete ptr;              // manual deallocation
    ptr = nullptr;           // prevent dangling pointer
}

void heapArray() {
    int size = 5;
    int* arr = new int[size];  // allocate array

    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
    }

    delete[] arr;              // deallocate array
    arr = nullptr;
}

void referenceExample() {
    int value = 100;
    int& ref = value;  // ref is an alias to value

    ref += 50;
    std::cout << "value: " << value << std::endl;  // prints 150
}

void heapReferenceExample() {
    // Allocate on the heap
    int* ptr = new int(99);

    // Create a reference to the heap-allocated value
    int& ref = *ptr;

    // Use the reference like a normal variable
    ref += 1;

    std::cout << "Heap value via pointer: " << *ptr << std::endl;
    std::cout << "Heap value via reference: " << ref << std::endl;

    // Still need to delete the memory!
    delete ptr;
}

// RAII (Resource Acquisition Is Initialization), ensuring safe and automatic cleanup without manual delete calls.
class RAIIExample {
private:
    int* data;

public:
    RAIIExample(int value) {
        data = new int(value);
        std::cout << "RAIIExample created with value " << *data << "\n";
    }

    ~RAIIExample() {
        delete data;
        std::cout << "RAIIExample destroyed and memory freed\n";
    }

    int get() const {
        return *data;
    }

    void set(int value) {
        *data = value;
    }
};

void useRAIIExample() {
    RAIIExample example(42);
    std::cout << "Value: " << example.get() << "\n";
    example.set(100);
    std::cout << "New Value: " << example.get() << "\n";
} // destructor automatically frees memory here

// Smart Pointers for automate memory management
void uniquePtrExample() {
    std::unique_ptr<int> ptr = std::make_unique<int>(42);

    std::cout << "Value: " << *ptr << std::endl;

    // Ownership can be transferred via std::move
    std::unique_ptr<int> ptr2 = std::move(ptr);

    if (!ptr) {
        std::cout << "ptr is now empty after move\n";
    }
}

void sharedPtrExample() {
    std::shared_ptr<int> sp1 = std::make_shared<int>(100);

    {
        std::shared_ptr<int> sp2 = sp1; // shared ownership
        std::cout << "Count inside block: " << sp1.use_count() << std::endl;
    } // sp2 destroyed here, count decreases

    std::cout << "Count after block: " << sp1.use_count() << std::endl;
}

void weakPtrExample() {
    auto sp = std::make_shared<int>(10);
    std::weak_ptr<int> wp = sp;

    // Try to get shared_ptr from weak_ptr safely (always use .lock() to safely access the object managed by weak_ptr)
    if (auto locked = wp.lock()) {
        std::cout << "Value: " << *locked << "\n";
    }

    // Reset shared_ptr, deleting the managed object
    sp.reset();

    // weak_ptr now expired, lock() returns nullptr
    if (wp.lock() == nullptr) {
        std::cout << "Object destroyed\n";
    }
}


int main() {


    return 0;
}
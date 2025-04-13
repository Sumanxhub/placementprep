# Object in OOP

## What is an Object?

- An **object** is a physical entity.  
- It is a collection of **member variables** stored in the **heap area** at runtime.


### Key Points

- Object is a **run-time entity**.
- It is an **instance variable** of a class.
- It declares at **compile time** and initialized at **runtime**.
- `new` is responsible to initialize an object into heap area.
- `delete` is responsible to deinitialize an object.
- `new` and `delete` are **functional operators**.
- A **constructor** initializes the members of an object.
- The **reference** of an object is stored in the **stack area**.
- The **size of an object** is the total size of its members.
- A **blank class object** contains **1 byte** in the heap area (to ensure it has a memory address).

---

## Types of Objects

1. **Existing Object**  
   - An object that **invokes the constructor**.

2. **New Born Object**  
   - An object that is **ready to invoke** the constructor (typically just declared but not yet fully initialized).

---

```cpp
class A {
private:
    int a;

public:
    A() {       // Default constructor
        a = 0;
    }

    A(int n) {   // Parameterized constructor
        a = n;
    }

    void display() {
        cout << a << endl;
    }
};

int main() {
    A obj1;         		// Existing object, default constructor invoked
    A* obj2 = new A(20);    // New born object, invokes parameterized constructor

    obj1.display();         // Output: 0
    obj2->display();        // Output: 20

    delete obj1;            // Deinitialize obj1
    delete obj2;            // Deinitialize obj2

    return 0;
}
```

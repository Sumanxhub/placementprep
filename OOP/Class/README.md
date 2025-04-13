# Concept of Class

## Class

A **class** is a logical entity.  
It contains information about its members, such as:

- **Member Variable**  
- **Member Method**  
- **Static Variable**  
- **Static Method**  
- **Constructor**  
- **Destructor**  
- **Access Modifier**  
- **Constant Pool**

### Key Points

- `class` is a **keyword**.
- It is a **user-defined data type**.
- It is also an **abstract data type**.
- Classes support **modularity**.
- Classes are **declared and loaded at compile-time**.
- The **size** of a class is the total size of its members.
- A blank class contains **1 byte**. 
- A class represents the **state and behavior** of an object.

---

## Types of Classes

1. **Concrete Class** – Can declare objects.
2. **Abstract Class** – Cannot declare objects.

---

## Basic Example of a Class

```cpp
class A {
private:   				// Access modifier
    int a; 				// member variable
	
public:  				// Access modifier
    A() {      			// non-parameterized constructor (default)
        a = 0;
    }

    A(int n) {   		// parameterized constructor
        a = n;
    }

    void display() {    // member method
        cout << a;
    }
};


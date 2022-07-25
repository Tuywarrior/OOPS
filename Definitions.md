# OOPS

**smalltalk** is considered as first true object oriented programming language

c++ oops mainly has:
 ** Inheritance,
  Polymorphism,
  Abstraction,
  Encapsulation,**
  
  
  
  
**ADVANTAGES OF OOPS**:
  
   OOPs makes development and maintenance of code easier where as in procedure-oriented programming language it is not easy to manage if code grows as project size          grows.
   
   OOPs provides data hiding unlike procedural programming languages.
   
   OOPs provide ability to simulate real world event much more effectively.
  
  
  
What is an **object**?

  A real world entity that has state and behavior is called an object.Object can be considered as an intance of a class.Its a runtime entity and is created at runtime.



What is a **Class**?

  A class is a user defined data type which has data members and functions.It is basically a blueprint of an object and is the main building block of OOPS.Its a logical entity. 
  
  
  
What is a **constructor**?

  In c++,constructor is a special method which is invoked automatically at the time of object creation.It is used to initialize the data members of new object generally.
  
  Default constructor(only shallow copy)
  
  Parameterized constructor
  
  Copy constructor(deep copy)
  
  
  
What is a **Destructor**?

  A destructor works opposite to constructor; it destructs the objects of classes. It can be defined only once in a class. Like constructors, it is invoked automatically.
  
  
  
What is **this** keyword in C++?
  
  It can be used to pass current object as a parameter to another method.
  
  It can be used to refer current class instance variable.
  
  It can be used to declare indexers.

What is a friend function?
 
  In c++ using friend function we can access the protected & private members of a class.


What is **Inheritance**?

  Inheritance is when one object acquires all the behavior and propertied of its parent object.In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.
  
**TYPES OF INHERITANCE:

  SINGLE INHERITANCE,
  MULTIPLE INHERITANCE,
  MULTILEVEL INHERITANCE,
  HIERARCHICAL INHERITANCE,
  HYBRID INHERITANCE.**
  
SYNTAX OF DERIVED CLASS:

  **class** derivedclassname::visibilitymode baseclassname{
  
    //data
    
  }
  
**SINGLE INHERITANCE**:Derived class is inherited from only 1 base class.

**Multilevel inheritance** is a process of deriving a class from another derived class.

**Multiple inheritance** is the process of deriving a new class that inherits the attributes from two or more classes.

**Hybrid inheritance** is a combination of more than one type of inheritance.

**Hierarchical inheritance** is defined as the process of deriving more than one class from a base class.


In C++, aggregation is a process in which one class defines another class as any entity reference. It is another way to reuse the class. It is a form of association that represents HAS-A relationship.


**POLYMORPHISM**

  The term "Polymorphism" is the combination of "poly" + "morphs" which means many forms.In simple words,its an ability of a message to be displayed in more than one form.There are two types of polymorphism.
  
  1.compile-time polymorphism(function overloading & operator overloading)
  
  2.runtime-polymorphism(virtual function)
  
 Compile-Time polymorphism:
  
 **Function overloading: **
 When there are multiple function with same name but different parameters,then the function are said to be overloaded.

**Operator overloading: **
C++ allows the option to overload operators. For example,we can make use of the addition operator(+) for string class to concatenate two strings. We know that the task of this operator is to add two operands.So a single '+' operator adds them and when placed between string operands.

Runtime-Polimorphism:

**Function-Overriding:** It occurs when a derived class has a definition for one of the member functions of base class. The base class is said to be overridden.




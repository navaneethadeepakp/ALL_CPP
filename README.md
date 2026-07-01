1. CLASS & OBJECT (The Blueprint vs. The Machine)
The Class: A blueprint or a "map" that defines what data an object has and what it can do. It is like a C structthat also holds functions.
The Object: The actual "variable" made from that blueprint.
Example: Car is the Class. myTeslais the Object.

2. ENCAPSULATION (The “Safety Guard”)
Concept: Putting a wall around data so it can't be changed accidentally.
How: Mark data as privateand provide publicfunctions to change it.
Why: To enforce rules.
Example: If a passwordis private, the setPassword()function can check if it is long enough. You cannot bypass this check because the compiler blocks you from touching the passworddirectly.

3. ABSTRACTION (The “Simple Dashboard”)
Concept: Hiding the "messy" internal code and showing only the simple "buttons."
Why: So you can change the complex engine under the hood without the user ever knowing or having to change their code.
Example: You use a sendEmail()function. You don't need to see the 500 lines of code connecting to the internet and encrypting data. You just see the one "Send" button.

4. INHERITANCE (The "Family Tree")
Concept: Creating a new class based on an existing one. It "borrows" all variables and functions from the parent.
Why: To avoid writing the same code twice.
Example: You have a Shapeclass with color. A Circleclass inherits from Shape. Now Circleautomatically has a colorvariable without you writing it again.

5. POLYMORPHISM (The "Many-Forms" Tool)
Concept: Using the same function name for different types of behavior.
Why: To make code flexible.
Example (Compile-time): A swap()function that works for int, float, and double(Templates).
Example (Runtime): A draw()function. If the object is a Circle, it draws a circle. If it is a Square, it draws a square. The code looks the same ( shape.draw()), but the result is different.

##########################################################################################################################################

ACCESS SPECIFIERS

These are known as Access Specifiers . They act as the "Security Settings" for your class, determining who is allowed to look at or change your variables and functions.

Think of it like a family house .

1. Public (The Front Porch)
Anyone can see and interact with what is on the front porch.
Who can access? The class itself, the "children" (Inheritance), and the outside world (like main()).
Use case: Functions that you want the user of your object to call, like deposit()or startEngine().

2. Private (The Master Bedroom)
This is strictly for the people living in the house.
Who can access?  Only the class itself.\
Who is blocked? The outside world AND even the "children" classes (Inheritance).
Use case: Sensitive data like password, balance, or socialSecurityNumber.
C Student Logic: This is your "Encapsulation" wall. It forces everyone to use your public functions to reach this data.

3. Protected (The Family Living Room)
This is a middle ground. It is private from the neighbors, but shared with the family.
Who can access? The class itself AND any "children" classes that inherit from it.
Who is blocked? The outside world (like main()).
Use case: Variables that you want your "Child" classes to use and modify, but you still want to keep hidden from the general public.

##########################################################################################################################################

CONSTRUCTORS AND DESTRUCTORS





##To-Learn List##Static:

* Shared variables between all objects.

* Friend: Allowing specific access to private data.

* Composition: Objects inside objects.

* Abstract Classes: Classes that only exist to be blueprints for children.

* Namespaces: Organizing code to avoid name clashes.

* Const: Protecting data from being changed by "read-only" functions.

* Constructor Overloading (Multiple Birth Options)

* The Member Initialization List (The "Fast Way")

* Copy and Move Constructors (The “Clone” Rules)

* Virtual Destructors (The Inheritance Rule)

* Deep Copy vs. Shallow Copy: Understanding how pointers behave during object copying.

* The Rule of Three/Five: A rule that says if you need a Destructor, you probably also need a Copy Constructor.

* Explicit Keyword: Prevents the compiler from accidentally turning a string into an object when you didn't want it to.
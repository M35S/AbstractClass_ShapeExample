# AbstractClass_ShapeExample
A very basic example of an abstract class and inheritance relationship between classes.

A UML Class Diagram of this example would look like the following:

                              ---------------------   // <- Abstract class
                              |       Shape       |
          ------------------->|                   |<-------------
          |                   ---------------------             |
          |                   |                   |             |
          |                   |--------------------             |
          |                   | + draw() = 0      |             |
          |                   ---------------------             |
---------------------                                 ---------------------   // <- Derived class
|     Triangle      |                                 |     Rectangle     |
|                   |                                 |                   |
---------------------                                 ---------------------
|                   |                                 |                   |
---------------------                                 ---------------------
|                   |                                 |                   |
---------------------                                 ---------------------

The class "Shape" is the abstract base class. 
"Shape"s derived classes "Triangle" and "Rectangle" both inherit "Shape"s abstract function "draw() = 0".

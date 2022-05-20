/*
 * Dictionary.h
 * 
 * Description: Dictonary data collection ADT class.
 *              BST-based implementation.
 *              Duplicated elements not allowed.
 *              
 * Author: bw
 * Date: mar9 2022
 */

 #pragma once

#include "BST.h"

template <class ElementType>
class Dictionary {
	
private:

/* You cannot change the following data member of this class. */
    BST<ElementType> * keyValuePairs;  
    unsigned int elementCount;               

/* Feel free to add private methods to this class. */
	
public:

/* You cannot change the prototype of the public methods of this class.
   Remember, if you add public methods to this class, our test driver 
   - the one we will use to mark this assignment - will not know about them
   since we will use these public method prototypes to create our test driver. */

    // Constructors and destructor:
	Dictionary();                               // Default constructor
    Dictionary(ElementType& element);           // Parameterized constructor 
    ~Dictionary();                              // Destructor 
	
    // Dictionary operations:
	unsigned int getElementCount() const;
	
	// Description: Puts "newElement" into the dictionary.
    // Precondition: "newElement" does not already exist in the binary search tree.
    // Exception: Throws the exception "ElementAlreadyExistsException" 
	//            if "newElement" already exists in the binary search tree.
	// Time efficiency: O(log2 n)	
	void put(const ElementType& newElement);

	// Description: Gets "newElement" from the dictionary.
    // Precondition: Binary search tree is not empty.
    // Exception: Throws the exception "EmptyDataCollectionException" 
	//            if the binary search tree is empty.
	// Exception: Throws (propagates) the exception "ElementDoesNotExistException" 
	//            thrown from the retrieveR(...)
	//            if "targetElement" is not in the binary search tree.
	// Time efficiency: O(log2 n)
	ElementType& get(const ElementType& targetElement) const;

    // Description: Traverses the binary search tree in order and displays each element
	//              This is a wrapper method which calls the recursive traverseInOrderR( ).
	//              The action to be done on each element during the traverse is the function "visit".
	// Precondition: Binary search tree is not empty.
    // Exception: Throws the exception "EmptyDataCollectionException" 
	//            if the binary search tree is empty.
	// Time efficiency: O(n)	
    void displayContent(void visit(const ElementType&)) const;
	
}; // end Dictionary

#include "Dictionary.cpp" // Including "Dictionary.cpp" (instead of copying the content of Dictionary.cpp) 
                          // is another way of creating templates.
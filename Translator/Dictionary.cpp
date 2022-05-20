/*
 * Dictionart.cpp
 * 
Description: Dictonary data collection ADT class.
 *              BST-based implementation.
 *              Duplicated elements not allowed.
 *              
 * Author: bw
 * Date: mar9 2022
 */
#pragma once

#include "Dictionary.h"

    // Dictionary Constructor 
    template<class ElementType>
    Dictionary<ElementType>::Dictionary(){
        BST<ElementType>::BST();
    }

    //Dictionary parameterized constructor 
    //calls construtor from BST class
    template<class ElementType>
    Dictionary<ElementType>::Dictionary(ElementType&element){
        BST<ElementType>::BST(element);
    }

    //Destructor
    //calls destructor from BST class
    template<class ElementType>
    Dictionary<ElementType>::~Dictionary(){
        BST<ElementType>::~BST();
    }

    //element count getter
    //calls getElementCount from BST class
    template<class ElementType>
    unsigned int Dictionary<ElementType>::getElementCount() const{
        BST<ElementType>::getElementCount() const;
    }

    //puts "newElement" into the dictionary 
    //calls insert from BST class
    template<class ElementType>
    void Dictionary<ElementType>::put(const ElementType& newElement){
       BST<ElementType>::insert(newElement);
    }

    // Description: Gets "newElement" from the dictionary.
    //calls retrieve from BST class
    template<class ElementType>
    ElementType& Dictionary<ElementType>::get(const ElementType& targetElement) const {
        BST<ElementType>::retrieve(targerElement);
            }

    // Description: Traverses the binary search tree in order and displays each element
    //calls traverseInOrder from BST class
    template<class ElementType>
    void Dictionary<ElementType>::displayContent(void visit(const ElementType&)) const{
        BST<ElementType>::traverseInOrder(visit(ElementType));
    }
    
//
//  linked-list.cpp
//  data-structures
//
//  Created by James Ford on 02/11/2015.
//  Copyright © 2015 James Ford. All rights reserved.
//

#include <iostream>
#include "linked-list.h"

void addNodeToFront(node*& head, int value)
{    
    node* newNode = static_cast<node*>(malloc(sizeof(node)));
    
    newNode->value = value;
    newNode->next = head;
    
    head = newNode;
}

void printNodes(node* head)
{
    while (head != NULL)
    {
        std::cout << head->value << "\n";
        head = head->next;
    }
}

void deleteNode(node* head, int value)
{
    node* previous = head;
    node* current = head;
    
    while (current != NULL)
    {
        if(current->value == value)
        {
            previous->next = current->next;
            delete current;
        }
        
        previous = current;
        current = current->next;
    }
}

#ifndef linked_list_h
#define linked_list_h

struct node
{
    int value;
    node* next;
};

class linkedList
{

private:
    node* head;
    int count;
    
public:
    linkedList();
    void addNodeToFront(int value);
    void addNodeToBack(int value);
    void deleteNode(int value);
    void printNodes();
};

#endif /* linked_list_h */

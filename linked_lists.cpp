#include<iostream>

struct ListItem{
    int value;
    ListItem *next;
};

ListItem* newListItem(int value);
ListItem* nextItem(ListItem *item);
void addToList(ListItem *listEnd, ListItem *newItem);

int main() {
    ListItem *head = newListItem(10);
    ListItem *el1 = newListItem(20);
    addToList(head, el1);
    ListItem *el2 = newListItem(30);
    addToList(el1, el2);
    ListItem *tail = newListItem(40);
    addToList(el2, tail);
    ListItem *next = head;
    while (next != nullptr) {
        std::cout<<next->value<<std::endl;
        next = next->next;
    }
    return 0;
}

ListItem* newListItem(int value) {
    ListItem *item =  new ListItem;
    item->next = nullptr;
    item->value = value;
    return item;
}

ListItem* nextItem(ListItem *item) {
    return item->next;
}

void addToList(ListItem *listEnd, ListItem *newItem) {
    listEnd->next = newItem;
}
#include <iostream>
#include "list.h"

template <class T>
List<T>::List(){
    pFirst = nullptr;
}

template <class T>
void List<T>::Add(const T& element){
    Node *head = new Node();
    head -> pT = (int*)&element;
    if(pFirst == nullptr){
        pFirst = head;
        pFirst -> pNext = nullptr;
    }else{
        head -> pNext = pFirst;
        pFirst = head;
    }
}

template <class T>
void List<T>::Remove(const T& element){
    Node *cur = pFirst, *pre = nullptr;
    while(cur != nullptr){
        if(*(cur -> pT) == element){
            if(pre == nullptr){ //cur is pFirst
                pFirst = cur -> pNext;
            }else{
                pre -> pNext = cur -> pNext;
            }
            delete cur;
            break;
        }
        pre = cur;
        cur = cur -> pNext;
    }
}

template <class T>
T* List<T>::Find(const T& element){
    Node *cur = pFirst;
    while(cur != nullptr){
        if(*cur == element){
            return cur -> pT;
        }
        cur = cur -> pNext;
    }
    return nullptr;
}

template <class T>
void List<T>::PrintList(){
    Node *cur = pFirst;
    while(cur != nullptr){
        std::cout << *(cur -> pT);
        cur = cur -> pNext;
    }
}

template <class T>
List<T>::~List(){
    Node *cur = pFirst, *pre = nullptr;
    while(cur != nullptr){
        pre = cur;
        cur = cur -> pNext;
        delete pre;
    }
}


int main(int argc, char const *argv[])
{
    List<int> list;
    list.Add(1);
    list.Add(5);
    list.Add(9);
    list.Add(7);
    list.Remove(9);
    list.PrintList();
    return 0;
}

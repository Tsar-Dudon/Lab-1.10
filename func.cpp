#include <iostream>
#include "func.hpp"

void PushBack(Node* head, int value)
{
	Node* p = head;
	while(p->next != nullptr)
		p = p->next;

	Node* q = new Node;
	q->data = value;
	q->next = nullptr;
	p->next = q;
}

void Print(Node* head)
{
    Node* p = head->next;
    while(p != nullptr) 
    {
        std::cout << p->data << std::endl;
        p = p->next;
    }
}

void Clear(Node* head)
{
    Node* p = head;
    while(p->next != nullptr)
    {
        Node* tmp = p;
        p = p->next;
        delete tmp;

    }
}

bool IsSorted1(Node* head)
{
    Node* p = head->next;
    while(p->next != nullptr)
    {
        int k = p->data;
        while(k > 9)
        {
            k /= 10;
        }  
        int k1 = p->next->data;
        while(k1 > 9)
        {
            k1 /= 10;
        } 
        if(k < k1)
        {
            return false;
            break;
        }
        else
        {
            p = p->next;
        }
    }
    return true;
}

bool IsSorted2(Node* head)
{
    Node* p = head->next;
    while(p->next != nullptr)
    {
        int k = p->data;
        short LastDigit = k % 10;
        int k1 = p->next->data;
        short LastDigit1 = k1 % 10;
        if(LastDigit < LastDigit1)
        {
            return false;
            break;
        }
        else
        {
            p = p->next;
        }
    }
    return true;
}

bool isPalindrome(int x) 
{
    if (x % 10 == 0 || x < 10) 
    {
        return false;
    }
    int reversedNumber = 0;
    while (x > reversedNumber) 
    {
        reversedNumber = reversedNumber * 10 + x % 10;
        x /= 10; 
    }
    return x == reversedNumber || x == reversedNumber / 10;
}
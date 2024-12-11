#include <iostream>
#include "func.hpp"

int main()
{	
	Node* head = new Node {0, nullptr};

	std::cout << "Enter Length: ";
	short length;
	std::cin >> length; 
	int value;
	for(short ln = 0; ln < length; ln++)
	{
		std::cin >> value;
		PushBack(head, value);
	}

	Node* p = head;
    while (p != nullptr && p->next != nullptr) 
    {
        if (IsSorted1(head) || IsSorted2(head)) 
        {
            if (p->next->data < 10) 
            {
                Node* tmp = p->next; 
                p->next = p->next->next; 
                delete tmp; 
            }
            else if (isPalindrome(p->next->data)) 
            {
                Node* q = new Node {p->next->data, p->next};
                p->next = q;
                p = q->next; 
            }
            else 
            {
                p = p->next; 
            }
        }
        else
            break;
	}

	Print(head);
	Clear(head);

	return 0;
}
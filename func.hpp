#pragma once

struct Node
{
    int data;
    Node* next;
};

void PushBack(Node* head, int value);
void Print(Node* head);
void Clear(Node* head);
bool IsSorted1(Node* head);
bool IsSorted2(Node* head);
bool isPalindrome(int x);
void bubbleSort(Node* head);
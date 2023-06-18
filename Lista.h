//
// Created by Administrador on 17/6/2023.
//

#ifndef GUIA1_EJ20B_LISTA_H
#define GUIA1_EJ20B_LISTA_H

typedef struct node{
    int data;
    struct node * next;
}Node;

typedef struct list{
    Node * header;
}List;

typedef struct queue{
    Node * tail;
    Node * head;
}Queue;

typedef struct stack{
    Node * top;
}Stack;

Node * newNode(int data);
List * newList();
Queue * newQueue();
Stack * newStack();

void enlist(List * list, Node * nodeList);
Node * listOut(List * list);
void pile(Stack * stack, Node * out);
Node * pileOut(Stack * stack);
void enqueue(Queue * queue, Node * pileOut);
Node * queueOut(Queue * queue);
void printStack(Stack * stack);



#endif //GUIA1_EJ20B_LISTA_H

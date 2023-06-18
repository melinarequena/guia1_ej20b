//
// Created by Administrador on 17/6/2023.
//

#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>

Node * newNode(int data) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Error\n");
        exit(-1);
    }
    aux->data = data;
    aux->next = NULL;
    return aux;
}

List *newList() {
    List * aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }
    aux->header = NULL;
    return aux;
}

Queue *newQueue() {
    Queue * aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }
    aux->tail = NULL;
    aux->head = NULL;
    return aux;
}

Stack *newStack() {
    Stack * aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }
    aux->top = NULL;
    return aux;
}

void enlist(List *list, Node *nodeList) {
    if(list->header == NULL){
        list->header = nodeList;
    }else{
        Node * aux = list->header;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = nodeList;
    }
}

Node * listOut(List *list) {
    if(list->header == NULL){
        printf("Empty list\n");
        return NULL;
    }else{
        Node * out = list->header;
        list->header = list->header->next;
        out->next = NULL;
        return out;
    }
}

void pile(Stack * stack, Node * out) {
    if(stack->top == NULL){
        stack->top = out;
    }else{
        out->next = stack->top;
        stack->top = out;
    }
}

Node *pileOut(Stack *stack) {
    if(stack->top == NULL){
        printf("La lista s eencuentra vacia\n");
        return NULL;
    }else{
        Node * out = stack->top;
        stack->top = stack->top->next;
        out->next = NULL;
        return out;
    }
}

void enqueue(Queue *queue, Node *pileOut) {
    if(queue->head == NULL){
        queue->head = pileOut;
        queue->tail = pileOut;
    }else{
        queue->tail->next = pileOut;
        queue->tail = pileOut;
    }
}

Node *queueOut(Queue *queue) {
    if(queue->head == NULL){
        printf("No existen elementos\n");
        return NULL;
    }else{
        Node * out = queue->head;
        queue->head = queue->head->next;
        out->next = NULL;
        return out;
    }
}

void printStack(Stack * stack) {
    Node * aux = stack->top;
    while (aux != NULL){
        printf("%d\n", aux->data);
        aux = aux->next;
    }
}

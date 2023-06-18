#include "Lista.h"

int main() {
    List * list = newList();
    Queue * queue = newQueue();
    Stack * stack = newStack();

    enlist(list, newNode(1));
    enlist(list, newNode(2));
    enlist(list, newNode(3));
    enlist(list, newNode(4));
    enlist(list, newNode(5));

    pile(stack, listOut(list));
    pile(stack, listOut(list));
    pile(stack, listOut(list));
    pile(stack, listOut(list));
    pile(stack, listOut(list));

    enqueue(queue, pileOut(stack));
    enqueue(queue, pileOut(stack));
    enqueue(queue, pileOut(stack));
    enqueue(queue, pileOut(stack));
    enqueue(queue, pileOut(stack));

    pile(stack, queueOut(queue));
    pile(stack, queueOut(queue));
    pile(stack, queueOut(queue));
    pile(stack, queueOut(queue));
    pile(stack, queueOut(queue));

    printStack(stack);
    return 0;
}

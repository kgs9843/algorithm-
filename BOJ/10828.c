#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int data[10001];
    int top;
} stack;

void init_stack(stack* p) {
    p->top = -1;
}

void empty(stack* p) {
    if (p->top == -1) {
        printf("%d\n", 1);
        return ;
    }
    else {
        printf("%d\n", 0);
        return ;
    }
}

void push(stack* p, int item) {
    p->data[++(p->top)] = item;
}

int pop(stack* p) {
    if (p->top == -1) {
        printf("%d\n", -1);
        return -1;
    }
    printf("%d\n", p->data[(p->top)--]);
    return p->data[(p->top) + 1];
}

int top1(stack* p) {
    if (p->top == -1) {
        printf("%d\n", -1);
        return -1;
    }
    printf("%d\n", p->data[p->top]);
    return p->data[p->top];
}

int size(stack* p) {
    printf("%d\n", p->top + 1);
    return p->top + 1;
}

int main(void) {
    int a;
    scanf("%d", &a);
    getchar();
    char operation[100];
    stack p;
    char pnum[100];
    init_stack(&p);
    for (int i = 0; i < a; i++) {
        scanf(" %s", operation);
        if (strcmp(operation, "push") == 0) {
            scanf("%s", pnum);
            push(&p, atoi(pnum));
        }
        else if (strcmp(operation, "top") == 0) {
            top1(&p);
        }
        else if (strcmp(operation, "size") == 0) {
            size(&p);
        }
        else if (strcmp(operation, "pop") == 0) {
            pop(&p);
        }
        else if (strcmp(operation, "empty") == 0) {
            empty(&p);
        }
    }
    return 0;
}

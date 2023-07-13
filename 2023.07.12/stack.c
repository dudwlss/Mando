#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

typedef struct {
    int data[MAX_STACK_SIZE];
    int top;
} Stack;

void initializeStack(Stack* stack) {
    stack->top = -1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Error: Stack is full\n");
        return;
    }
    stack->data[++stack->top] = value;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return stack->data[stack->top--];
}

int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty\n");
        return -1;
    }
    return stack->data[stack->top];
}

int evaluatePostfixExpression(const char* expression) {
    Stack stack;
    initializeStack(&stack);

    int i = 0;
    while (expression[i] != '\0') {
        if (isdigit(expression[i])) {
            int operand = expression[i] - '0';
            push(&stack, operand);
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            int result;

            switch (expression[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    printf("Error: Invalid operator\n");
                    return -1;
            }

            push(&stack, result);
        }

        i++;
    }
    return pop(&stack);
}

int main() {
    char expression[100];
    printf("후위표기법으로 된 수식을 입력하세요: ");
    scanf("%s", expression);

    int result = evaluatePostfixExpression(expression);
    printf("계산 결과: %d\n", result);

    return 0;
}

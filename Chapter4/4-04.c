#include <stdio.h>

#define MAXVAL  100 /* 栈val的最大深度 */

int sp = 0;         /* 下一个空闲栈位置 */
double val[MAXVAL]; /* 值栈 */

void push(double);
double pop(void);
double ptop(void);
double ctop(void);
void stop(void);
void cstack(void);

/* 测试栈 */
int main(void)
{
    push(1.0);
    push(2.0);
    printf("top is : %g\n", ptop());
    printf("copy top : %g\n", ctop());
    printf("pop top : %g\n", pop());
    stop();
    printf("top after switch : %g\n", ptop());
    cstack();
    printf("top after clear : %g\n", pop());
    return 0;
}

/* push函数：把f压入到值栈中 */
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

/* pop函数：弹出并返回栈顶的值 */
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

/* ptop函数：打印栈顶元素 */
double ptop(void)
{
    if (sp > 0)
        return val[sp-1];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

/* ctop函数：复制栈顶元素 */
double ctop(void)
{
    if (sp > 0) {
        push(ptop());
        return ptop();
    }
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

/* stop函数：交换栈顶两个元素 */
void stop(void)
{
    int temp;
    if (sp > 1) {
        temp = val[sp-1];
        val[sp-1] = val[sp-2];
        val[sp-2] = temp;
    }
    else
        printf("error: need at least 2 elements in stack\n");
}

/* cstack函数：清空栈 */
void cstack(void)
{
    sp = 0;
}
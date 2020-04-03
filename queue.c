#include<stdio.h>
#include<malloc.h>
#define MAX 10;
struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue node;
struct element
{
    struct queue *front;
    struct queue *rear;
};
typedef struct element bound;
bound *myq;
int create_queue(bound *);
bound *insert(bound *, int);
bound *delete(bound *);
 int main(int argc, char const *argv[])
 {
     
     return 0;
 }
 
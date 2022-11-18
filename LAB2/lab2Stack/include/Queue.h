#ifndef QUEUE_H
#define QUEUE_H

#define MaxQSize 5
//implement using array 
typedef struct Queue
{
    
    //n3ml array max w n3ml index f and r 
    int arr[MaxQSize];
    int front, rear;

}Queue;

void EnQueue(Queue *q, int data)
{
    //lma ykon l queue fadyy 
    if(q->rear == MaxQSize - 1)
        return;

    if(q->front == -1)
        q->front++;

    q->rear++;
    q->arr[q->rear] = data;
}

int DeQueue(Queue *q, int *data)
{
    q->front++;

    if(q->front == -1)
    {
        return 0;
    }
    else
    {
        *data = q->arr[q->front];
        q->front++;

        return 1;
    }
}

#endif // QUEUE_H

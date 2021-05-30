#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define MAX_QUEUE_SIZE 100

typedef struct TreeNode {
    int val;
    struct TreeNode *left, *right;
}TreeNode;

TreeNode n1 = {15, NULL, NULL};
TreeNode n2 = {7, NULL, NULL};
TreeNode n3 = {9, NULL, NULL};
TreeNode n4 = {20, &n1, &n2};
TreeNode n5 = {3, &n3, &n4};
TreeNode *root = &n5;

typedef TreeNode * element;
typedef struct {
	element val[MAX_QUEUE_SIZE];
	int  front, rear;
} QueueType;

void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_queue(QueueType *q)
{
	q->front = q->rear = 0;
}

int is_empty(QueueType *q)
{
	return (q->front == q->rear);
}

int is_full(QueueType *q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void enqueue(QueueType *q, element item)
{
	if (is_full(q))
		error("큐가 포화상태입니다");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->val[q->rear] = item;
}

element dequeue(QueueType *q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->val[q->front];
}

void level_order(TreeNode *ptr)
{
	QueueType q;

	init_queue(&q);	 // 큐 초기화

	if (ptr == NULL) //루트가 NULL이면 종료
                return;
	enqueue(&q, ptr); //루트 노드를 큐에 삽입
	while (!is_empty(&q)) { //큐가 비어있지 않는 동안 반복
		ptr = dequeue(&q); //노드를 하나 꺼낸다
		printf("%d ", ptr->val); //꺼낸 노드의 데이터 출력
		if (ptr->left) //순회하며 노드를 삽입
			enqueue(&q, ptr->left);
		if (ptr->right)
			enqueue(&q, ptr->right);
	}
}

int main()
{
    level_order(root);

    return 0;
}

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
		error("ť�� ��ȭ�����Դϴ�");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->val[q->rear] = item;
}

element dequeue(QueueType *q)
{
	if (is_empty(q))
		error("ť�� ��������Դϴ�");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->val[q->front];
}

void level_order(TreeNode *ptr)
{
	QueueType q;

	init_queue(&q);	 // ť �ʱ�ȭ

	if (ptr == NULL) //��Ʈ�� NULL�̸� ����
                return;
	enqueue(&q, ptr); //��Ʈ ��带 ť�� ����
	while (!is_empty(&q)) { //ť�� ������� �ʴ� ���� �ݺ�
		ptr = dequeue(&q); //��带 �ϳ� ������
		printf("%d ", ptr->val); //���� ����� ������ ���
		if (ptr->left) //��ȸ�ϸ� ��带 ����
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

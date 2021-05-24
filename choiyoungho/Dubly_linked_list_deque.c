# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				num;
	struct s_node	*next;
	struct s_node	*prev;
}				t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
}				t_stack;

int	is_empty(t_stack *stack)
{
	if (stack->size == 0)
		return (1);
	else
		return (0);
}

void	stack_init(t_stack *stack)
{
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
}

t_node	*ft_node_new(int num)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->num = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

int	add_back(t_stack *stack, int num)
{
	t_node	*new;

	new = ft_node_new(num);
	if (new == NULL)
		return (0);
	new->prev = stack->tail;
	if (is_empty(stack))
		stack->head = new;
	else
		stack->tail->next = new;
	stack->tail = new;
	stack->size++;
	return (1);
}

int	add_front(t_stack *stack, int num)
{
	t_node	*new;

	new = ft_node_new(num);
	if (new == NULL)
		return (0);
	new->next = stack->head;
	if (is_empty(stack))
		stack->tail = new;
	else
		stack->head->prev = new;
	stack->head = new;
	stack->size++;
	return (1);
}

//todo free return value
t_node	*pop_back(t_stack *stack)
{
	t_node	*node;

	if (is_empty(stack))
		return (NULL);
	node = stack->tail;
	stack->tail = stack->tail->prev;
	if (stack->tail == NULL)
		stack->head = NULL;
	else
		stack->tail->next = NULL;
	stack->size--;
	return (node);
}

//todo free return value
t_node	*pop_front(t_stack *stack)
{
	t_node	*node;

	if (is_empty(stack))
		return (NULL);
	node = stack->head;
	stack->head = stack->head->next;
	if (stack->head == NULL)
		stack->tail = NULL;
	else
		stack->head->prev = NULL;
	stack->size--;
	return (node);
}

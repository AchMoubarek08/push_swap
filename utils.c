
#include "Push_swap.h"

void print_stack(pile st)
{
	if(stack_vide(st))
	{
		printf("Rien a afficher, la Pile est vide.\n");
		return;
	}

	while(!stack_vide(st))
	{
		printf("[%d]\n", st->i);
		st = st->next;
	}
}

void    swap(int *y, int *z)
{
    int temp;

    temp = *y;
    *y = *z;
    *z = temp;
}

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int	ft_atoi(const char *str)
{
	long	i;
	long	a;
	long	k;

	k = 0;
	a = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' )
	{			
		a = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + str[i] - '0';
		i++;
	}
	return (k * a);
}

pile    new_pile(void)
{
    return NULL;
}

Bool   stack_vide(pile st)
{
    if(st == NULL)
        return true;
    return false;
}

pile	push_stack(pile st, int x)
{
    pileElement *element;

    element = malloc(sizeof(*element));
    if(element == NULL)
        return(NULL);
    element->i = x;
    element->next = st;
    return element;
}
pile    pop_stack(pile st)
{
    pileElement *element;
    if(stack_vide(st))
        return new_pile();
    element = st;
    st = st->next;
    free(element);
    return(st);
}

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

void    check_dup(pile a)
{
	int flag;
	pile st;
	while(!stack_vide(a))
	{
		st = a->next;
		while(!stack_vide(st))
		{
			if(a->i == st->i)
			{
				ft_putstr("error\n");
				exit(0);
			}
			st = st->next;
		}
		a = a->next;
	}
}
void    reverse_rotate(pile *a, char *str)
{
    pile last;

    last = get_last(*a);
    last->next->next = *a;
    *a = last->next;
    last->next = NULL;
    printf("%s", str);
}
void insertionsort(pile *a, pile *b, int argc)
{
    int i;
    int temp;

    temp = argc;
    while(!stack_vide(*a))
    {
        i = getmin(*a);
        if(i <= temp / 2)
        {
            while(i > 1)
            {
                *a = rotate_stack(*a, "ra\n");
                i--;
            }
            push_to_stack(a, b, "pb\n");
        }
        else if(i == temp)
        {
            reverse_rotate(a, "rra\n");
        }
        else
        {
            while(i < temp)
            {
                reverse_rotate(a, "rra\n");
                i++;
            }
            push_to_stack(a, b, "pb\n");
        }
        temp--;
    }
}
int getmin(pile a)
{
    int i;
    int s;
    pile head;

    head = a;
    s = a->i;
    i = 1;
    while(!stack_vide(a))
    {
        if(a->i < s)
            s = a->i;
        a = a->next;  
    }
    while(head->i != s)
    {
        i++;
        head = head->next;
    }
    return(i);
}
pile get_last(pile a)
{
    if(stack_vide(a))
        return(a);
    while(!stack_vide(a->next->next))
    {
        a = a->next;
    }
    return(a);
}

void fill_a(pile *a, pile *b, int argc)
{
    while(argc > 1)
    {
        push_to_stack(b, a, "pa\n");
        argc--;
    }
}

#ifndef push_swap_h
# define push_swap_h

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
    typedef struct pileElement
    {
        int i;
        struct pileElement *next;
    }pileElement, *pile;

    typedef enum
    {
        false,
        true
    }Bool;

pile    is_new_pile(void);
Bool	stack_vide(pile st);
pile	push_stack(pile st, int x);
int		ft_atoi(const char *str);
pile    swap_stack(pile st, char *str);
void    ft_putstr(char *str);
void    swap(int *y, int *z);
void    print_stack(pile st);
pile    rotate_stack(pile st, char *str);
pile    new_pile(void);
void    push_to_stack(pile *a, pile *b, char *str);
pile    pop_stack(pile st);
pile    prep_four(pile a);
pile    prep_five(pile a);

#endif
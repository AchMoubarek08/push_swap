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
void    check_dup(pile a);
void    insertionsort(pile *a, pile *b, int argc);
int     getmin(pile a);
pile    get_last(pile a);
void    reverse_rotate(pile *a, char *str);
void    fill_a(pile *a, pile *b, int argc);
void    getcunk(pile cp, int argc, int *p, char **argv);
pile    cpy_stack(int argc, char **argv);
void    extractchunk(pile *a,pile *b ,int max,int argc, char **argv);

#endif
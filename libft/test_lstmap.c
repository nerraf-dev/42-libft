#include "libft.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

void map_func(void *content)
{
    // Convert content to uppercase
    char *str = (char *)content;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}

void del_func(void *content)
{
    // Free the content
    free(content);
}

void test_ft_lstmap()
{
    // Test case 1: Empty list
    t_list *lst = NULL;
    t_list *result = ft_lstmap(lst, &map_func, &del_func);
    assert(result == NULL);
    printf("Test 1 passed\n");

    // Test case 2: Non-empty list
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");
    t_list *node3 = ft_lstnew("!");
    node1->next = node2;
    node2->next = node3;
    lst = node1;

    t_list *mapped_lst = ft_lstmap(lst, &map_func, &del_func);
    assert(mapped_lst != NULL);
    assert(strcmp(mapped_lst->content, "HELLO") == 0);
    assert(strcmp(mapped_lst->next->content, "WORLD") == 0);
    assert(strcmp(mapped_lst->next->next->content, "!") == 0);
    assert(mapped_lst->next->next->next == NULL);
    printf("Test 2 passed\n");
}

                                                     
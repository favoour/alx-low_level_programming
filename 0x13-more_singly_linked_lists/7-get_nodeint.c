tint_t *tmp;
        if (!head)
                return (NULL);
        tmp = head;
        /* Checking if the node exists */
        while (tmp)
        {
                tmp = tmp->next;
                i++;
        }
        if (index >= i)
        {
                return (NULL);
        }
        i = 0;
        tmp = head;

        /* Moving the tmp pointer to the index position */
        while (tmp && i < index)
        {

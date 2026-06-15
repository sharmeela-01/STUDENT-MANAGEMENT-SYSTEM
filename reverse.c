#include "student.h"
void reverse_list(STU *node)
{
    if (node!=0)
    {
    	reverse_list(node->next); 
    	printf("| %-5d | %-20s | %-6.2f |\n",node->roll, node->name, node->per);
    }
}


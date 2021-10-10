// Q29. Delete a given Node when a node is given. (O(1) solution).


void deleteNode(Node *node_to_be_del)
            {
                //if the node is the last node then deleting is would make its value null
                //and its previous node will now be pointing to null
                if (node_to_be_del->next == NULL)
                {
                    free(node_to_be_del);
                    return;
                }
                
                // if the node to be deleted is the first or
                // any node in between the linked list.
                //copy the data stored in next node into the given node
                //and free the next one such that given node's data will get erased/deleted
                Node* temp = node_to_be_del->next;
                node_to_be_del->data = temp->data;
                node_to_be_del->next = temp->next;
                free(temp);
            }
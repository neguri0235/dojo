#linked list

class ListNode:
    def __init__(self, data = 0, next = None):
        self.data = data
        self.next = next


def insert_after(node, new_node):
    new_node.next = node.next
    node.next = new_node

def delete_after(node):
    node.next = node.next.next

def insert_tail(node, new_node):
    while(node.next is not None):
        node = node.next
    node.next = new_node


def merge_two_sorted_lists(L1, L2):
    
    dummy_head = tail  = ListNode()

    while L1 and L2:
        if L1.data < L2.data:
            tail.next, L1 = L1, L1.next
        else:
            tail.next, L2 = L2, L2.next
        tail = tail.next
    tail.next = L1 or L2

    print_lists(dummy_head)

def print_lists(lists):
    lists = lists.next # remove dummy 
    while(lists is not None):
        print(lists.data, end = ' ')
        lists = lists.next

if __name__ == "__main__":
    l1 = ListNode(2)
    insert_after(l1, ListNode(5))
    insert_tail(l1, ListNode(7))

    l2 = ListNode(3)
    insert_tail(l2, ListNode(11))

    merge_two_sorted_lists(l1, l2)
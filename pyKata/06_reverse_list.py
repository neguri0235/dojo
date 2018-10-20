class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


def print_node(n):
    while n is not None:
        print (n.val, end = ' ')
        n = n.next

def reverse(n):
    cur = n
    pre = None

    while n is not None:
        cur = n.next
        n.next = pre
        pre = n
        n = cur

    return pre


if __name__ == "__main__":

    n = ListNode(1)
    n.next = ListNode(2)
    n.next.next = ListNode(3)
    n.next.next.next = ListNode(4)
    n.next.next.next.next = ListNode(5)

    print_node(n)
    print('\n')
    r = reverse(n)
    print_node(r)
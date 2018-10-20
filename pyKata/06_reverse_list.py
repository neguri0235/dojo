class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


def print_node(n):
    while n is not None:
        print (n.val, end = ' ')
        n = n.next

def reverse_my(n):
    cur = n
    pre = None

    while n is not None:
        cur = n.next
        n.next = pre
        pre = n
        n = cur

    return pre



def reverse(n):
    prev = None
    cur = n
    while cur is not None:
        next = cur.next
        cur.next = prev
        prev = cur
        cur = next
    return prev

if __name__ == "__main__":

    n = ListNode(1)
    n.next = ListNode(2)
    n.next.next = ListNode(3)
    n.next.next.next = ListNode(4)
    n.next.next.next.next = ListNode(5)

    print_node(n)
    r = reverse_my(n)
    print("reverse result")
    print_node(r)
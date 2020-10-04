class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:

    def __init__(self):
        self.head = None

    def push(self, newdata):
        newnode = Node(newdata)
        newnode.next = self.head
        self.head = newnode

    def delete_node(self, key):

        global prev
        temp = self.head

        if temp is not None:
            if temp.data == key:
                self.head = temp.next
                temp = None
                return

        while temp is not None:
            if temp.data == key:
                break
            prev = temp
            temp = temp.next

        if temp is None:
            return

        prev.next = temp.next
        temp = None

    def print_list(self):

        temp = self.head
        while temp:
            print(temp.data, end=" ")
            temp = temp.next


if __name__ == "__main__":
    llst = LinkedList()

    llst.head = Node(2)
    second = Node(3)
    third = Node(4)

    llst.head.next = second
    second.next = third

    llst.push(1)

    print("Before deletion")
    llst.print_list()

    llst.delete_node(3)
    print("\nAfter deletion")
    llst.print_list()

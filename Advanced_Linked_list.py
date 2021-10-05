# Create the Node class
class Node:
   def __init__(self, data):
      self.data = data
      self.next = None
      self.prev = None

# Create the doubly linked list
class doubly_linked_list:
   def __init__(self):
      self.head = None

# Define the push method to add elements		
   def push(self, NewVal):
      NewNode = Node(NewVal)
      NewNode.next = self.head
      if self.head is not None:
         self.head.prev = NewNode
      self.head = NewNode

# Define the insert method to insert the element		
   def insert(self, prev_node, NewVal):
      if prev_node is None:
         return
      NewNode = Node(NewVal)
      NewNode.next = prev_node.next
      prev_node.next = NewNode
      NewNode.prev = prev_node
      if NewNode.next is not None:
         NewNode.next.prev = NewNode

# Define the method to print the linked list 
   def listprint(self, node):
      while (node is not None):
         print(node.data),
         last = node
         node = node.next

dllist = doubly_linked_list()
dllist.push(12)
dllist.push(8)
dllist.push(62)
dllist.insert(dllist.head.next, 13)
dllist.listprint(dllist.head)

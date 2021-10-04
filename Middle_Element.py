# Python3 program to find middle of linked list
# Node class
class Node:

	# Function to initialise the node object
	def __init__(self, data):
		self.data = data # Assign data
		self.next = None # Initialize next as null


# Linked List class contains a Node object
class LinkedList:

	# Function to initialize head
	def __init__(self):
		self.head = None

	# Function to insert a new node at the beginning
	def push(self, new_data):
		new_node = Node(new_data)
		new_node.next = self.head
		self.head = new_node

	# Print the linked list
	def printList(self):
		node = self.head
		while node:
			print(str(node.data) + "->", end="")
			node = node.next
		print("NULL")

	# Function that returns middle.
	def printMiddle(self):
		# Initialize two pointers, one will go one step a time (slow), another two at a time (fast)
		slow = self.head
		fast = self.head

		# Iterate till fast's next is null (fast reaches end)
		while fast and fast.next:
			slow = slow.next
			fast = fast.next.next
		
		# return the slow's data, which would be the middle element.
		print("The middle element is ", slow.data)

# Code execution starts here
if __name__=='__main__':

	# Start with the empty list
	llist = LinkedList()

	for i in range(5, 0, -1):
		llist.push(i)
		llist.printList()
		llist.printMiddle()

# Python program to merge a linked list into another at
# alternate positions

class Node(object):
	def __init__(self, data:int):
		self.data = data
		self.next = None


class LinkedList(object):
	def __init__(self):
		self.head = None
		
	def push(self, new_data:int):
		new_node = Node(new_data)
		new_node.next = self.head
		# 4. Move the head to point to new Node
		self.head = new_node
		
	# Function to print linked list from the Head
	def printList(self):
		temp = self.head
		while temp != None:
			print(temp.data)
			temp = temp.next
			
	# Main function that inserts nodes of linked list q into p at alternate positions.
	# Since head of first list never changes
	# but head of second list/ may change,
	# we need single pointer for first list and double pointer for second list.
	def merge(self, p, q):
		p_curr = p.head
		q_curr = q.head

		# swap their positions until one finishes off
		while p_curr != None and q_curr != None:

			# Save next pointers
			p_next = p_curr.next
			q_next = q_curr.next

			# make q_curr as next of p_curr
			q_curr.next = p_next # change next pointer of q_curr
			p_curr.next = q_curr # change next pointer of p_curr

			# update current pointers for next iteration
			p_curr = p_next
			q_curr = q_next
			q.head = q_curr



# Driver program to test above functions
llist1 = LinkedList()
llist2 = LinkedList()

# Creating LLs

# 1.
llist1.push(3)
llist1.push(2)
llist1.push(1)
llist1.push(0)

# 2.
for i in range(8, 3, -1):
	llist2.push(i)

print("First Linked List:")
llist1.printList()

print("Second Linked List:")
llist2.printList()

# Merging the LLs
llist1.merge(p=llist1, q=llist2)

print("Modified first linked list:")
llist1.printList()

print("Modified second linked list:")
llist2.printList()

# Python3 program to check if linked
# list is palindrome using stack
class Node:
	def __init__(self,data):
		
		self.data = data
		self.ptr = None
		
# Function to check if the linked list
# is palindrome or not
def ispalindrome(head):
	
	# Temp pointer
	slow = head

	# Declare a stack
	stack = []
	
	ispalin = True

	# Push all elements of the list
	# to the stack
	while slow != None:
		stack.append(slow.data)
		
		# Move ahead
		slow = slow.ptr

	# Iterate in the list again and
	# check by popping from the stack
	while head != None:

		# Get the top most element
		i = stack.pop()
		
		# Check if data is not
		# same as popped element
		if head.data == i:
			ispalin = True
		else:
			ispalin = False
			break

		# Move ahead
		head = head.ptr
		
	return ispalin

# Driver Code

# Addition of linked list
one = Node(1)
two = Node(2)
three = Node(3)
four = Node(4)
five = Node(3)
six = Node(2)
seven = Node(1)

# Initialize the next pointer
# of every current pointer
one.ptr = two
two.ptr = three
three.ptr = four
four.ptr = five
five.ptr = six
six.ptr = seven
seven.ptr = None

# Call function to check palindrome or not
result = ispalindrome(one)

print("isPalindrome:", result)

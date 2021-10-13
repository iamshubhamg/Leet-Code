result = []

def isSafe(board, row, col):

	# Check this row on left side
	for i in range(col):
		if (board[row][i]):
			return False

	# Check upper diagonal on left side
	i = row
	j = col
	while i >= 0 and j >= 0:
		if(board[i][j]):
			return False
		i -= 1
		j -= 1

	# Check lower diagonal on left side
	i = row
	j = col
	while j >= 0 and i < 4:
		if(board[i][j]):
			return False
		i = i + 1
		j = j - 1

	return True


def solveNQUtil(board, col):
	if (col == 4):
		v = []
		for i in board:
		for j in range(len(i)):
			if i[j] == 1:
			v.append(j+1)
		result.append(v)
		return True

	res = False
	for i in range(4):

		if (isSafe(board, i, col)):

			# Place this queen in board[i][col]
			board[i][col] = 1

			# Make result true if any placement
			# is possible
			res = solveNQUtil(board, col + 1) or res

			board[i][col] = 0 # BACKTRACK

	return res

def solveNQ(n):
	result.clear()
	board = [[0 for j in range(n)]
			for i in range(n)]
	solveNQUtil(board, 0)
	result.sort()
	return result

n = int(input())
res = solveNQ(n)
print(res)

from IPython.display import clear_output

#to display board

def display_board(board):
    clear_output()
    
    print('     |   |  ')
    print('   '+board[7]+' | '+board[8]+' | '+board[9])
    print('     |   |  ')
    print('---------------')
    print('     |   |  ')
    print('   '+board[4]+' | '+board[5]+' | '+board[6])
    print('     |   |  ')
    print('---------------')
    print('     |   |  ')
    print('   '+board[1]+' | '+board[2]+' | '+board[3])
    print('     |   |  ')
 
 
#to select X or O

def player_input():
    marker = ''
    
    
    while not (marker == 'X' or marker == 'O'):
        marker = input("player1: do you want to be 'X' or 'O'").upper()
        
    if marker == 'X':
        return ('X', 'O')
    else:
        return ('O', 'X') 
    
    
#to insert values in position
    
def place_marker(board,marker,position):
    board[position] = marker
    

#to check if someone has won or not    
    
def win_check(board,mark):
    return ((board[7]==mark and board[8]==mark and board[9]==mark) or #horizontal check
       (board[4]==mark and board[5]==mark and board[6]==mark) or #horizontal check
       (board[1]==mark and board[2]==mark and board[3]==mark) or #horizontal check
       (board[1]==mark and board[4]==mark and board[7]==mark) or #vertical check
       (board[2]==mark and board[5]==mark and board[8]==mark) or #vertical check
       (board[3]==mark and board[6]==mark and board[9]==mark) or #vertical check
       (board[1]==mark and board[5]==mark and board[9]==mark) or #diagonal check
       (board[3]==mark and board[5]==mark and board[7]==mark)) #diaginal check


#for selecting a player who will play first

import random

def choose_first():
    if random.randint(0, 1) == 0:
        return 'Player 2'
    else:
        return 'Player 1'
    
#to check if selected position on board is empty
    
def space_check(board,position):
    return board[position] == ' '

#to check if board is full 

def full_board_check(board):
    for i in range(1,10):
        if space_check(board,i):
            return False
    return True

#for players choice

def player_choice(board):
    position = 0
    
    while position not in [1,2,3,4,5,6,7,8,9] or not space_check(board, position):
        position = int(input('choose your next position (0-9)'))
        
    return position

#to replay

def replay():
    return input('do you want to play again yes or No').lower().startswith('y')

#final code logic

print('welcome to TIC TAC TOE')

while True:
    #RESET THE BOARD
    board = [' '] * 10
    player1_marker, player2_marker = player_input()
    turn = choose_first()
    print(turn+' wil go first')
    
    play_game = input('Ready to play? Enter y or n')
    if play_game.lower()[0] == 'y':
        game_on = True
    else:
        game_on = False
        
    while game_on:
        if turn == 'Player 1':
            
            
            display_board(board)
            position = player_choice(board)
            place_marker(board,player1_marker,position)
            
            if win_check(board,player1_marker):
                display_board(board)
                print('player1 WON!!')
                game_on = False
            else:
                if full_board_check(board):
                    display_board(board)
                    print('the game is draw!')
                    break
                else:
                    turn = 'Player 2'
        else:
            print("player2's turn")
            display_board(board)
            position = player_choice(board)
            place_marker(board,player2_marker,position)
            
            if win_check(board,player2_marker):
                display_board(board)
                print('player2 WON!!')
                game_on = False
            else:
                if full_board_check(board):
                    display_board(board)
                    print('the game is draw!')
                    break
                else:
                    turn = 'Player 1'
    if not replay():
        break

import random #import random function for options com

def get_choices():
    player_choice = input("Enter a choice (rock,paper,scissors: )") # print out for player to choose
    options = ["rock","paper","scissors"] # make options for com
    computer_choice = random.choice(options) # create a function call "random" on options 
    choices = {"player": player_choice, "computer": computer_choice } # print out player choice and com choice 
    return choices # return the value out of function " get_choices " by def in python 

# Create a function for check who win who lose, and return a value 
def check_win(player, computer): 
    print(f"You Choose {player} ,computer choose {computer}")  # print out player choose and com choose, above is how many choice are they for player
    
    # Nested if/elif/else
    # If even, the value are the same first 
    if player == computer:
        return "Aww.... it's a tie"
    
# Three options can be base on player choose
    elif player == "rock":
        if computer == "scissors":
            return "player win, computer being smashhhh"
        else:
            return "paper covers rock , player lose"
        
    elif player == "paper":
        if computer == 'rock':
            return "player win, paper have been warp all the rockkkk "
        else:
            return "scissors cut paper , player lose"
    
    elif player == "scissors":
        if computer == "paper":
            return "Player Win, scissors already cut paper by two itemssss"
        else:
            return "rock smashes, player lose"
# No need finish with else, it just need if and elif or else if we need to
choices = get_choices() # run the function get_choices first

result = check_win(choices["player"], choices["computer"]) # How the result is counting 
print(result) # print result after have player choices/check win already done.


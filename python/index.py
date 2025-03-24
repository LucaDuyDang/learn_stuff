import random

def get_choices():
    player_choice = input("Enter a choice (rock,paper,scissors: )")
    options = ["rock","paper","scissors"]
    computer_choice = random.choice(options)
    choices = {"player": player_choice, "computer": computer_choice } 
    return choices

def check_win(player, computer):
    print(f"You Choose {player} ,computer choose {computer}")
    if player == computer:
        return "it's a tie"
    
    elif player == "rock":
        if computer == "scissors":
            return "player win"
        else:
            return "paper covers rock , player lose"
        
    elif player == "paper":
        if computer == 'rock':
            return "player win"
        else:
            return "scissors cut paper , player lose"
    
    elif player == "scissors":
        if computer == "paper":
            return "Player Win"
        else:
            return "rock smashes, player lose"
        
choices = get_choices()

result = check_win(choices["player"], choices["computer"])
print(result)


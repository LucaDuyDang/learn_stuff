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
    # elif player == "rock" and computer == "scissors":
    #     return "Rock smashes scissors! Player Win"
    # elif player == "rock" and computer == "paper":
    #     return "Rock has been warp up! Computer Win"
    # elif player == "rock" and computer == "rock":
    #     return "Rock been hit by Rock! It's a tie "
    # elif player == "paper" and computer == "scissors":
    #     return "Paper has been cut by Scissors! Computer Win"
    # elif player == "paper" and computer == "rock":
    #     return "Paper warp up the Rockkk! Player Win"
    # elif player == "paper" and computer == "paper":
    #     return "Paper has been warp each other! It's a tie"
    # elif player == "scissors" and computer == "rock":
    #     return "Scissors has been smashes! Computer Win"
    # elif player == "scissors" and computer == "paper":
    #     return "Scissors already cut paper in half! Player Win"
    # elif player == "scissors" and computer =="scissors":
    #     return "Scissors can't cut thought each other! It's a tie"
    
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
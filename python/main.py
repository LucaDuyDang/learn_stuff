def get_choices():
    player_choice = input("Enter a choice (rock,paper,scissors: )")
    options = ["rock","paper","scissors"]
    computer_choice = random.choice(options)
    choices = {"player": player_choice, "computer": computer_choice } 
    return choices

# playerName  = ['Hoang Duy', ' Linh chi ', ' Anh Nhi']
playerName = input("Enter Player Name ")

for playerPlay in playerName:
    print(playerPlay)
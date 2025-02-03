try:
    with open('txt.txt', 'r') as file:
        content = file.read()
        print(content)
except FileNotFoundError:
    print("The file was not found. Please check the file path and try again.")

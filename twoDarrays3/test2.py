try:
    f=open('txt1.txt')
except FileNotFoundError as msg:
    print("not found")
else:
    # print("else") 
    print(f.read())
    
       
        
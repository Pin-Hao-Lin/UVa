while True:
    try:
        print(int(input())*int(input()))
    except EOFError:
        break
run = 1
while True:
    n = int(input())
    if n == 0: break
    print(f"Run #{run}: ", end='')
    run += 1

    ans = '\n'.join([input() for _ in range(n)])
    out = '\n'.join([input() for _ in range(int(input()))])
    y = len(ans) - n + 1
    if ans == out:
        print(f"Acceped {y}")
    elif (''.join(ans.split()) == ''.join(out.split())):
        print(f"Presentation Error {y}")
    else:
        print(f"Wrong Answer {y}")
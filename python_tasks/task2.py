a=(10,15,20,30)

def oddoreven(a):
    zero = 0
    even = 0
    odd = 0
    for x in a:
        if x==0:
            zero += 1
        elif x%2==0:
            even += 1
        else:
            odd += 1
    print(f"odd={odd},even={even},zero={zero}")
    

oddoreven(a)


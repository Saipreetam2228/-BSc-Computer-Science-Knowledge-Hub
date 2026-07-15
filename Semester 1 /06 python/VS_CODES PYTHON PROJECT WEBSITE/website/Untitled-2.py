def gcd(5,4):
    cf=[]
    for i in range(1,min(5,4)+1):
        if (5%i)==0 and (4%i)==0:
            cf.append(i)
    return(cf[-1])
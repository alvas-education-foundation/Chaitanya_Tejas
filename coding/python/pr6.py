def pal(n):
    if int(n)==int(n[::-1]):
        return 'True'
    else:
        return 'False'
v=pal('1012')
print(v)

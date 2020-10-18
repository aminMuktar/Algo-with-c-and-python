alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
str_in=input('enter the string to encrypt:')
shift=int(input('how many shift:'))
#n=length of input string
n=len(str_in)
str_out=""
for i in range(n):
    c=str_in[i]
    loc=alpha.find(c)
    new_loc=(loc+shift)%26
    str_out+=alpha[new_loc]
print("obfuscated version {}".format(str_out))

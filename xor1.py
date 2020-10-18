import base64
text=input('enter the string')
key=input('enter the key')
n=len(text)
cipher=''
for i in range(n):
    t=text[i]
    k=text[i%len(key)]
    x=ord(k)^ord(t)
    cipher+=chr(x)
    print(base64.b64encode(cipher.encode()))

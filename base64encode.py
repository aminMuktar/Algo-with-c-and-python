import base64
str_in=str(input('enter string to encode to base 64:'))
b=base64.b64encode(bytes(str_in,'utf-8'))
print(b)



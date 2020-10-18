import base64
with open('Screenshot_2020-10-17_16-56-13.png','rb') as f:
    data=f.read()
print(data.encode('base64'))

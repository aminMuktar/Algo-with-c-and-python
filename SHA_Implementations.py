import hashlib
inp=str(input("enter any string to hash:"))
#sha256
s1=hashlib.sha1(inp.encode()).hexdigest()
s256=hashlib.sha256(inp.encode()).hexdigest()
mds=hashlib.md5(inp.encode()).hexdigest()
print('sha256 = {}'.format(s256))
print('sha1 = {}'.format(s1))
print('md5 = {}'.format(mds))

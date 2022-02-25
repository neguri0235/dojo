import hashlib
a = input()
b = hashlib.sha256(a.encode())
print(b.hexdigest())
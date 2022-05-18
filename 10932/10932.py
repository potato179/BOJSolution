import hashlib
print(hashlib.sha512(str(input()).encode('utf-8')).hexdigest())
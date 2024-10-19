f = open("test.txt", "r")
strng = f.read()
strSize = len(strng.encode('utf-8'))
print(strSize)
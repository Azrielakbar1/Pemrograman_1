def reversed(i) :
  reversed = 0
  while (i > 0) :
    digit = i % 10
    reversed = reversed * 10 + digit
    i //= 10
  return reversed
A,B = map(int,input("").split())
A = reversed(A)
B = reversed(B)
C = A + B
print(f"{reversed(C)}")
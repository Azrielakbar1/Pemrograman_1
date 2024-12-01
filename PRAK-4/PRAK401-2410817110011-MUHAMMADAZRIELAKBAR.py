angka, simbol  = input().split()
angka = int(angka)

for x in range(1, 51, 1):
  if x % angka ==0:
    print(simbol, end=" ")
  else :
    print(x, end=" ")  
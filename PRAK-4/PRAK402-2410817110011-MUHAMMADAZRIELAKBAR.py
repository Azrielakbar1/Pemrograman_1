angka = input()
angka = int(angka)

for i in range(1, angka+1, 2) : print(i ,end=" ")
print()
if angka % 2 != 0 : angka -=1
for i in range(angka, 1, -2) :  print(i ,end=" ") 

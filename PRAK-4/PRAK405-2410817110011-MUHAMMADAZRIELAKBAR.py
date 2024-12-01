pengali, kelipatan = map(int, input().split())
total = 0

for i in range (1 , pengali + 1, 1):
  jumlah = 0
  print("(", end="")
  for j in range (i, 0, -1) :
    nilai = j * kelipatan
    print(f"{j} * {kelipatan}", end="")
    jumlah = jumlah + nilai
    if j > 1 :print(") + (", end="")
  print(f") = {jumlah}")
  total = total + jumlah
print(f"{total}")

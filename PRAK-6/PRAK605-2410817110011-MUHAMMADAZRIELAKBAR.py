n = int(input())

A = []
B = []
hasil = [[0] * n for _ in range(n)]

print("Matriks A")
for i in range(n):
  row = list(map(int, input().split()))
  A.append(row)

print("Matriks B")
for i in range(n):
  row = list(map(int, input().split()))
  B.append(row)

for i in range(n):
 for j in range(n):
    hasil[i][j] = 0
    for k in range(n):
      hasil[i][j] += A[i][k] * B[k][j]
print("Matriks AXB")
for row in hasil:
  print(" ".join(map(str, row)))
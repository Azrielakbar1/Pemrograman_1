baris, kolom = map(int, input().split())
elemen = list(map(int, input().split()))
matriks = []
index = 0
for a in range(baris):
    angka = elemen[index:index + kolom]
    matriks.append(angka)
    index += kolom
print()
for a in range(baris):
    for b in range(kolom):
        print(matriks[a][b], end=" ")
    print()

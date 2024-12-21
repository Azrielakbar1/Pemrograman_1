baris, kolom = map(int, input().split())
elemen = list(map(int, input().split()))
matriks = []
indeks = 0
for a in range(baris):
    angka = elemen[indeks:indeks + kolom]
    matriks.append(angka)
    indeks += kolom
print()
for a in range(baris):
    for b in range(kolom):
        print(matriks[a][b], end=" ")
    print()

def hitung(nilai1, nilai2) :
  hasil = nilai1 - nilai2
  return -hasil if hasil < 0 else hasil
def mutlak(angka) :
  return angka if angka>= 0 else -angka
def main() :
  a,b,c,d = map(int, input("").split())
  Hasil = hitung(a,c) + hitung(b, d)
  print(Hasil)
main()
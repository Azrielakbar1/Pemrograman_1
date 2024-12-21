def panjang_kalimat(kalimat):
    panjang = 0
    while kalimat[panjang:]:
        panjang += 1
    return panjang


kode = input()
pesan = input()

if panjang_kalimat(kode) != panjang_kalimat(pesan): 
  print("Panjang kalimat berbeda, pesan palsu")
  exit()

bintang = 0
pagar = 0
hasil = ""

for i in range(panjang_kalimat(kode)):
  if kode[i] == ' ' and pesan[i] == ' ':
    hasil += ' '
    continue
  if kode[i] == pesan[i]:
    hasil += '*'
    bintang += 1
  else:
    hasil += '#'
    pagar += 1

print(hasil)
print("* =", bintang)
print("# =", pagar)

if bintang >= pagar:
  print("Pesan Asli")
else:
  print("Pesan Palsu")
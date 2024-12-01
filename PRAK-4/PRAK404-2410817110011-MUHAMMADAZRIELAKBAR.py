while (True):
  print("Pilih Program")
  print("1. Penjumlahan")
  print("2. Pengurangan")
  print("3. Perkalian ")
  print("4. Pembagian")
  print("5. Exit")
  pilihan = int(input("Masukkan Pilihan :"))
  if pilihan == 5 :
    print("Terimakasih, telah menggunakan kalkulator AZRIELAKBAR")
    break
  elif pilihan < 0 or pilihan > 5 :
    print("Input anda salah, silahkan coba lagi")
    continue
  NilaiPertama = float(input("Masukkan Nilai Pertama :"))
  NilaiKedua = float(input("Masukkan Nilai Kedua :"))

  if pilihan == 1 : 
    print(f"Hasil penjumlahan antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {NilaiPertama + NilaiKedua:.2f}")
  elif pilihan == 2 :
    print(f"Hasil pengurangan antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {NilaiPertama - NilaiKedua:.2f}")  
  elif pilihan == 3 :
    print(f"Hasil perkalian antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {NilaiPertama * NilaiKedua:.2f}")    
  elif pilihan == 4 :
    print(f"Hasil pembagian antara {NilaiPertama:.2f} dengan {NilaiKedua:.2f} adalah {NilaiPertama / NilaiKedua:.2f}")    
  


jumlah_detik = int(input(""))
hari = jumlah_detik // 86400
jumlah_detik -= hari * 86400
jam = jumlah_detik // 3600 ; menit = (jumlah_detik % 3600) // 60 ; detik = jumlah_detik % 60
if jumlah_detik < 0 : print("Error")
elif jumlah_detik == 0 : print("00:00:00")
elif hari > 0: print(f"{hari} hari {jam:02}:{menit:02}:{detik:02}")
else : print(f"{jam:02}:{menit:02}:{detik:02}")
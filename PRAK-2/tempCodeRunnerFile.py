#test case 1
pi = 22.0/7.00
jari_jari=float(input(""))
tinggi=float(input(""))

#volume
volume = pi * jari_jari * jari_jari * tinggi
#luas permukaan
luas_permukaan = 2 * pi * jari_jari * (jari_jari + tinggi)
#Menghitung keliling
keliling = 2 * pi * jari_jari

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas_permukaan:.2f}")
print(f"Keliling = {keliling:.2f}")

#test case 2
pi1 = 22.0/7.00
jari_jari1, tinggi1=map(float, input("").split())

#volume
volume1 = pi1 * jari_jari1 * jari_jari1 * tinggi1
#luas permukaan
luas_permukaan1 = 2 * pi1 * jari_jari1 * (jari_jari1 + tinggi1)
#Menghitung keliling
keliling1 = 2 * pi1 * jari_jari1

print(f"Volume = {volume1:.2f}")
print(f"Luas = {luas_permukaan1:.2f}")
print(f"Keliling = {keliling1:.2f}")
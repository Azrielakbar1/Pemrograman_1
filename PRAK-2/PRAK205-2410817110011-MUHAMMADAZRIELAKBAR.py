A, B=map(int, input("").split())
alas = (B * B - A * A) / 9
print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {A:.0f} cm")
keliling = A+B+alas
print(f"Keliling = {keliling:.0f} cm")
luas = 0.5 * alas * A
print(f"Luas = {luas:.0f}^2 cm")

A1 = int(input(""))
B1 = int(input(""))
alas1 = (B1 * B1 - A1 * A1) / 63
print(f"Alas = {alas1:.0f} cm")
print(f"Tinggi = {A1:.0f} cm")
keliling1 = A+B+alas1
print(f"Keliling = {keliling1:.0f} cm")
luas1 = 0.5 * alas1 * A1
print(f"Luas = {luas1:.0f}^2 cm")
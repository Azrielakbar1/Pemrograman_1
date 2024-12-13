def maksimal(a,b) :
  return a if a > b else b
def minimal(a,b) :
  return a if a < b else b
batas = 0
batas = []
maks = -100000
minim = 100000
bilangan = int(input(""))
while len(batas) < bilangan :
  nilai = input()
  _nilai = nilai.split()
  for i in _nilai:
    batas.append(int(i))
for i in batas:
  maks = maksimal(maks,i)
  minim = minimal(minim,i)
print(maks,minim)

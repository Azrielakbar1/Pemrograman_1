jumlah = int(input())
zetsu = list(map(int, input().split()))
for a in range(jumlah):
    print(zetsu[a] * (a + 1), end=" ")

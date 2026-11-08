#1
nilai = [60, 85, 40, 90, 75, 50, 95]

if 85 in nilai:
    posisi_85 = nilai.index(85)
    print("Nilai 85 ditemukan di index", posisi_85)
else:
    print("Nilai 85 tidak ditemukan")

lulus = [x for x in nilai if x >= 75]
print("Daftar nilai yang lulus:", lulus)

#2
produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]

ada_keyboard = "Keyboard" in produk
print("Apakah Keyboard ada?", ada_keyboard)

hasil_filter = [x for x in produk if len(x) > 5]
print("Hasil filter (panjang > 5):", hasil_filter)

#3
suhu = [-3, 5, 0, -12, 8, 15, -1, 22]

ada_0 = 0 in suhu
print("Apakah 0 ada?", ada_0)

hasil_filter = [x for x in suhu if x > 0]
print("Hasil filter (> 0):", hasil_filter)

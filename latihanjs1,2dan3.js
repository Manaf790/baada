// 1
const nilai = [60, 85, 40, 90, 75, 50, 95];

if (nilai.includes(85)) {
  const posisi85 = nilai.indexOf(85);
  console.log("Nilai 85 ditemukan di index", posisi85);
} else {
  console.log("Nilai 85 tidak ditemukan");
}

const lulus = nilai.filter(x => x >= 75);
console.log("Daftar nilai yang lulus:", lulus);


// 2
const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

const adaKeyboard = produk.includes("Keyboard");
console.log("Apakah Keyboard ada?", adaKeyboard);

const hasilFilter2 = produk.filter(x => x.length > 5);
console.log("Hasil filter (panjang > 5):", hasilFilter2);


// 3
const suhu = [-3, 5, 0, -12, 8, 15, -1, 22];

const ada0 = suhu.includes(0);
console.log("Apakah 0 ada?", ada0);

const hasilFilter3 = suhu.filter(x => x > 0);
console.log("Hasil filter (> 0):", hasilFilter3);

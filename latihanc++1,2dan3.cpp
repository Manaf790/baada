#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//1
int main() {
  
    vector<int> nilai = {60, 85, 40, 90, 75, 50, 95};
 
    
    auto it_85 = find(nilai.begin(), nilai.end(), 85);
    if (it_85 != nilai.end()) {
        int posisi_85 = distance(nilai.begin(), it_85);
        cout << "Nilai 85 ditemukan di index " << posisi_85 << endl;
    } else {
        cout << "Nilai 85 tidak ditemukan" << endl;
    }
 
    
    vector<int> lulus;
    copy_if(nilai.begin(), nilai.end(), back_inserter(lulus), [](int x) {
        return x >= 75;
    });
 
    cout << "Daftar nilai yang lulus: ";
    for (int x : lulus) {
        cout << x << " ";
    }
    cout << endl;
 
    //2
    cout << endl;

    vector<string> produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};
 
    auto it_keyboard = find(produk.begin(), produk.end(), "Keyboard");
    bool ada_keyboard = (it_keyboard != produk.end());
    cout << "Apakah Keyboard ada? " << (ada_keyboard ? "True" : "False") << endl;
 
  
    vector<string> hasil_filter2;
    copy_if(produk.begin(), produk.end(), back_inserter(hasil_filter2), [](string x) {
        return x.length() > 5;
    });
 
    cout << "Hasil filter (panjang > 5): ";
    for (string x : hasil_filter2) {
        cout << x << " ";
    }
    cout << endl;
 
    //3
    cout << endl;
   
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};
 
    auto it_0 = find(suhu.begin(), suhu.end(), 0);
    bool ada_0 = (it_0 != suhu.end());
    cout << "Apakah 0 ada? " << (ada_0 ? "True" : "False") << endl;
 

    vector<int> hasil_filter3;
    copy_if(suhu.begin(), suhu.end(), back_inserter(hasil_filter3), [](int x) {
        return x > 0;
    });
 
    cout << "Hasil filter (> 0): ";
    for (int x : hasil_filter3) {
        cout << x << " ";
    }
    cout << endl;
 
    return 0;
}

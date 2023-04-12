# Studi Kasus Sistem Perpustakaan

Buatlah sebuah sistem perpustakaan dengan kriteria berikut : 
<br>
Note : 
1. Gunakan ArrayList<> untuk memudahkan penyimpanan data pada database class
<br>
Lebih lengkapnya bisa dilihat pada : https://www.geeksforgeeks.org/arraylist-in-java/

### Ketika saya adalah user 
1. Saya bisa melakukan proses authentikasi (login/registrasi)
2. Saya bisa meminjam buku yang ada di perpustakaan
3. Saya bisa terkena denda jika melewati masa pinjaman
4. Saya bisa membeli buku menggunakan saldo yang ada di akun saya.
5. Buku yang saya pinjam dan beli harus masuk ke dalam informasi akun saya
6. Saya bisa melakuan topup untuk mengisi saldo saya

### Ketika saya adalah admin
1. Saya bisa melakukan proses authentikasi admin (login/registrasi admin version)
2. Saya bisa melakukan ban pada user ketika buku tidak dikembalikan selama 1 bulan <br>
setelah masa pinjaman selesai
3. Saya bisa menambahkan buku ke dalam database
4. Saya juga bisa melakukan operasi delete buku dari database
5. Saya juga bisa melakukan operasi edit buku yang ada pada database

### Database Class
1. Saya menyimpan semua informasi akun user yang sudah teregistrasi
2. Saya menyimpan semua informasi buku yang ditambahkan oleh admin
3. (Bonus) Saya bisa membaca semua informasi yang ada pada users.txt dan <br>
mengkonversi data tersebut ke dalam array object
4. (Bonus) Saya bisa menyimpan hasil registrasi user dan perubahan akun user setelah <br>
user melakukan sesuatu (Membeli, Meminjam, TopUp, Kena ban oleh admin)
5. (Bonus) Saya juga bisa menyimpan hasil buku yang telah ditambahkan admin dari array ke books.txt
6. (Bonus) Saya juga bisa membaca semua informasi yang ada pada books.txt dan <br>
mengkonversi data tersebut ke dalam array object

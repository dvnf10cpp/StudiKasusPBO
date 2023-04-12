# Studi Kasus Sistem Perpustakaan

Buatlah sebuah sistem reservasi kereta dengan kriteria berikut : 
<br>
Note : 
1. Gunakan ArrayList<> untuk memudahkan penyimpanan data pada database class
<br>
Lebih lengkapnya bisa dilihat pada : https://www.geeksforgeeks.org/arraylist-in-java/
2. Inspirasi ini lebih jelasnya terambil dari aplikasi KAI Access

### Ketika saya adalah user 
1. Saya bisa melakukan proses authentikasi (login/registrasi)
2. Saya bisa membeli tiket yang tersedia pada kereta
3. Saya bisa melakukan topup untuk mengisi saldo saya
4. Setelah membeli tiket, akun saya memiliki informasi mengenai tiket tersebut
5. Saya bisa melakukan refund ticket saya

### Database Class
1. Saya menyimpan semua informasi akun user yang sudah teregistrasi
2. Saya menyimpan semua informasi kereta yang ada
3. (Bonus) Saya bisa membaca semua informasi yang ada pada users.txt dan <br>
mengkonversi data tersebut ke dalam array object
4. (Bonus) Saya bisa menyimpan hasil registrasi user dan perubahan akun user setelah <br>
user melakukan sesuatu (Membeli, TopUp)
6. (Bonus) Saya juga bisa membaca semua informasi yang ada pada trains.txt dan <br>
mengkonversi data tersebut ke dalam array object

### Train class
1. Saya merupakan objek kereta
2. Saya bisa menampilkan kursi yang ada pada kereta saya
3. Ketika ada user booking kereta, otomatis logo pada tempat duduk berubah
4. Saya memiliki jadwal keberangkatan dan status saya yang hanya ketika suatu kondisi memenuhi
<br> (Kereta sudah penuh/Kereta sudah berangkat)

### App Class
1. Saya yang mengatur arah dan bagaimana app berjalan


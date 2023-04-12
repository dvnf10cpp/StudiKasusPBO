# Studi Kasus Sistem Bioskop

Buatlah sebuah sistem perpustakaan dengan kriteria berikut : 
<br>
Note : 
1. Gunakan ArrayList<> untuk memudahkan penyimpanan data pada database class
<br>
Lebih lengkapnya bisa dilihat pada : https://www.geeksforgeeks.org/arraylist-in-java/
2. Referensi studi kasus diambil dari tugas hackerrank pemdas multidimensi array, link bisa dilihat pada berikut : https://hackerrank.com/contests/array-a-pti-c/challenges
<br> dan bisa diambil dari bioskop sekitar

### Ketika saya adalah user 
1. Saya bisa melakukan proses authentikasi (login/registrasi)
2. Saya bisa membeli tiket di boskop
3. Saya bisa melakukan topup untuk mengisi saldo saya
4. Saya bisa membeli makanan yang ada di bioskop (makanan bisa lebih dari satu)

### Ketika saya adalah admin
1. Saya bisa melakukan proses authentikasi admin (login/registrasi admin version)
2. Saya bisa melakuakn proses cek makanan yang dimiliki oleh user. Apabila ada yang bukan merupakan makanan yang ada pada cinemaXII, saya bisa menambahkan 1 poin peringatan. 
3. Jika poin peringatan lebih dari 5, maka saya bisa melakukan ban kepada user
4. Saya bisa menambahkan film yang akan tayang, selama jadwal dan tempat tidak bertabrakan

### Database Class
1. Saya menyimpan semua informasi akun user yang sudah teregistrasi
2. Saya menyimpan semua informasi film yang akan tayang
3. (Bonus) Saya bisa membaca semua informasi yang ada pada users.txt dan <br>
mengkonversi data tersebut ke dalam array object
4. (Bonus) Saya bisa menyimpan hasil registrasi user dan perubahan akun user setelah <br>
user melakukan sesuatu (Membeli, TopUp, Kena ban oleh admin)
5. (Bonus) Saya juga bisa menyimpan film yang telah ditambahkan admin dari array ke movies.txt
6. (Bonus) Saya juga bisa membaca semua informasi yang ada pada movies.txt dan <br>
mengkonversi data tersebut ke dalam array object

### Food class
1. Saya merupakan objek makanan

### Cinema Class
1. Saya merupakan objek studio bioskop
2. Saya bisa menampilkan tempat duduk layaknya seperti pada bioskop
3. Jika kursi sudah dibeli, maka tanda tempat duduk diganti menjadi X
4. Saya sendiri memiliki banyak tipe
5. Saya memiliki detail mengenai film yang ditayang serta tampilan kursi dan jumlah kursi

### App Class
1. Saya yang mengatur arah dan bagaimana app berjalan

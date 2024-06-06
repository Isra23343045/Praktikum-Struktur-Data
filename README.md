<a name="readme-top"></a>
<br />
<div align="center">
  <a href="https://github.com/github_username/repo_name">
    <img src="https://1.bp.blogspot.com/-KrHDhie5nic/Wi-TjOVtr4I/AAAAAAAAMYQ/XrxFafE7w8Anb-bcqZVKtvbBp1WgFZwdACLcBGAs/s1600/logo-universitas-negeri-padang-%2528unp%2529.png" alt="Logo" width="200" height="200">
  </a>

<h2 align="center">Praktikum Struktur Data</h2>

  <p align="center">
    Repositori ini berisi mengenai semua percobaan dan tugas dari perkuliahan praktikum struktur data pada Semester 2
    <br />
    <a href="https://github.com/Isra23343045/Praktikum-Struktur-Data"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    📓 Mata Kuliah : Praktikum Struktur Data
    <br />
    👨‍🏫 Dosen: Randi Proska Sandra, M.Sc.
    <br />
    🏫 Kode kelas : Kode Kelas : INF1.62.2014.
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#Jobsheet-1---Pengenalan-Struktur-Data">Jobsheet 1 - Pengenalan Struktur Data</a>
    </li>
    <li>
      <a href="#Jobsheet-2---Array-Pointer-Structure">Jobsheet 2 - Array, Pointer, Structure</a>
    </li>
    <li><a href="#Jobsheet-3---Single-Linked-List">Jobsheet 3 - Single Linked List</a></li>
    <li><a href="#Jobsheet-4---Doubly-Linked-List">Jobsheet 4 - Doubly Linked List</a></li>
    <li><a href="#contributing">Jobsheet 5 - Double and Circular Linked List</a></li>
    <li><a href="#license">Jobsheet 6 - Stack</a></li>
    <li><a href="#contact">Jobsheet 7 - Queue</a></li>
    <li><a href="#acknowledgments">Jobsheet 8 - Bubble and Insertion Sort</a></li>
    <li><a href="#acknowledgments">Jobsheet 9 - Selection and Merge Sort</a></li>
    <li><a href="#acknowledgments">Jobsheet 10 - Shell and Quick Sort</a></li>
    <li><a href="#acknowledgments">Jobsheet 11 - Linear and Binary Search</a></li>
    <li><a href="#acknowledgments">Jobsheet 12 - Tree</a></li>
    <li><a href="#acknowledgments">Jobsheet 13 - Graphs</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## Jobsheet 1 - Pengenalan Struktur Data

<img src="https://miro.medium.com/v2/resize:fit:2000/1*2rKGJ6h1regwmfMcty3SLw.png" width="80%" height="80%">

<p>
  Materi dari JOB SHEET 01 untuk mata kuliah Praktikum Struktur Data mencakup pengenalan dasar mengenai struktur data, dengan tujuan agar mahasiswa memahami konsep data, variabel, tipe data, dan struktur data serta mampu menerapkan dan memberikan contoh implementasi penyimpanan data menggunakan berbagai tipe data. Praktikum ini menggunakan perangkat lunak Notepad++ dan DevC IDE pada komputer pribadi. Teori singkatnya menjelaskan bahwa struktur data dalam pemrograman, khususnya dengan bahasa C, melibatkan variabel seperti Array, Struktur, dan Linked List yang memiliki karakteristik berbeda. Struktur data merupakan cara penyimpanan, penyusunan, dan pengaturan data untuk efisiensi.
</p>
<br/>
<p>
  Data sendiri adalah representasi fakta dunia nyata dalam berbagai bentuk. Terdapat empat istilah utama: tipe data, objek data, struktur data, dan berbagai kategori tipe data, termasuk tipe sederhana (tunggal dan majemuk) dan struktur data (sederhana dan majemuk). Pemahaman dan penggunaan struktur data yang tepat akan menghasilkan algoritma yang efisien dan program yang sederhana. Struktur data standar yang biasa digunakan mencakup List linier, Multilist, Stack, Queue, Tree, dan Graph. Praktikum juga mencakup percobaan pertama dengan program bahasa C dan tugas membuat artikel tentang topik-topik seperti Pointer, struct, dan array, serta berbagai jenis Linked List.
  <br/>
  <br/>
  <br/>
   <a href="https://github.com/Isra23343045/Praktikum-Struktur-Data/tree/main/JOBSHEET%201/Tugas">Tugas Jobsheet 1</a>
</p>

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->
## Jobsheet 2 - Array Pointer Structure
<img src="https://www.ggorantala.dev/content/images/2023/04/Introduction-to-array-data-structure.png" width="80%" height="80%">

<p>
  Materi dari JOB SHEET 02 membahas tentang konsep Array, Pointer, Structure, dan Abstract Data Type (ADT) dalam pemrograman.Secara singkat, teori mengenai Array menjelaskan bahwa array adalah kumpulan nilai dengan tipe data yang sama, yang elemen-elemennya diakses menggunakan indeks. Deklarasi array bisa satu dimensi, dua dimensi, atau multi dimensi, dan contoh inisialisasinya termasuk deklarasi seperti `double balance[5] = {500.0, 2.0, 3.4, 7.0, 50.0};`.
  <br/>
  <br/>
  Pointer adalah variabel yang berisi alamat memori sebagai nilainya, berbeda dengan variabel biasa yang berisi nilai tertentu. Pointer digunakan untuk menyimpan alamat dari variabel lain, dan dideklarasikan dengan tanda asterisk (*) di depan nama variabel, misalnya `int *b, d;`. Untuk mendapatkan alamat memori dari variabel, digunakan tanda `&` di depan nama variabel, seperti `&b`.

  <a href="https://github.com/Isra23343045/Praktikum-Struktur-Data/tree/main/JOBSHEET%202">Tugas dan Percobaan Jobsheet 2</a>
</p>

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Jobsheet 3 - Single Linked List

<img src="https://mikirinkode.com/wp-content/uploads/2021/12/single-linked-list-thumbnail.png" width="80%" height="80%">
<p>
  Materi JOB SHEET 03 membahas topik Single Linked List.Teori singkat menjelaskan bahwa sebuah node dalam linked list berisi alamat dan data, yang keduanya dibungkus dalam sebuah objek berupa struct. Penggunaan alokasi memori dinamis memungkinkan kita untuk mengalokasikan memori saat program berjalan, berbeda dengan array yang bersifat statis. Fungsi `sizeof()` digunakan untuk mendapatkan ukuran tipe data atau variabel, sementara `malloc()` digunakan untuk mengalokasikan memori secara dinamis.
  <br/>
  <br/>
  Single Linked List adalah struktur data yang terdiri dari simpul-simpul beralamat yang saling bertaut, dimana setiap simpul menyimpan data dan alamat simpul berikutnya. Simpul pertama disebut HEAD dan simpul terakhir yang berisi alamat kosong disebut TAIL. Praktikum ini mencakup contoh program untuk membuat dan menampilkan linked list, serta operasi dasar seperti menambah elemen di awal, di tengah, dan di akhir linked list.
  <br/>
  <br/>
  Percobaan yang dilakukan melibatkan alokasi memori, pembuatan linked list tanpa typedef, dengan typedef, dan menampilkan linked list. Selain itu, juga dicontohkan bagaimana melakukan penyisipan elemen pada linked list. Tugas yang diberikan melibatkan pembuatan program untuk menampilkan bilangan Fibonacci dan bilangan prima menggunakan pointer dengan malloc, serta menggunakan realloc untuk mengalokasikan ukuran memori baru.
   <br/>
  <br/>
  <a href="https://github.com/Isra23343045/Praktikum-Struktur-Data/tree/main/JOBSHEET%203">Tugas dan Percobaan Jobsheet 3</a>
</p>


<p align="right">(<a href="#readme-top">back to top</a>)</p>




## Jobsheet 4 - Doubly Linked List
<img src="https://sebhastian.com/doubly-linked-list-javascript/doubly-linked-list-example.png" width="80%" height="80%">

<p>
  Doubly Linked List (DLL) adalah jenis struktur data yang terdiri dari serangkaian node, di mana setiap node memiliki tiga komponen utama: data, pointer ke node berikutnya (next), dan pointer ke node sebelumnya (prev). Berbeda dengan Single Linked List (SLL) yang hanya memiliki satu arah pointer, DLL memungkinkan traversal dalam dua arah, baik maju (ke depan) maupun mundur (ke belakang). Hal ini menjadikan DLL lebih fleksibel dan efisien dalam operasi tertentu seperti penghapusan dan penyisipan node. Dalam penghapusan node, misalnya, DLL dapat langsung menggunakan pointer prev untuk mengakses node sebelumnya tanpa perlu traversal dari awal, yang sangat menghemat waktu terutama pada list yang panjang.
  <br/>
  <br/>
  Demikian pula, penyisipan node menjadi lebih mudah dan cepat karena adanya akses langsung ke node sebelum atau sesudah posisi penyisipan. Namun, kelemahan dari DLL adalah penggunaan memori yang lebih besar karena setiap node memerlukan ruang tambahan untuk menyimpan dua pointer. Meskipun demikian, manfaat yang diperoleh dari kemampuan traversal dua arah dan efisiensi operasi sering kali lebih besar daripada kelemahan ini, menjadikan DLL pilihan yang baik untuk aplikasi yang membutuhkan navigasi yang kompleks dan manipulasi data yang sering. Implementasi DLL sering kali digunakan dalam sistem perangkat lunak seperti browser yang membutuhkan fungsi navigasi maju-mundur, editor teks, dan berbagai aplikasi lain yang membutuhkan akses dan modifikasi data yang efisien.

  <a href="https://github.com/Isra23343045/Praktikum-Struktur-Data/tree/main/JOBSHEET%204">Tugas dan Percobaan Jobsheet 4</a>
</p>

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Your Name - [@twitter_handle](https://twitter.com/twitter_handle) - email@email_client.com

Project Link: [https://github.com/github_username/repo_name](https://github.com/github_username/repo_name)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* []()
* []()
* []()

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/github_username/repo_name.svg?style=for-the-badge
[contributors-url]: https://github.com/github_username/repo_name/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/github_username/repo_name.svg?style=for-the-badge
[forks-url]: https://github.com/github_username/repo_name/network/members
[stars-shield]: https://img.shields.io/github/stars/github_username/repo_name.svg?style=for-the-badge
[stars-url]: https://github.com/github_username/repo_name/stargazers
[issues-shield]: https://img.shields.io/github/issues/github_username/repo_name.svg?style=for-the-badge
[issues-url]: https://github.com/github_username/repo_name/issues
[license-shield]: https://img.shields.io/github/license/github_username/repo_name.svg?style=for-the-badge
[license-url]: https://github.com/github_username/repo_name/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/linkedin_username
[product-screenshot]: images/screenshot.png
[Next.js]: https://img.shields.io/badge/next.js-000000?style=for-the-badge&logo=nextdotjs&logoColor=white
[Next-url]: https://nextjs.org/
[React.js]: https://img.shields.io/badge/React-20232A?style=for-the-badge&logo=react&logoColor=61DAFB
[React-url]: https://reactjs.org/
[Vue.js]: https://img.shields.io/badge/Vue.js-35495E?style=for-the-badge&logo=vuedotjs&logoColor=4FC08D
[Vue-url]: https://vuejs.org/
[Angular.io]: https://img.shields.io/badge/Angular-DD0031?style=for-the-badge&logo=angular&logoColor=white
[Angular-url]: https://angular.io/
[Svelte.dev]: https://img.shields.io/badge/Svelte-4A4A55?style=for-the-badge&logo=svelte&logoColor=FF3E00
[Svelte-url]: https://svelte.dev/
[Laravel.com]: https://img.shields.io/badge/Laravel-FF2D20?style=for-the-badge&logo=laravel&logoColor=white
[Laravel-url]: https://laravel.com
[Bootstrap.com]: https://img.shields.io/badge/Bootstrap-563D7C?style=for-the-badge&logo=bootstrap&logoColor=white
[Bootstrap-url]: https://getbootstrap.com
[JQuery.com]: https://img.shields.io/badge/jQuery-0769AD?style=for-the-badge&logo=jquery&logoColor=white
[JQuery-url]: https://jquery.com 

#include "animation.h"

void chat(int y, int x,
  const char * text, int delay) {
  for (int i = 0; text[i] != '\0'; i++) {
    mvprintw(y, x + i, "%c", text[i]);
    refresh();
    napms(delay);
  }
}

void clearleft() {
  for (int y = 0; y < LINES; y++) {
    move(y, 0);
    for (int x = 0; x < COLS / 2; x++) {
      addch(' ');
    }
  }
}

void dialog001() {
  chat(20, 75, "Chapter 1 ~ Scorpius", 240);
  napms(2500);
  clear();
}

void dialog002() {
  chat(20, 14, "Suara gemuruh kegaduhan terdengar, diikuti hentakan langkah kaki yang terburu-buru.", 42);
  napms(1000);
  chat(22, 14, "Damian baru saja tiba di depan kandang sapi milik pamannya dengan napas tersenggal-senggal.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Huh, lagi? Kemarin domba milik Ny. Grace yang hilang.", 42);
  napms(1000);
  chat(22, 14, "Sekarang sapi milikmu juga?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Siapa sebenarnya gerangan orang gila yang mencuri", 42);
  chat(21, 14, "harta di tanah gersang kita?", 42);
  napms(1000);
  clear();
}

void dialog003() {
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Siapa pun orangnya, kuharap dia dikirim ke dalam kubur!", 42);
  napms(1000);
  chat(22, 14, "Maukah kau mencarinya untukku, Damian?", 42);
  napms(1000);
  clear();
}

void dialog004() {
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Tentu saja, Paman Sam.", 42);
  napms(1000);
  chat(22, 14, "Biarkan aku mencari pencuri licik itu untuk aku kirim", 42);
  chat(23, 14, "ke dalam kubur!", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Tapi ini sedikit aneh.", 42);
  napms(1000);
  chat(22, 14, "Bagaimana pencuri itu bisa mencuri tiga sapi sekaligus?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Apa pencuri itu tidak sendirian?", 42);
  napms(1000);
  clear();
}

void dialog005() {
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Bisa jadi, Damian.", 42);
  napms(1000);
  chat(22, 14, "Kudengar Tn. John juga kehilangan lima ekor ayamnya", 42);
  chat(23, 14, "semalam, dan ada yang membuatku heran.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Tidak ada seorang pun yang mendengar suara ayam malam", 42);
  chat(21, 14, "itu, atau juga jejak kaki di sekitar kandangnya.", 42);
  napms(1000);
  chat(23, 14, "Nah, sekarang beritahu aku bagaimana pencuri--", 42);
  napms(1000);
  clear();
}

void dialog006() {
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "EH LIHAT!", 90);
  napms(1200);
  chat(22, 14, "SIAPA ORANG-ORANGAN SAWAH YANG MAU MENYISIR", 90);
  chat(23, 14, "GANDUM MILIK TN. PETER?!", 90);
  napms(1200);
  clear();
}

void dialog007() {
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Itu bukan orang, tetapi sesuatu itu MENYERUPAI ORANG!", 90);
  napms(1200);
  chat(22, 14, "Ayo ambil sabit dan kapak besimu untuk melawan mereka!", 90);
  napms(1200);
  clear();
}

void dialog008() {
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Pertarungan barusan sangat luar biasa, Nak!", 42);
  napms(1000);
  chat(22, 14, "Hei, beri tahu aku bagaimana bisa sebuah sabit tua dan", 42);
  chat(23, 14, "kapak besi berkarat dapat mencabik-cabik makhluk aneh tadi?", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "A-aku juga tidak mengerti, Paman Sam.", 42);
  napms(1000);
  chat(22, 14, "Tubuhku bergerak sendiri, seperti ada yang mengarahkanku....", 42);
  napms(1000);
  clear();
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "HAHAHAHAH!", 42);
  napms(1000);
  chat(22, 14, "Maksudmu, kau punya kekuatan dahsyat yang tersembunyi di dalam", 42);
  chat(23, 14, "dirimu semacam autopilot yang berkelahi melawan bahaya, begitu?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Ayolah Anak Muda, simpan dulu lelucon konyolmu itu!", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Hei, ini bukan lelucon tahu, ini sungguhan!", 42);
  napms(1000);
  chat(22, 14, "Lihatlah ke sebelah utara arah jam dua belas, di sana ada", 42);
  chat(23, 14, "sesepuh desa ini, Ketua Henry.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Beliau pasti datang untuk menjawab semua kebingungan kita!", 42);
  napms(1000);
  clear();
  KetuaHenry();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Ohoo... Anak Muda dengan pamannya yang sedang kebingungan.", 42);
  napms(1000);
  chat(22, 14, "Aku sudah mendengar keluhan Ny. Grace dengan dombanya, atau", 42);
  chat(23, 14, "Tn. John dengan lima ekor ayamnya, dan penduduk lainnya juga.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Aku bahkan baru saja menyaksikan secara langsung kau dengan", 42);
  chat(21, 14, "sabit dan kapak tua yang sudah seperti rumah reyot itu berhasil", 42);
  chat(22, 14, "memusnahkan kaki tangan dari pencurian massal dan berantai ini.", 42);
  napms(1000);
  chat(24, 14, "Sungguh menakjubkan!", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Ah, ya, mau kuberi tahu sesuatu, Anak Muda?", 42);
  napms(1000);
  clear();
}

void dialog009() {
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Tolong langsung katakan apa yang sebenarnya terjadi, Ketua.", 42);
  napms(1000);
  chat(22, 14, "Aku tahu kau sudah tahu apa yang sebenarnya terjadi.", 42);
  napms(1000);
  clear();
}

void dialog010() {
  KetuaHenry();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Raja Iblis bangkit, dan hanya Damian yang dapat mengalahkannya.", 42);
  napms(1000);
  chat(22, 14, "Di suatu tempat, di ujung gelap, di mana angsa-angsa berlomba", 42);
  chat(23, 14, "hingga berdarah-darah.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Carilah tempat itu dan kalahkan Raja Iblis!", 42);
  napms(1000);
  chat(22, 14, "Dengar anak muda, nasib seluruh penduduk desa ada di tanganmu.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Putuskanlah dengan bijak dan aku akan pergi.", 42);
  napms(1000);
  chat(22, 14, "Selamat tinggal....", 42);
  napms(1000);
  clear();
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Tch, bukannya menjelaskan malah membuatku semakin bingung!", 42);
  napms(1000);
  chat(22, 14, "Dan apa maksudnya angsa berdarah-darah itu?", 42);
  napms(1000);
  chat(24, 14, "Memangnya apa ada sebuah tempat penjagalan angsa?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Hei Damian, menurutmu bagaimana?", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Di suatu tempat, di ujung gelap....", 42);
  napms(1000);
  chat(22, 14, "Mungkin kata itu merujuk pada lokasi yang gelap, yang terlihat", 42);
  chat(23, 14, "tertentu pada waktu tertentu, mungkin bisa kita asumsikan", 42);
  chat(24, 14, "tempat di ujung gelap ini sebagai malam.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Kemudian Ketua Henry berkata angsa yang berlomba dan", 42);
  chat(21, 14, "memerintahkanku mencari sebuah tempat.", 42);
  napms(1000);
  chat(23, 14, "Paman Sam, kita semua sudah tahu bahwa wilayah utara", 42);
  chat(24, 14, "pada negeri ini adalah Cygnus.", 42);
  napms(1000);
  clear();
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Ya, aku tahu.", 42);
  napms(1000);
  chat(22, 14, "Lalu bagaimana sekarang?", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Di negeri ini terdapat empat wilayah dan semuanya dinamai", 42);
  chat(21, 14, "dengan nama-nama rasi bintang.", 42);
  napms(1000);
  chat(23, 14, "Di desa kita, wilayah bagian barat dinamai dengan Scorpius.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Kemudian wilayah timur adalah Orion, wilayah utara adalah Cygnus,", 42);
  chat(21, 14, "dan wilayah selatan adalah Crux.", 42);
  napms(1000);
  chat(23, 14, "Menurut mitologi Yunani, Cygnus berarti adalah angsa.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Maka begitulah kesimpulanku.", 42);
  napms(1000);
  chat(22, 14, "Apa aku harus pergi ke Cygnus dan mengalahkan Raja Iblis di sana?", 42);
  napms(1000);
  clear();
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Ya, tentu saja.", 42);
  napms(1000);
  chat(22, 14, "Pergilah Anak Muda, semoga keberuntungan selalu menyertaimu!", 42);
  napms(1000);
  clear();
}

void dialog011() {
  chat(20, 76, "Chapter 2 ~ Cygnus", 240);
  napms(2500);
  clear();
}

void dialog012() {
  chat(20, 14, "Akhirnya Damian memutuskan untuk mengalahkan Raja Iblis.", 42);
  napms(1000);
  chat(22, 14, "Dengan jaket rajut yang dibuatkan Ny. Grace dan bekal yang diberikan Paman Sam, Damian berangkat menyusuri wilayah utara.", 42);
  napms(1000);
  clear();
  chat(20, 14, "Tempat di mana angsa-angsa berlomba dengan kereta apolo.", 42);
  napms(1000);
  clear();
  chat(20, 14, "Damian terus berjalan ditemani hamparan rumput hijau milik Cygnus yang terlihat segar dan asri.", 42);
  napms(1000);
  chat(22, 14, "Sebuah tanah yang makmur dan kaya raya.", 42);
  napms(1000);
  clear();
  chat(20, 14, "Mata elang Damian tidak sengaja menangkap sosok perempuan dengan gaun peach di ujung jalan.", 42);
  napms(1000);
  chat(22, 14, "Melihatnya seperti sedang kesulitan, Damian datang menghampiri.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Permisi Nona, sepertinya kau sedang kesulitan dengan keranjang", 42);
  chat(21, 14, "berisi pai susu yang rusak itu.", 42);
  napms(1000);
  chat(23, 14, "Mau aku bantu?", 42);
  napms(1000);
  clear();
  chat(20, 14, "Nona bergaun peach hanya terdiam.", 42);
  napms(1000);
  chat(22, 14, "Mata birunya menatap kosong keranjang rusak dengan pai susu yang kotor berserakan.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Hei, Nona bergaun peach, apa kau baik-baik saja?", 42);
  napms(1000);
  clear();
  chat(20, 14, "Damian mencoba mengguncang pelan bahu Nona bergaun peach sehingga dia sadar dari lamunannya.", 42);
  napms(1000);
  clear();
  Emma();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "A-ah... m-maaf!", 42);
  napms(1000);
  chat(22, 14, "K-kau siapa?!", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Apa kau komplotan makhluk aneh yang menjarah domba-domba kami?!", 42);
  napms(1000);
  clear();
  chat(20, 14, "Dengan panik Nona bergaun peach memunguti pai susu dan bersiap pergi.", 42);
  napms(1000);
  chat(22, 14, "Tetapi, dengan cepat Damian mencekal pergelangan tangannya.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Tenang dulu Nona, tarik nafas yang dalam lalu hembuskan.", 42);
  napms(1000);
  chat(22, 14, "Kau harus tahu aku bukan komplotan makhluk aneh itu, tenanglah.", 42);
  napms(1000);
  clear();
  chat(20, 14, "Nona bergaun peach menghela napas, mencoba menenangkan dirinya.", 42);
  napms(1000);
  chat(22, 14, "Satu kali... dua kali....", 42);
  napms(1000);
  chat(24, 14, "Dan pada hembusan ketiga, Nona bergaun peach mulai bercerita.", 42);
  napms(1000);
  clear();
  Emma();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Maaf karena asal menuduhmu yang tidak-tidak, Tuan.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Kurasa kita seumuran dan aku yakin wajahku belum", 42);
  chat(21, 14, "setua itu untuk dipanggil Tuan.", 42);
  napms(1000);
  chat(23, 14, "Aku Damian, Damian Armstrong lebih tepatnya.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Dan kau?", 42);
  napms(1000);
  clear();
  Emma();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Emmanuel Rosaline.", 42);
  napms(1000);
  chat(22, 14, "Orang-orang di desa ini memanggilku Emma, katanya itu nama", 42);
  chat(23, 14, "kesayangan yang terdengar cukup imut.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Kau juga boleh menggunakannya.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Er... baiklah Emma.", 42);
  napms(1000);
  chat(22, 14, "Jadi, apakah kau butuh bantuan untuk pai susu yang", 42);
  chat(23, 14, "sudah tidak karuan bentuknya itu?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Atau untuk makhluk aneh yang kau sebutkan tadi?", 42);
  napms(1000);
  clear();
  Emma();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Ya, tentu saja untuk keduanya.", 42);
  napms(1000);
  chat(22, 14, "Pertama, bantulah aku membawa pai susu ini.", 42);
  napms(1000);
  chat(24, 14, "Selanjutnya akan aku ceritakan nanti setelah tiba di rumah.", 42);
  napms(1000);
  clear();
}

void dialog013() {
	chat(20, 14, "Damian membantu Emma membawa pai susu itu menuju rumah Emma dengan hening dan suara angin sepoi-sepoi mengiringi mereka.", 42);
	napms(1000);
	clear();
	chat(20, 14, "Perjalanan yang sunyi itu berakhir dengan Damian yang terkejut melihat pemandangan di hadapannya.", 42);
	napms(1000);
	clear();
	chat(20, 14, "Terlihat sebuah rumah, taman bunga edelweis, dan kandang domba tua dengan suasana yang muram.", 42);
	napms(1000);
	clear();
	Emma();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Katakan padaku, Damian, di mana letak salahku, atau apa salah", 42);
	chat(21, 14, "keluargaku hingga makhluk aneh itu menjarah domba kami.", 42);
	napms(1000);
	chat(23, 14, "Padahal domba itu sumber mata pencaharian utama keluargaku.", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Apakah aku berbuat dosa besar sehingga Tuhan marah lalu", 42);
	chat(21, 14, "menghukumku dengan mengambil domba dan juga orang tuaku?", 42);
	napms(1000);
	chat(23, 14, "Ah, ralat, adikku Mia ikut dibawa makhluk menjijikkan itu!", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Lihatlah bunga edelweis yang putus dari tangkainya itu,", 42);
	chat(21, 14, "ternodai oleh bercak darah keluargaku yang mempertahankan", 42);
	chat(22, 14, "domba kami sampai mereka rela mengorbankan nyawanya!", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Harusnya kandang domba itu masih bagus, harusnya kami", 42);
	chat(21, 14, "masih beternak domba yang gemuk, harusnya--", 42);
	napms(1000);
	clear();
	chat(20, 14, "Damian mendekap Emma karena teringat Ny. Grace pernah berkata bahwa pelukan dapat menenangkan seseorang.", 42);
	napms(1000);
	clear();
	chat(20, 14, "Kemudian tangis Emma luruh begitu saja.", 42);
	napms(1000);
	chat(22, 14, "Seraya masih terisak, perempuan itu tetap melanjutkan ceritanya.", 42);
	napms(1000);
	clear();
	Emma();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Aku ditugaskan Ibuku untuk menjual pai susu ke kota.", 42);
	napms(1000);
	chat(22, 14, "Di tengah perjalanan, aku melupakan topiku dan karena cuaca", 42);
	chat(23, 14, "semakin terik, aku memutuskan untuk kembali mengambil topi.", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Dan kau tahu Damian?", 42);
	napms(1000);
	chat(22, 14, "Sungguh aku adalah orang paling pengecut sejagad raya karena", 42);
	chat(23, 14, "aku hanya bersembunyi di balik pohon maple ketika keluargaku", 42);
	chat(24, 14, "melawan demi domba-domba itu!", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "A-aku... aku merasa tidak berguna waktu itu.", 42);
	napms(1000);
	chat(22, 14, "Aku terlalu takut untuk melawan, dan sejak itu aku menyesal.", 42);
	napms(1000);
	clear();
	chat(22, 40, "Cerita sampai di sini dulu ya! Full version coming in Projek Akhir!", 82);
	napms(2500);
	clear();
}
const char rocket[] =
"           _\n\
         /^\\\n\
         |-|\n\
         |D|\n\
         |A|\n\
         |N|\n\
         |I|\n\
         |E|\n\
         |L|\n\
        /|X|\\\n\
       / |Y| \\\n\
      |  |Z|  |\n\
       `-\"\"\"-`\n\
";
 
{
    for (int i = 0; i < 50; i++) cout << endl; // melompat ke bawah konsol
    cout << rocket ;
    int j = 300000;
    for (int i = 0; i < 50; i++) {
        usleep(j); // bergerak lebih cepat,
        j = (int)(j * 0.9); // waktu sleep
        cout << endl; // memindahkan baris roket ke atas
    }
    cout << "Visit https://www.instagram.com/danielxyz_ !!! " << endl;
    return 0;
	}
}

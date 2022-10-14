   #include<iostream.h>
#include<conio.h>
main()
{
	 int Jam1, Menit1, Detik1, Jam2, Menit2, Detik2;
   int Jam, Sisa_Jam, Menit, Detik, Lama_Bicara;
   long int Detik_Awal, Detik_Selesai;
   cout<<"progrm waktu awal"<<endl;
   cout<<"masukkan jam : ";
   cin>>Jam1;
   cout<<"masukkan menit : ";
   cin>>Menit1;
   cout<<"masukkan detik : ";
   cin>>Detik1;
   cout<<"Data Jam : "<<Jam1<<" : "<<Menit1<<" : "<<Detik1<<": ";
   Detik_Awal=Jam1*3600+Menit1*60+Detik1;
   cout<<"==> Hasil_Detik<< "<<Detik_Awal<<" Detik";
   cout<<endl<<"progrm waktu akhir"<<endl;
   cout<<"masukkan jam : ";
   cin>>Jam2;
   cout<<"masukkan menit : ";
   cin>>Menit2;
   cout<<"masukkan detik : ";
   cin>>Detik2;
   cout<<"Data Jam : "<<Jam2<<" : "<<Menit2<<" : "<<Detik2<<": ";
   Detik_Selesai=Jam2*3600+Menit2*60+Detik2;
   cout<<"==> Hasil_Detik<< "<<Detik_Selesai<<" Detik";
   Lama_Bicara=Detik_Selesai - Detik_Awal;
   cout<<"Lama bicara = "<<Lama_Bicara<<" detik";
   Jam = Lama_Bicara / 3600;
   Sisa_Jam = Lama_Bicara % 3600;
   Menit = Sisa_Jam / 60;
   Detik = Sisa_Jam % 60;
   cout<<endl<<endl<<"Lama Bicara sama dengan = "<<Jam<<":"<<Menit<<":"<<Detik;
   getch();
}

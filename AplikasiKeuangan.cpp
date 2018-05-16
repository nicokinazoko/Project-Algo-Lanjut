int i=left;
int j=right;
tipe1 pivot,temp ;
pivot = manajUang[(right+left)/2];

while(i<=j){
    while(manajUang[i].pemasukan>manajUang[(right+left)/2].pemasukan)
        i++;
    while(manajUang[j].pemasukan<manajUang[(right+left)/2].pemasukan)
        j--;
if(i<=j){
    temp=manajUang[i];
    manajUang[i]=manajUang[j];
    manajUang[j]=temp;
    i++;
    j--;}}
if(left<j)
    biayakecil(left,j);
if(i<right)
   biayakecil(i,right);
        for(i=0;i<jumlahMasuk;i++){
        cout << "\nNominal : Rp. "<<manajUang[i].pemasukan;
        cout << "\nWaktu (dd/mm/yy) : "<<manajUang[i].waktu;
        cout << "\nKeterangan : "<<manajUang[i].keterangan;
    }

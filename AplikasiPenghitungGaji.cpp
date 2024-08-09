#include <iostream>
using namespace std;

int main()
{
 
    string nama;
    long gaji_pokok, tunjangan, honor, pajak, gaji_bersih, gaji_kotor, gajipokok_perhari;
    int NIK, jenis_pegawai, jenis_jabatan, jumlah_hari_kerja, status, jabatan, hari_tidakmasuk; 

    cout << "===========================================" << endl;
    cout << "  ------ Aplikasi Perhitungan Gaji ------  " << endl;
    cout << "===========================================" << endl;
    cout << "  ------------ Jenis Pegawai ------------  " << endl;
    cout << "  1. PNS  " << endl;
    cout << "  2. Tetap Non PNS  " << endl;
    cout << "  3. Kontrak  " << endl;
    cout << "-------------------------------------------" << endl; 
    cout << "\n===========================================" << endl;

    cout << "\n  Input Jenis Pegawai  : "; 
    cin >> jenis_pegawai;
    cout << "  Input Nama Pegawai   : "; 
    cin >> nama;
    cout << "  Input NIK Pegawai    : "; 
    cin >> NIK;

    cout << "\n===========================================" << endl;
    cout << "  ------------ Jenis Jabatan ------------  " << endl;
    cout << "  1. Kepala Bagian  " << endl;
    cout << "  2. Wakil Kepala Bagian  " << endl;
    cout << "  3. Staff  " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "\n===========================================" << endl;

    cout << "-------------------------------------------" << endl; 
    cout << "  Masukan Jenis Jabatan        :  ";
    cin >> jenis_jabatan;
    cout << "  Masukan Jumlah hari kerja    :  ";
    cin >> jumlah_hari_kerja;

    cout << "-------------------------------------------" << endl;
    cout << "\n===========================================" << endl;
    cout << "  ------------- Rincian Gaji ------------  " << endl;
    cout << "  Nama         : " << nama << endl;
    cout << "  NIK          : " << NIK << endl;

    switch (jenis_pegawai){
        case 1 :
            if (jenis_jabatan == 1)
            {
                if (jumlah_hari_kerja >= 25)
                {
                    cout << "  Status       : PNS " << endl;
                    cout << "  Jabatan      : Kepala Bagian " << endl;
                    gaji_pokok = 4500000; tunjangan = 800000; honor = 30000 * jumlah_hari_kerja;
                }
                else 
                {
                    cout << "  Status       : PNS " << endl;
                    cout << "  Jabatan      : Kepala Bagian " << endl;
                    gajipokok_perhari = 4500000 / 25;
                    gaji_pokok = gajipokok_perhari * jumlah_hari_kerja; tunjangan = 800000; honor = 30000 * jumlah_hari_kerja;
                }
            }

            if (jenis_jabatan == 2)
            {
                if (jumlah_hari_kerja >= 25)
                {
                    cout << "  Status       : PNS " << endl;
                    cout << "  Jabatan      : Wakil Kepala Bagian " << endl;
                    gaji_pokok = 4000000; tunjangan = 800000; honor = 25000 * jumlah_hari_kerja;
                }
                else 
                {
                    cout << "  Status       : PNS " << endl;
                    cout << "  Jabatan      : Wakil Kepala Bagian " << endl;
                    gajipokok_perhari = 4000000 / 25;
                    gaji_pokok = gajipokok_perhari * jumlah_hari_kerja; tunjangan = 800000; honor = 25000 * jumlah_hari_kerja;
                }
            }

            if (jenis_jabatan == 3)
            {
                if (jumlah_hari_kerja >= 25)
                {
                    cout << "  Status       : PNS " << endl;
                    cout << "  Jabatan      : Staff " << endl;
                    gaji_pokok = 3500000; tunjangan = 800000; honor = 20000 * jumlah_hari_kerja;
                }
                else 
                {
                    cout << "  Status       : PNS " << endl;
                    cout << "  Jabatan      : Staff " << endl;
                    gajipokok_perhari = 3500000 / 25;
                    gaji_pokok = gajipokok_perhari * jumlah_hari_kerja; tunjangan = 800000; honor = 20000 * jumlah_hari_kerja;
                }
            }

        break;

        case 2 :
            if (jenis_jabatan == 1)
            {
                if (jumlah_hari_kerja >= 25)
                {
                    cout << "  Status       : Tetap Non PNS " << endl;
                    cout << "  Jabatan      : Kepala Bagian " << endl;
                    gaji_pokok = 3500000; tunjangan = 600000; honor = 25000 * jumlah_hari_kerja;
                }
                else 
                {
                    cout << "  Status       : Tetap Non PNS " << endl;
                    cout << "  Jabatan      : Kepala Bagian " << endl;
                    gajipokok_perhari = 3500000 / 25;
                    gaji_pokok = gajipokok_perhari * jumlah_hari_kerja; tunjangan = 600000; honor = 25000 * jumlah_hari_kerja;
                }
            }

            if (jenis_jabatan == 2)
            {
                if (jumlah_hari_kerja >= 25)
                {
                    cout << "  Status       : Tetap Non PNS " << endl;
                    cout << "  Jabatan      : Wakil Kepala Bagian " << endl;
                    gaji_pokok = 3000000; tunjangan = 600000; honor = 20000 * jumlah_hari_kerja;
                }
                else 
                {
                    cout << "  Status       : Tetap Non PNS " << endl;
                    cout << "  Jabatan      : Wakil Kepala Bagian " << endl;
                    gajipokok_perhari = 3000000 / 25;
                    gaji_pokok = gajipokok_perhari * jumlah_hari_kerja; tunjangan = 600000; honor = 20000 * jumlah_hari_kerja;
                }
            }

            if (jenis_jabatan == 3)
            {
                if (jumlah_hari_kerja >= 25)
                {
                    cout << "  Status       : Tetap Non PNS " << endl;
                    cout << "  Jabatan      : Staff " << endl;
                    gaji_pokok = 2500000; tunjangan = 600000; honor = 15000 * jumlah_hari_kerja;
                }
                else 
                {
                    cout << "  Status       : Tetap Non PNS " << endl;
                    cout << "  Jabatan      : Staff " << endl;
                    gajipokok_perhari = 2500000 / 25;
                    gaji_pokok = gajipokok_perhari * jumlah_hari_kerja; tunjangan = 600000; honor = 15000 * jumlah_hari_kerja;
                }
            }
        break;

        case 3 :
            if (jenis_jabatan == 1)
            {
                if (jumlah_hari_kerja >= 25)
                {
                    cout << "  Status       : Kontrak " << endl;
                    cout << "  Jabatan      : Kepala Bagian " << endl;
                    gaji_pokok = 2500000; tunjangan = 400000; honor = 20000 * jumlah_hari_kerja;
                }
                else 
                {
                    cout << "  Status       : Kontrak " << endl;
                    cout << "  Jabatan      : Kepala Bagian " << endl;
                    gajipokok_perhari = 2500000 / 25;
                    gaji_pokok = gajipokok_perhari * jumlah_hari_kerja; tunjangan = 400000; honor = 20000 * jumlah_hari_kerja;
                }
            }

            if (jenis_jabatan == 2)
            {
                if (jumlah_hari_kerja >= 25)
                {
                    cout << "  Status       : Kontrak " << endl;
                    cout << "  Jabatan      : Wakil Kepala Bagian " << endl;
                    gaji_pokok = 2000000; tunjangan = 400000; honor = 15000 * jumlah_hari_kerja;
                }
                else 
                {
                    cout << "  Status       : Kontrak " << endl;
                    cout << "  Jabatan      : Wakil Kepala Bagian " << endl;
                    gajipokok_perhari = 2000000 / 25;
                    gaji_pokok = gajipokok_perhari * jumlah_hari_kerja; tunjangan = 400000; honor = 15000 * jumlah_hari_kerja;
                }
            }

            if (jenis_jabatan == 3)
            {
                if (jumlah_hari_kerja >= 25)
                {
                    cout << "  Status       : Kontrak " << endl;
                    cout << "  Jabatan      : Staff " << endl;
                    gaji_pokok = 1500000; tunjangan = 400000; honor = 10000 * jumlah_hari_kerja;
                }
                else 
                {
                    cout << "  Status       : Kontrak " << endl;
                    cout << "  Jabatan      : Staff " << endl;  
                    gajipokok_perhari = 1500000 / 25;
                    gaji_pokok = gajipokok_perhari * jumlah_hari_kerja; tunjangan = 400000; honor = 10000 * jumlah_hari_kerja;
                }
            }
        break; 
     
        default :
            cout << "  input tidak valid. " <<endl;
            return 0;
        break;
    }

    gaji_kotor = gaji_pokok + tunjangan + honor;
    pajak = gaji_kotor * 0.05;
    gaji_bersih = gaji_kotor - pajak;

    cout << "  Gaji Pokok   : " << gaji_pokok << endl;
    cout << "  Tunjangan    : " << tunjangan << endl;
    cout << "  Honor        : " << honor << endl;
    cout << "-------------------------------------------" << endl;
    cout << "  Sub-Total    : " << gaji_kotor << endl;
    cout << "  Pajak        : -" << pajak << endl;
    cout << "-------------------------------------------" << endl;
    cout << "  Gaji Bersih  : " << gaji_bersih << endl;
    cout << "-------------------------------------------" << endl;
    cout << "===========================================" << endl;
    
    system("pause");
}
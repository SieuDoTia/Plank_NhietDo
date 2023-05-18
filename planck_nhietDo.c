// quangTu_nhietDo.c

// ==== Định luật Plank
//  B(ν, T) = (2*h*ν^3/c^2) • 1/[exp(hν/(k_B*T)) - 1]   W/(m^2 strad Hz)
//  B(ν, T) = (2*h*c^2/λ^5) • 1/[exp(hc/(λ*k_B*T)) - 1]   W/(m^2 strad Hz)
//  ν (Hz)

// ==== Số lượng quang tử
// N = ∫{ν_1→ν_2},(2*h*ν^3/c^2) • 1/[exp(hν/(k_B*T)) - 1]/h•ν dv  photon/(m^2 strad s)
// N = ∫{ν_1→ν_2},(2*ν^2/c^2) • 1/[exp(hν/(k_B*T)) - 1] dv  photon/(m^2 strad s)

// λ = c/ν  (m)

// ---- Giới hạn thấp
// Tia gama   ≥ 30 EHz              ≤ 0,01 nm
// X Quang:   30 EHZ - 30 PHz    0,01 nm - 20 nm
// Cực tím:   30 PHz - 790 THz     10 nm - 380 nm
// Ánh Sáng： 790 THz - 430 THz   380 nm - 700 nm
// Hồng Ngoại 430 THz - 300 GHz   700 nm - 1 mm
// Vi ba      300 Ghz - 300 Mhz     1 mm - 1 m
// Vô tuyế    200 Ghz - 3 Hz        1 mm - 100 km

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define kPLANK           6.62607004e-34 // J/Hz
#define kBOLTZMAN        1.38065e-23    // J/K
#define kTOC_DO_ANH_SANG    2.99792e8   // m/s

#define k0_0001  0.0632f
#define k0_0010  0.0771f
#define k0_0100  0.1006f
#define k0_1000  0.1526f
#define k0_2000  0.1860f
#define k0_2500  0.2014f
#define k0_3000  0.2168f
#define k0_4180  0.2551f
#define k0_5000  0.2855f
#define k0_6460  0.2855f
#define k0_7000  0.3885f
#define k0_8000  0.4771f
#define k0_9000  0.6517f
#define k0_9900  1.5905f

// p*hc/(k_b*T) =

void tinhPhanSoBucXa( float nhietDo ) {

   printf( "Phân số năng lượng tùy bước sóng:\n" );
   float hc_chia_k_NhietDo = kPLANK*kTOC_DO_ANH_SANG/(kBOLTZMAN*nhietDo);
   
   float buocSong = k0_0001*hc_chia_k_NhietDo;
   printf( "0.0001  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_0010*hc_chia_k_NhietDo;
   printf( "\n0.001  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_0100*hc_chia_k_NhietDo;
   printf( "0.010  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_1000*hc_chia_k_NhietDo;
   printf( "0.100  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_2000*hc_chia_k_NhietDo;
   printf( "0.200  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_2500*hc_chia_k_NhietDo;
   printf( "0.250  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_3000*hc_chia_k_NhietDo;
   printf( "0.300  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_4180*hc_chia_k_NhietDo;
   printf( "0.418  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_5000*hc_chia_k_NhietDo;
   printf( "0.500  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_6460*hc_chia_k_NhietDo;
   printf( "0.646  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_7000*hc_chia_k_NhietDo;
   printf( "0.700  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_8000*hc_chia_k_NhietDo;
   printf( "0.800  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_9000*hc_chia_k_NhietDo;
   printf( "0.900  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
   
   buocSong = k0_9900*hc_chia_k_NhietDo;
   printf( "0.990  %5.3e m  (%5.3e Hz)\n", buocSong, kTOC_DO_ANH_SANG/buocSong );
}


void quetBuocSongChoNhietDo( float nhietDo, float buoc_buocSong, float buocSongCuoi ) {

   // ---- tính hằng số đầu
   float c_binh = kTOC_DO_ANH_SANG*kTOC_DO_ANH_SANG;
   float hc = kPLANK*kTOC_DO_ANH_SANG;
   float hc_chia_kB_T = hc/(kBOLTZMAN*nhietDo);

   // ---- chuẩn bị quét
   float buocSong = buoc_buocSong;  // m

   while( buocSong < buocSongCuoi ) {
      // ---- tính
      float a = hc_chia_kB_T/buocSong;
      float b = 2.0f*kPLANK*c_binh/(buocSong*buocSong*buocSong*buocSong*buocSong);
      float congSuc = b/(expf(a) - 1.0);   // W/m^2
      float phanSo = buocSong*kBOLTZMAN*nhietDo/hc;
      
      printf( " %5.3e m (%5.3e Hz)  %5.3e W/(m^3•strad) : %5.3f\n", buocSong, kTOC_DO_ANH_SANG/buocSong, congSuc, phanSo );

      buocSong += buoc_buocSong;
   }

}

void quetBuocTanSoChoNhietDo( float nhietDo, float buoc_tanSo, float tanSoCuoi ) {
   
   // ---- tính hằng số đầu
   float c_binh = kTOC_DO_ANH_SANG*kTOC_DO_ANH_SANG;
   float hc = kPLANK*kTOC_DO_ANH_SANG;
   float hc_chia_kB_T = hc/(kBOLTZMAN*nhietDo);
   
   // ---- chuẩn bị quét
   float tanSo = buoc_tanSo;  // Hz
   
   while( tanSo < tanSoCuoi ) {
      // ---- tính bước sóng
      float buocSong = kTOC_DO_ANH_SANG/tanSo;  // m

      // ---- tính
      float a = hc_chia_kB_T/buocSong;
      float b = 2.0f*kPLANK*c_binh/(buocSong*buocSong*buocSong*buocSong*buocSong);
      float congSuc = b/(expf(a) - 1.0);   // W/m^2
      float phanSo = buocSong*kBOLTZMAN*nhietDo/hc;
      
      printf( " %5.3e Hz (%5.3e m)  %5.3e W/(m^3•strad) : %5.3f\n", tanSo, buocSong, congSuc, phanSo );
      
      tanSo += buoc_tanSo;
   }
}

int main( int argc, char *argv[] ) {

   if( argc == 2 ) {
      float nhietDo = 5800;    // K - cho thử
      float buocSongDau = 1.0e-7;   // m
      float buocSongCuoi = 2.0e-6;

       // ---- nhiệt độ
       sscanf( argv[1], "%f", &nhietDo );

       // ---- bước sóng đầu
//       sscanf( argv[2], "%f", &tanSoDau );

       // ---- bước sóng cuối
//       sscanf( argv[3], "%f", &tanSoCuoi );
      
      // -----

       // tính đỉnh
      float buocSongDinh = (2.897771955e-3)/nhietDo;   // m
      float tanSoDinh = kTOC_DO_ANH_SANG/buocSongDinh;  // Hz
      float congSuc = 5.670373e-8 * nhietDo*nhietDo*nhietDo*nhietDo;   // W/m^2
      float nangLuongTrungBinh = 2.701*kBOLTZMAN*nhietDo;   // J
      
      // ---- in đặc trưng
      printf( "\nNhiệtĐộ: %5.1f K (%5.1f °C)\n Bước sóng đỉnh: %5.3e m (tần số %5.3e Hz)\n",
             nhietDo, (nhietDo - 273.0f) , buocSongDinh, tanSoDinh );
      printf( " Công sức (W/m^2): %5.3e\n", congSuc );

      // ---- quét
      quetBuocSongChoNhietDo( nhietDo, buocSongDinh*0.1f, buocSongDinh*10.0f );
      
      // -----
      tinhPhanSoBucXa( nhietDo );

   }
   else if( argc == 4 ) {

      float nhietDo = 5800;    // K - cho thử
      float buocCuaBuocSong = 1.0e-7;   // m
      float buocSongCuoi = 2.0e-6;
   
      // ---- nhiệt độ
      sscanf( argv[1], "%f", &nhietDo );

      // ---- bước sóng đầu
      sscanf( argv[2], "%f", &buocCuaBuocSong );

      // ---- bước sóng cuối
      sscanf( argv[3], "%f", &buocSongCuoi );

      // ---- quét
      quetBuocSongChoNhietDo( nhietDo, buocCuaBuocSong, buocSongCuoi );
   }
   else if( argc == 5 ) {
      // ==== QUÉT TẦN SỐNG
      float nhietDoDau = 250;    // K - cho thử
      float nhietDoCuoi = 300;
      float buocNhietDo = 10;    // K
      float buocTanSo = 1.0e12;  // Hz
      float tanSoCuoi = 50.0e12;
      
      // ---- nhiệt độ
      sscanf( argv[1], "%f", &nhietDoDau );
      
      // ---- nhiệt độ
      sscanf( argv[2], "%f", &nhietDoCuoi );
      
      // ---- bước sóng đầu
      sscanf( argv[3], "%f", &buocTanSo );
      
      // ---- tần số cuối
      sscanf( argv[4], "%f", &tanSoCuoi );

      // ---- quét
      float nhietDo = nhietDoDau;
      while( nhietDo < nhietDoCuoi ) {
         printf( "\n ------ %5.1f K ---------\n", nhietDo );
         quetBuocTanSoChoNhietDo( nhietDo, buocTanSo, tanSoCuoi );
         nhietDo += buocNhietDo;
      }
   }
   else {
      printf( "Cách sử dụng:\n  2: ./quangTu_nhietDo <nhiệt độ> <tần số đầu> <tần số cuối>\n" );
      printf( "Cách sử dụng:\n  4: ./quangTu_nhietDo <nhiệt độ> <tần số đầu> <tần số cuối>\n" );
      printf( "Cách sử dụng:\n  5: ./quangTu_nhietDo <nhiệt độ> <tần số đầu> <tần số cuối>\n\n" );
   }
   return 0;
}



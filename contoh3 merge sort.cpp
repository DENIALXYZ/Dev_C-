#include <cstdlib>
#include <iostream>
 
using namespace std;
class mergesort{
      public:
             void input(int[], int);
             void mergeSort(int[], int[], int);
             void m_sort(int[], int[], int, int);
             void merge(int[], int[], int, int, int);
             void output(int[], int);
 
             };
 
      void mergesort::input(int data[], int banyak){
           for(int i=0;i<banyak;i++){
           cout<<"Data ke["<<i+1<<"]: ";
           cin>>data[i];
           }
      }
 
      void mergesort::mergeSort(int data[], int temp[], int banyak){
           m_sort(data, temp, 0, banyak-1);
      }
 
      void mergesort::m_sort(int data[], int temp[], int kiri, int kanan){
           int tengah;
 
           if (kanan>kiri){
           tengah=(kanan+kiri)/2;
           m_sort(data, temp, kiri, tengah);
           m_sort(data, temp, (tengah+1), kanan);
 
           merge(data, temp, kiri, (tengah+1), kanan);
           }
      }
 
      void mergesort::merge(int data[], int temp[], int kiri, int tengah, int kanan){
           int bagiankiri, banyak, tmp_pos;
 
           bagiankiri = (tengah-1);
           tmp_pos = kiri;
           banyak = ((kanan-kiri)+1);
 
           while((kiri <= bagiankiri) && (tengah <= kanan)){
                if(data[kiri] <= data[tengah]){
                temp[tmp_pos] = data[kiri];
                tmp_pos = tmp_pos+1;
                kiri = kiri+1;
                }
                else{
                temp[tmp_pos] = data[tengah];
                tmp_pos = tmp_pos+1;
                tengah = tengah+1;
                }
           }
           //kopi bagian kiri
           while(kiri <= bagiankiri){
           temp[tmp_pos] = data[kiri];
           kiri = kiri+1;
           tmp_pos = tmp_pos+1;
           }
           //kopi bagian kanan
           while (tengah <= kanan){
           temp[tmp_pos] = data[tengah];
           tengah = tengah+1;
           tmp_pos = tmp_pos+1;
           }
           //kopi ke array asal
         for(int i=0;i<banyak;i++){
          data[kanan] = temp[kanan];
          kanan = kanan-1;
          output(data,banyak);
          }
      }
 
      void mergesort::output(int data[], int banyak){
           for(int i=0;i<banyak;i++)
           cout<<data[i]<<" ";
           cout<<endl;
      }
 
int main(int argc, char *argv[])
{
mergesort Mergesort;
    int banyak;
    cout<<"Banyak data: ";
    cin>>banyak;
    int array1[banyak];
    int array2[banyak];
    Mergesort.input(array1,banyak);
    cout<<"\nData awal\n";
    Mergesort.output(array1,banyak);
    cout<<"\nProses sorting dengan merge sort\n";
    Mergesort.mergeSort(array1, array2, banyak);
    cout<<"\nHasil Pengurutan : ";
    Mergesort.output(array1,banyak);
 
cout<<endl;
     
    system("PAUSE");
    return EXIT_SUCCESS;
}

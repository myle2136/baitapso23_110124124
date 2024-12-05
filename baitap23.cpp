#include <stdio.h>
int main() {
   //khai bao bien
    char HoTen[100];      
    int Tuoi;               
    char Gioitinh[10];       
    char Diachi[200];     
    float ThuNhap;          

    
    printf("Nhap ho ten: ");
    gets(HoTen);  

    printf("Nhap tuoi: ");
    scanf("%d", &Tuoi); 
    fflush (stdin);

    printf("Nhap gioi tinh: ");
    gets(Gioitinh); 

    printf("Nhap dia chi: ");
    gets(Diachi);  

    printf("Nhap thu nhap: ");
    scanf("%f", &ThuNhap);  
	 //Xuat thong tin ra man hinh 
    printf("\n--- Thong tin ca nhan ---\n");
    printf("Ho Ten: %s\n", HoTen);
    printf("Tuoi: %d\n", Tuoi);
    printf("Gioi Tinh: %s\n", Gioitinh);
    printf("Dia Chi: %s\n", Diachi);
    printf("Thu Nhap: %.2f\n", ThuNhap);

    return 0;
}


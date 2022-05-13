#include <stdio.h>
#include <string.h>

typedef struct {
    char contents[100]; ; // 1: 음료 2: 디저트
    char name[100];
    int price;
    char sugar[50];
    }Product;
//CRUD
int ceateProduct(Product *p); // 제품을 추가하는 함수
void readProduct(Product *p); // 하나의 제품 출력 함수
int updateProduct(Product *p); // 제품을 수정하는 함수
int deleteProduct(Product *p); // 제품을 삭제하는 함수

void saveProduct(Product *p, int count); //데이터를 파일에 저장 하는 함수
int loadProduct(Product *p);// 저장된 데이터를 불러오는 함수




#include <stdio.h>
#include <stdlib.h>
#include "product.h"
#include <time.h>


int selectMenu(); // 데이터를 다룰 때, 원하는 메뉴를 선택하는 함수
int selectDataNo(Product *p, int count); // 제품 번호를 불러오는 
int listProduct(Product *p, int count); // 전체 등록된 제품 리스트 출력

//검색기능 이름/가격/배송방법

void searchProductName(Product *p, int count); // 제품이름 검색
void searchProductPrice(Product *p, int count); // 제품가격 검색 
void searchProductSugar(Product *p, int count); // 배송방법 검색
//FILE



void setRandomMenu(Product *p);
Product todayMenu(Product *rp); // 랜덤으로 오늘의 추천 메뉴 알려주는 기능

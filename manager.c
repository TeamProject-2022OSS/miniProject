#include <stdio.h>
#include <string.h>
#include "manager.h"

int listProduct(Product *p, int count){
printf("********카페_디저트_자판기********\n");

    for (int i = 0; i < count; i++){
        if (p[i].price == -1)continue;
        printf("%2d ", i + 1); // NO 숫자
        readProduct(&p[i]);
        printf("\n");
    }
    printf("\n");
    return 0;
}

int selectDataNo(Product *p, int count){
    int no;
    listProduct(p, count);
    printf("번호는 (취소 :0)?");
    scanf("%d", &no);
    return no;
}

int selectMenu(){
    int menu;
    printf("\n");
    printf("1. 메뉴조회\n");
    printf("2. 메뉴추가\n");
    printf("3. 메뉴수정\n");
    printf("4. 메뉴삭제\n");
    printf("5. 파일저장 \n");
    printf("6. 이름검색\n");
    printf("7. 가격검색\n");
    printf("8. 설탕 여부 검색\n");
    printf("9. 오늘의 메뉴\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}


void searchProductName(Product *p, int count){
    int scnt = 0;
    char search[20];

    printf("검색할 이름?");
    scanf(" %s", search);
    
printf("********카페_디저트_자판기********\n"); 
    for(int i=0; i<count; i++){
        if(p[i].price == -1)continue;
        if(strstr(p[i].name,search)){
            printf("%2d ", i+1);
            readProduct(&p[i]);
            scnt++;
        }
    }
    if(scnt ==0)printf("=> 검색된 데이터 없음!");
    printf("\n");
}// 제품이름 검색

void searchProductPrice(Product *p, int count){
    int scnt = 0;
    int search = 0;

    printf("검색할 제품가격?");
    scanf(" %d", &search);
    
    printf("********카페_디저트_자판기********\n");
    for(int i=0; i<count; i++){
        if(p[i].price == -1)continue;
        if(p[i].price == search){
            printf("%2d ", i+1);
            readProduct(&p[i]);
            scnt++;
        }
    }
    if(scnt ==0)printf("=> 검색된 데이터 없음!");
    printf("\n");
} // 제품가격 검색

void searchProductSugar(Product *p, int count){
    int scnt = 0;
    int search = 0;

    printf("검색할 배송방법?");
    scanf(" %d", &search);
    
printf("********카페_디저트_자판기********\n");
    for(int i=0; i<count; i++){
        if(p[i].price == -1)continue;
        if(p[i].sugar == search ){
            printf("%2d ", i+1);
            readProduct(&p[i]);
            scnt++;
        }
    }
    if(scnt == 0)printf("=> 검색된 데이터 없음!");
    printf("\n");
    }// 배송방법 검색

void setRandomMenu(Product *rp){
       // printf("%s  %d  %d  %d\n",p->name, p->contents,p->sugar,p->price);
    strcpy(rp[0].contents,"음료"), rp[0].price = 5000, rp[0].sugar = 1, strcpy(rp[0].name,"달고나라떼");
    strcpy(rp[1].contents,"디저트"), rp[1].price = 7500, rp[1].sugar = 1, strcpy(rp[1].name,"딸기케이크");
    strcpy(rp[2].contents,"음료"), rp[2].price = 4000, rp[2].sugar = 0, strcpy(rp[2].name,"허브차");
}

Product todayMenu (Product *rp){
    listProduct(rp,3);
    srand(time(NULL));
    int rdm = (rand()%4) +1; // 0 ~ 4 사이의 숫자를 뽑아서 random 변수에 저장
    
    if(rdm == 0){
        readProduct(&rp[0]);
        return rp[0];
    }
    if(rdm == 1){
        readProduct(&rp[1]);
        return rp[1];
    }
    else 
        readProduct(&rp[2]);
        return rp[2];
}
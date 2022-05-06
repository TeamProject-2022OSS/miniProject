#include "product.h"

void readProduct(Product *p){
    printf("%s  %s  %d    %d\n",p->contents, p->name,p->sugar,p->price);
} // 하나의 제품 출력 함수

int ceateProduct(Product *p){
    int temp = 0;
    printf("음료: 1 디저트: 2 [번호입력]");
    scanf("%d", &temp);
    if(temp == 1)strcpy(p->contents, "음료");
    else strcpy(p->contents, "디저트");
    printf("제품명은? ");
    scanf(" %[^\n]s",p->name);
    printf("판매가격은? ");
    scanf("%d",&p->price);
    printf("설탕? ");
    scanf("%d",&p->sugar);
    return 1;
} // 제품을 추가하는 함수

int updateProduct(Product *p){
    int temp = 0;
    
    printf("1.음료 2.디저트? [번호입력] ");
    scanf("%d", &temp);
    if(temp == 1)strcpy(p->contents, "음료");
    else strcpy(p->contents, "디저트");
    printf("제품명은? ");
    scanf(" %[^\n]",p->name);
    printf("판매가격은? ");
    scanf("%d",&p->price);
    printf("설탕? [설탕 X : 0 설탕 O : 1");
    scanf("%d",&p->sugar);
    return 0;
} // 제품을 수정하는 함수

int deleteProduct(Product *p){
    p->price = -1;
    printf("삭제됨\n");
    return 0;
} // 제품을 삭제하는 함수

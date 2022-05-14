#include "product.h"

void readProduct(Product *p){
    printf("%s  %s  %s    %d\n",p->contents, p->name,p->sugar,p->price);
} // 하나의 제품 출력 함수

int ceateProduct(Product *p){
   int temp = 0;
    printf("[1] 음료/ [2] 디저트 [번호입력]: ");
    scanf("%d", &temp);
    if(temp == 1)strcpy(p->contents, "음료");
    else strcpy(p->contents, "디저트");
    printf("제품명은? ");
    scanf(" %[^\n]s",p->name);
    printf("판매가격은? ");
    scanf(" %d",&p->price);
    printf("[1] 시럽 X / [2] 시럽 O [번호입력]: ");
    scanf(" %d", &temp);
    if(temp == 2)strcpy(p->sugar, "시럽추가");
    else strcpy(p->sugar, "X");
    return 1;
} // 제품을 추가하는 함수

int updateProduct(Product *p){
    int temp = 0;
    printf("[1] 음료/ [2] 디저트 [번호입력]: ");
    scanf("%d", &temp);
    if(temp == 1)strcpy(p->contents, "음료");
    else strcpy(p->contents, "디저트");
    printf("제품명은? ");
    scanf(" %[^\n]s",p->name);
    printf("판매가격은? ");
    scanf(" %d",&p->price);
    printf("[1] 시럽 X / [2] 시럽 O [번호입력]: ");
    scanf(" %d", &temp);
    if(temp == 2)strcpy(p->sugar, "시럽추가");
    else strcpy(p->sugar, "X");
    return 0;
} // 제품을 수정하는 함수

int deleteProduct(Product *p){
    p->price = -1;
    printf("삭제됨\n");
    return 0;
} // 제품을 삭제하는 함수

void saveProduct(Product *p, int count){
    FILE *fp ;
    fp = fopen("Product.txt","wt");
    for(int i=0; i<count; i++){
        if(p->price == -1)continue;
        fprintf(fp,"%s  %s  %s  %d\n",p[i].contents, p[i].name,p[i].sugar,p[i].price);
    }
    fclose(fp);
    printf("=>저장됨!\n");
} //데이터를 파일에 저장 하는 함수

int loadProduct(Product *p){
    int count = 0;
    FILE *fp;
    fp = fopen("Product.txt","rt");
    printf("\n");

    if(fp == NULL){
        printf("=> 파일 없음");
    }
    else{
        for(int i=0; i<30; i++){
            fscanf(fp,"%s",p[i].name);
            if(feof(fp))break;
            fscanf(fp,"%s",p[i].contents);;
            fscanf(fp," %s",p[i].sugar);
            fscanf(fp,"%d",&p[i].price);
            count++;
        }
        fclose(fp);
        printf("=> 로딩 성공\n");
    }
    return count;
}// 저장된 데이터를 불러오는 함수


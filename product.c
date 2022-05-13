#include "product.h"

void readProduct(Product *p){
    printf("%s  %s  %d    %d\n",p->contents, p->name,p->sugar,p->price);
} // 하나의 제품 출력 함수

int createProduct(Product *p){
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

void saveProduct(Product *p, int count){
    FILE *fp;
    fp = fopen("recipt.txt", "wt");
    for(int i=0; i<count; i++){
        if(p[i].price==-1) continue;
        fprintf(fp, "%s  %s  %d    %d\n",p[i].contents, p[i].name,p[i].sugar,p[i].price);
    }
    fclose(fp);
    printf("=> 저장됨\n");
} //제품을 파일에 저장하는 함수
int loadProduct(Product *p){
    int count=0;
    FILE *fp;
    fp = fopen("recipt.txt", "rt");
    for(int i=0; i<100; i++){
        fscanf(fp, "%s", p[i].contents);
        if(feof(fp)) break;
        fscanf(fp, "%s", p[i].name);
        fscanf(fp, "%d", &p[i].sugar);
        fscanf(fp, "%d", &p[i].price);
        count++;
    }
    if(count==0) printf("=>파일 없음\n");
    else printf("=> 불러옴\n");
    fclose(fp);
    return count;
} // 파일에 저장된 정보들을 불러오는 함수

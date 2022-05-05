typedef struct {
    int contents; // 1: 음료 2: 디저트
    char name[100];
    int price;
    int sugar;
    int coin; // 자판기에 넣은 돈
    }Product;
    // 구조체 
    
int createProduct(Product *p){ // 제품을 추가하는 함수 => 메뉴 선택
	printf("어떤 것을 원하시나요? ");
	scanf("%d", &p->contents);
	if(contents==1) menuDrinks(); //음료 메뉴판 출력 함수
	else if(contents==2) menuDessert(); //디저트 메뉴판 출력 함수
	printf("원하는 메뉴는? ");
	getchar();
	scanf("%[^\n]s", p->name);
	printf("돈을 넣어주세요. ");
	scanf("%d", &p->coin);
	printf("설탕을 추가하시겠습니까? ");
	scanf("%d", &p->sugar);
}
void readProduct(Product *p){ // 하나의 제품 출력 함수 => 구매 목록 보기
	printf("\t%s %d %d\n", p->name, p->price, p->sugar);
}
int updateProduct(Product *p){ // 제품을 수정하는 함수 => 구매 목록 수정 => 돈 관련 충돌을 없애고자 구매 취소 후 재구매
	deleteProduct(p);
	createProduct(p);
}
int deleteProduct(Product *p){ // 제품을 삭제하는 함수 => 구매 취소 [환불]
	int refund;
	refund=p->price;
	p->price=-1;
	return refund;
}

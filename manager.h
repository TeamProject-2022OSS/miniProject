typedef struct {
    char name[100];
    char contents[100];
    char weight[100];
    int price;
    int shipping;
    int coin; // 자판기에 넣은 돈
    }menu;
    // 구조체 
    
int ceateProduct(Product *p); // 제품을 추가하는 함수 => 메뉴 선택
void readProduct(Product *p); // 하나의 제품 출력 함수 => 구매 목록 보기
int updateProduct(Product *p); // 제품을 수정하는 함수 => 구매 목록 수정 
int deleteProduct(Product *p); // 제품을 삭제하는 함수 => 구매 취소 [환불]

void saveProduct(Product *p, int count); //데이터를 파일에 저장 하는 함수
int loadProduct(Product *p);// 저장된 데이터를 불러오는 함수

int selectMenu(); // 데이터를 다룰 때, 원하는 메뉴를 선택하는 함수
int selectDataNo(Product *p, int count); // 제품 번호를 불러오는 
int listProduct(Product *p, int count); // 전체 등록된 제품 리스트 출력
//검색기능 이름/가격/배송방법

void searchProductName(Product *p, int count); // 제품이름 검색
void searchProductPrice(Product *p, int count); // 제품가격 검색 
void searchProductShipping(Product *p, int count); // 배송방법 검색

void todayMenu(Product *p); // 랜덤으로 오늘의 추천 메뉴 알려주는 기능
//void inputCoin(Product *p); // 자판기 동전을 받는 기능
//int viewChange(); // 거스름돈 내역을 알려주는 기능

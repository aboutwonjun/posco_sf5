//  작성자 : 이원준
// 작성일자 : 24.04.22
//
// main문이 있는 파일

#include <iostream> //도구모음 = Library, 최상단에 위치 

// main?
// 1. 프로그램 전체에서 딱 한 개만 존재하는 "함수"
// 2. 프로그램 전체에서 가장 먼저 "실행"되는 소스 코드.

int main() 
{   
    // 프롬프트 문자 Print 
    std::cout << "숫자를 입력해주세요:\n"; 

    int num; //정수 선언 
    std::cin >> num; //input
    return 0;
}

//;은 프로그램이 실행되는 단위를 의미
//{} 코드 블럭


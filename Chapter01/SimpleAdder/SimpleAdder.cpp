// SimpleAdder.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int val1;
    std::cout << "첫 번째 숫자 입력:";
    std::cin >> val1;

    int val2;
    std::cout << "두 번째 숫자 입력:";
    std::cin >> val2;
    
    int result = val1 + val2;
    std::cout << "덧셈결과: " << result << std::endl;
    return 0;
}

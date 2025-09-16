#include <iostream>

int main() {
    int dayOfMonth, dayOfWeek;

    std::cout << "Введите число месяца (1-31): ";
    std::cin >> dayOfMonth;

    std::cout << "Введите номер дня недели (1-7, где 1 - понедельник, 5 - пятница): ";
    std::cin >> dayOfWeek;

    // Проверяем, что введены корректные значения
    if (dayOfMonth < 1 || dayOfMonth > 31 || dayOfWeek < 1 || dayOfWeek > 7) {
        std::cout << "Введены некорректные данные." << std::endl;
        return 1;
    }

    // В Италии пятница - 5-й день недели (если считать с понедельника)
    if (dayOfWeek == 5 && dayOfMonth == 17) {
        std::cout << "Это неудачный день: пятница, 17-е." << std::endl;
    }
    else {
        std::cout << "Это обычный день." << std::endl;
    }

    return 0;
}


			
	

	
	
		
			

	



	



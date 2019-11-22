#include <iostream>
#include <vector>
#include <queue>


bool willApplesRot(std::vector<std::vector<int> > &box, int &turnsCounter) {

	int numberOfRows = box.size();
	if (numberOfRows == 0)
		return false;

	int numberOfColumns = box[0].size();

	// в опашката ще пазим местата на ябълките в матрицата/щайгата под формата на наредени двойки от координати
	std::queue<std::pair<int, int> > q;

	// с този брояч ще следим колко здрави ябълки са останали
	int freshApplesCounter = 0;

	// в началото обхождаме матрицата, за да добавим местата на гнилите ябълки и броя на пресните
	for (int i = 0; i < numberOfRows; i++)
		for (int j = 0; j < numberOfColumns; j++)
		{
			if (box[i][j] == 2)
				q.push(std::pair<int, int>(i, j));
			else if (box[i][j] == 1)
				freshApplesCounter++;
		}

	// Използваме фиктивен елемент, за да разграничим ябълките, които са били гнили поначало
	// Същият елемент ще се използва, за да разграничим ябълките, които изгниват след първата единица време (първия такт), т.е.
	// са съседи на поначало гнили ябълки (нулев такт), после ябълките, които изгниват на втория такт, т.е. са съседи
	// на изгнили на първия такт ябълки и т.н.
	q.push(std::pair<int, int>(-1, -1));

	// брояч за тактовете време, необходими да изгният ябълките
	turnsCounter = 0;

	while (!q.empty())
	{ // докато има ябълки в опашката изваждаме първата и проверяваме кои ябълки могат да изгният от нея
	  // използваме опашка, за да запазим поредността на изгниване на ябълките
		std::pair<int, int> current = q.front();
		q.pop();

		//с first и second се взимат първата и втората стойност от наредената двойка
		if (current.first != -1 || current.second != -1)
		{
			// проверяваме за всяка от възможните посоки, в случая север, юг, запад и изток
			// като трябва да осигурим, че координатите са валидни и не излизаме извън рамките на матрицата
			// първо пробваме десния съсед
			if (current.second + 1 < numberOfColumns && box[current.first][current.second + 1] == 1)
			{
				// маркираме ябълката за изгнила веднага, за да не може да изгние от по-късно разгледана ябълка
				box[current.first][current.second + 1] = 2;
				// добавяме я в опашката, за да я обработим пак
				q.push(std::pair<int, int>(current.first, current.second + 1));
				freshApplesCounter--;
			}
			// после левия съсед
			if (current.second - 1 >= 0 && box[current.first][current.second - 1] == 1)
			{
				box[current.first][current.second - 1] = 2;
				q.push(std::pair<int, int>(current.first, current.second - 1));
				freshApplesCounter--;
			}
			// после долния съсед
			if (current.first + 1 < numberOfRows && box[current.first + 1][current.second] == 1)
			{
				box[current.first + 1][current.second] = 2;
				q.push(std::pair<int, int>(current.first + 1, current.second));
				freshApplesCounter--;
			}
			// и накрая горния съсед
			if (current.first - 1 >= 0 && box[current.first - 1][current.second] == 1)
			{
				box[current.first - 1][current.second] = 2;
				q.push(std::pair<int, int>(current.first - 1, current.second));
				freshApplesCounter--;
			}

			if (freshApplesCounter == 0)
			{
				turnsCounter++;
				return true;
			}
		}
		else
		{
			turnsCounter++;
			if (!q.empty())
				q.push(current);
		}
	}

	return false;
}

void willApplesRotCout(std::vector<std::vector<int> > &box, int &turnsCounter){
    std::cout << willApplesRot(box, turnsCounter) << std::endl;
    std::cout << "State of box after " << turnsCounter << " turns : " << std::endl;

    for (int i = 0; i < box.size(); i++)
    {
        for (int j = 0; j < box[0].size(); j++)
            std::cout << box[i][j] << ' ';
        std::cout << std::endl;
    }
}
int main()
{
	std::vector<std::vector<int> > box = { {2, 1, 0, 1, 1},
											{1, 0, 1, 2, 1},
											{1, 0, 0, 1, 1} };
	int turnsCounter = 0;
	willApplesRotCout(box,turnsCounter);

    return 0;
}
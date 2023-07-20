#include <iostream>
#include <vector>

int letterCounter(std::vector<std::vector<char>> arr, char c) {
	int counter{0};
	
	for(size_t i{0}; i < arr.size();++i){
		for(size_t j{0}; j < arr[i].size(); ++j ){
			if(arr[i][j] == c){
				++counter;
			}
		}
	}
	return counter;
}

int main()
{
    std::vector<std::vector<char>> letters {
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		};
		
	char le{'D'};
  
  std::cout << letterCounter(letters,le) << "\n";
}
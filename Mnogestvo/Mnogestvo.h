#pragma once
class Mnogestvo
{
private:
	int* arr;
	int size;
public:
	Mnogestvo(int x) {
		this->size = 1;
		this->arr = new int[this->size];
		this->arr[0] = x;
		
	}
	Mnogestvo() : Mnogestvo(0) {
	};
	~Mnogestvo() {
		if (this->arr) {
			delete[] this->arr;
		}
	}
	void showMnogestvo() {
		for (int i = 0; i < this->size; i++) {
			std::cout << this->arr[i];
		}
	}

	bool included(Mnogestvo M, int n,int size) {

		for (size_t i = 0; i < length; i++)
		{

		}
	}

	Mnogestvo add(int x)
};


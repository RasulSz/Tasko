#include <iostream>
using namespace std;

class Engine {
	int engine_no;
	string company;
	double volume;
public:
	Engine() {
		this->engine_no = 0;
		this->company = " ";
		this->volume = 0;
	}
	Engine(int engine_no, string company, double volume) {
		SetEngineNo(engine_no);
		SetCompany(company);
		SetVolume(volume);
	}
#pragma region SetGet
	void SetEngineNo(int engine_no) {
		this->engine_no = engine_no;
	}

	void SetCompany(string company) {
		this->company = company;
	}

	void SetVolume(double volume) {
		this->volume = volume;
	}

	int GetEngineNo()const {
		return this->engine_no;
	}

	string GetCompany()const {
		return this->company;
	}

	double GetVolume()const {
		return this->volume;
	}
#pragma endregion
	void Show() {
		cout << "=====Engine=====" << endl;
		cout << "Engine No : " << GetEngineNo() << endl;
		cout << "Company : " << GetCompany() << endl;
		cout << "Volume : " << GetVolume() << endl;
		cout << "================" << endl;
	}
};

class SameInfo {
public:
	int id;
	string model;
	string vendor;
	string engine;
	SameInfo() {
		id = 0;
		model = " ";
		vendor = " ";
		engine = " ";
	}
	SameInfo(int id,string model,string vendor,string engine){
		this->id = id;
		this->model = model;
		this->vendor = vendor;
		this->engine = engine;
	}
	void Show() {
		cout << "ID : " << this->id << endl;
		cout << "Model : " << this->model << endl;
		cout << "Vendor : " << this->vendor << endl;
		cout << "Engine : " << this->engine << endl;
	}
};

class Car : public Engine,public SameInfo {
	bool hasSpoiler;
public:
	Car() {
		this->hasSpoiler = " ";
	}
	Car(bool hasSpoiler) {
		SetSpoiler(hasSpoiler);
	}
#pragma region SetGet
	
	void SetSpoiler(bool hasSpoiler) {
		this->hasSpoiler = hasSpoiler;
	}

	
	bool GetSpoiler()const {
		return hasSpoiler;
	}
#pragma endregion
	void Show() {
		cout << "=====Car Information=====" << endl;
		cout << "Spoiler (0-have not,1-have): " << GetSpoiler() << endl;
	}
};

class Ship : public Engine,public SameInfo {
	bool hasSail;
public:
	Ship() {
		this->hasSail = " ";
	}
	Ship(bool hasSail) {
		SetSail(hasSail);
	}
#pragma region SetGet
	void SetSail(bool hasSail) {
		this->hasSail = hasSail;
	}

	bool GetSail()const {
		return this->hasSail;
	}
#pragma endregion
	void Show() {
		cout << "=====Ship Information=====" << endl;
		cout << "Sail (0-have not,1-have): " << GetSail() << endl;
	}
};

class Airplane : public Engine,public SameInfo{
	int enginecount;
public:
	Airplane() {
		this->enginecount;
	}
	Airplane(int enginecount) {
		SetEngineCount(enginecount);
	}
#pragma region SetGet
	
	void SetEngineCount(int count) {
		this->enginecount = count;
	}

	
	int GetEngineCount() const {
		return this->enginecount;
	}
#pragma endregion
	void Show() {
		cout << "=====Airplane Information=====" << endl;
		cout << "Engine Count : " << GetEngineCount() << endl;
	}
};

void main() {
	Car::Engine careng(12345, "Mercedes Benz", 5.5);
	Car::SameInfo carinf(12345, "W210 E55", "Mercedes", "5.5 Turbo");
	Car car(true);
	car.Show();
	carinf.Show();
	careng.Show();
}

#include <iostream>
#include <string>
using namespace std;

int main() {

	int qi = 0;
	char c_awnser[15];
	string awnser;

	string questions[6] = { "What's your name? ",
							"What's your age? ",
							"What's your gender? ",
							"What's your adress? ",
							"Are you married (y/n)? ",
							"What's your height (m)? "
	};

	struct per_s {
		string name;
		int age;
		string gender;
		string adress;
		bool married;
		float height;
	}per1;

	while (qi < 6) {

		scanf("%14s", c_awnser);
		awnser.assign(c_awnser);

		switch (qi)
		{
		case 0:
			per1.name = awnser;
			break;

		case 1:
			per1.age = stoi(awnser);
			break;

		case 2:
			per1.gender = awnser;
			break;

		case 3:
			per1.adress = awnser;
			break;

		case 4:
			if (awnser[0] == 'y')
				per1.married = true;
			else
				per1.married = false;
			break;

		case 5:
			per1.height = stof(awnser);
			break;

		default:
			break;
		}

		qi++;

	}


}
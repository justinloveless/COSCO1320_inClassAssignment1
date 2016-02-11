#include <string>
#include "Carousel.h"
#include "Train.h"
#include "Viking.h"
#include "RollerCoaster.h"

using namespace std;
int main() {
	ParkRide** rides = new ParkRide*[5];
	Train t("Choo Choo Express", 7);
	Viking v("Norseman Power", 48);
	RollerCoaster r("Invertigo", 48);
	rides[0] = new Carousel("Pony Express", 7);
	rides[1] = &t;
	rides[2] = &v;
	rides[3] = &r;
	rides[4] = new RollerCoaster;
	for (int i = 0; i < 5; i++)
		rides[i]->showInfo();
	cout << "\n---------\n";
	cout << "Park Information\n";
	cout << "Number of park rides instantiated: ";
	cout << ParkRide::getNumOfParkRides() << endl;
	cout << " " << ChildrenRide::getNumOfChildrenRides();
	cout << " are children rides\n";
	cout << " " << TeenageRide::getNumOfTeenageRides();
	cout << " are teenager rides\n";
	system("pause");
	delete rides[0];
	delete rides[4];
	delete[] rides;
	return 0;}
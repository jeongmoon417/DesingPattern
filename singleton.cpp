/******************************************************
 * 싱글턴 패턴 (Singleton pattern)
 * : 오직 한개의 클래스 인스턴스만을 갖도록 보장하고
 *   이에 대한 전역적인 접근점을 제공
 *****************************************************/

#include <iostream>
#include <singleton.h>
using namespace std;

int main (void) {

        cout << "**Main Fuction Start**";

	//SingletonClass *ins1 = SingletonClass::getInstance();

	SingletonClass::getIns2();

	return 0;
}


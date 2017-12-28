/************************************************************
 *
 * singleton (싱글톤) 예제 - 헤더파일
 *
 * (설명)..
 *
 *
 *
 *
 * **********************************************************/

class SingletonClass {
        private:
                static SingletonClass* SingleInstance;
                int total=0;
                SingletonClass() {
                        cout <<  "[SingletonClass]생성자 호출";
                }


        public:
                static SingletonClass* getInstance() {

		}
                void addValue (int value);
                int getTotalValue ();
                static void getIns2 () {
                        cout << "[SingletonClass]getIns2 호출";
                        cout << SingleInstance;
                }
};


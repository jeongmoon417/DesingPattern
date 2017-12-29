/*******************************************************************************
 * singletonMulFile.h
 *
 * Singleton (싱글톤) - 헤더파일
 *
 * 생성자가 여러번 호출 되더라도 실제로 생성되는 객체는 하나이고,
 * 최초 생성 이후에 호출된 생성자는 최초의 생성자가 생성한 객체를 리턴한다
 *
 * *****************************************************************************/

class singleton {
        private:
                static singleton* instance_;
                singleton ();
                int value=0;
        public:
                static singleton* getInstance ();
                int getValue ();
                void incValue ();
};


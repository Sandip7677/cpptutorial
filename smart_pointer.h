namespace smart_pointer{
    template <class t>
    class sp{
        t* ptr;
        public:
        sp(t* p=NULL){
            ptr=p;
        }
        ~sp(){
            delete ptr;
        }
        t* operator->(){return ptr;}
        t* operator*(){return *ptr;}
    };
}
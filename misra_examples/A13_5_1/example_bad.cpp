// Only non-const version of operator[] is implemented
class Test{
    public:
        int& operator[](int n) {
            return elements[n];
        }
    private:
        int* elements;
};
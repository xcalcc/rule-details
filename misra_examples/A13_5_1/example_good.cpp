// Both const and non-const version of operator[] are implemented
class Test{
    public:
        int& operator[](int n) {
            return elements[n];
        }
        const int& operator[](int n) const {
            return elements[n];
        }
    private:
        int* elements;
};
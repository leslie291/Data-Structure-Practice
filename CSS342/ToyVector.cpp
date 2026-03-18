class ToyVector {
private:
    int* data_;
    int size_;
    int capacity_;

    //helper function to grow the vector when capacity is reached
    void grow() {

        //new capacity
        int newCapacity = (capacity_ ==0) ? 1 : capacity_ * 2;

        //create new array
        int* data2 = new int[newCapacity];

        //copy old data to new array
        for (int i = 0; i < size_; i++) {
            data2[i] = data_[i];
        }

        //free old array 
        delete[] data_;

        //update data pointer and capacity
        data_ = data2;
        capacity_ = newCapacity;
    }

public:
ToyVector(): data_(nullptr), size_(0), capacity_(0) {}

//1) Destructor 
~ToyVector() { delete[] data_;}

//2) Copy Constructor
// perform deep copy from other ToyVector to this new born ToyVector
ToyVector(const ToyVector& other): size_(other.size_), capacity_(other.capacity_) { 

    data_ = new int[capacity_];

    // 將 other 入面現有嘅元素逐個複製過嚟（deep copy，而唔係 share pointer）
    for (int i = 0; i < size_; i++) {
        data_[i] = other.data_[i];
    }
    // 行完呢個 constructor：
    // - 呢個新 ToyVector 有自己一條 array（data_ 指住新地址）
    // - size_ / capacity_ 同 other 一樣
    // - 內容值都一樣，但 heap memory 係獨立
}

//3) Copy Assignment Operator
// perform deep copy from other existed ToyVector to this existed ToyVector
ToyVector& operator=(const ToyVector& other) {
    //Prevent error caused by self-assignment
    if (this == &other) {
        return *this; // Return the current object without doing anything
    }

     // Free existing resources (this ToyVector's old heap array)
    delete[] data_;

    size_ = other.size_;
    capacity_ = other.capacity_;

    data_ = new int[capacity_];
    for (int i = 0; i < size_; i++) {
        data_[i] = other.data_[i];
    }

    return *this; 
}

//Getter: size
int size() const {  
    return size_;
}

//Getter: capacity
int capacity() const {
    return capacity_;

}

void pushBack(int value) {
    if (size_ == capacity_) {
        grow();
    }
    data_[size_] = value;
    size_++;
}

};
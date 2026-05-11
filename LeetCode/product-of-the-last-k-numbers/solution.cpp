class ProductOfNumbers {
private:
vector<int> vct;
int size=0;
public:
    ProductOfNumbers() {
        vct.push_back(1);
        size=0;
        
    }
    
    void add(int num) {
        if(num==0){
            vct={1};
            size=0;
        }
        else{
            vct.push_back(vct[size]*num);
            size++;

        }

        
    }
    
    int getProduct(int k) {
        if(k>size) return 0;
        return vct[size]/vct[size-k];
        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
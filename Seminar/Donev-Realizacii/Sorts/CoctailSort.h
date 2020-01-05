template <class T>
void sortCocktailStyle(L<T> & dl){
    bool swapped=true;
    auto itB=dl.begin();
    auto itE=dl.end();
    --itE;
    while(swapped){
        swapped=false;
        //Forward Comparison
        for(auto it=itB;it!=itE;++it){
            if(*it>*(next(it))){
                std::iter_swap(it,next(it));
                swapped= true;
            }
        }
        if(!swapped) break;
        swapped=false;
        //Last element is sorted
        --itE;
        //Backward Comparison
        for(auto it=itE;it!=prev(itB);--it){
            if(*it>*(next(it))){
                std::iter_swap(it,next(it));
                swapped=true;
            }
        }
        //First element is sorted
        ++itB;
    }
}

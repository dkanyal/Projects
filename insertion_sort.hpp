#include <vector>
template <typename T>
void insertion_sort(std::vector<T> &a)
{
    for (long int i=1; i <a.size(); i++){
       auto tmp=a[i];
        auto j=i;
        while ((j>0) and (a[j-1]>tmp)){
        a[j]=a[j-1];
        j--;
    }
        a[j]=tmp;
}
        
    }
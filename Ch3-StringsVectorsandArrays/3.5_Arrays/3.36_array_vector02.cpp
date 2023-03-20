#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr1[5] = {1, 2, 4, 5, 3};
    int arr2[5] = {1, 2, 4, 5, 3};
    bool arr_equal = true;

    vector<int> vec1{1, 3, 5};    
    vector<int> vec2{1, 3, 4};
    bool vec_equal = true;

    if (end(arr1) - begin(arr1) == end(arr2) - begin(arr2)) {
        for (int i = 0; i < 5; ++i)
        {
            if (arr1[i] != arr2[i])
            {
                arr_equal = false;
                break;
            }
        }
    } else {
        arr_equal = false;
    }

  
    if (vec1.size() == vec2.size()) {
        for (auto beg1 = vec1.begin(), beg2 = vec2.begin(); 
        beg1 != vec1.end(); ++beg1, ++beg2) {
            if (*beg1 != *beg2)
            {
                vec_equal = false;
                break;
            }
        }
    } else {
        vec_equal = false;
    }
    
    cout << "arr1 ==  arr2:" << arr_equal << endl;
    cout << "vec1 ==  vec2:" << vec_equal << endl;
    return 0;
}
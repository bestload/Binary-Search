#include "header.h"

int search(vector<int>& nums, int target)
{
    /*
        Этапы:
            1. Проверить конец и начало вектора на совпадение
            2. Начать проход по вектору
            3. Попасть в середину вектора
            4. Проверить на совпадение элемент, иначе
             4.1. если он больше, то изменить верхнюю границу
             4.2. если он меньше, то изменить нижнюю границу
            5. Увеличить счётчик
            6. Если элемент не нашёлся, то вернуть -1
    
    */

    int pos_start = 0;
    int pos_end = nums.size() - 1;
    int pos_search = 0;
    int i = 0;

    if(nums[pos_start] == target)
    {
        return pos_start;
    }
    else if(nums[pos_end] == target)
    {
        return pos_end;
    }
    else
    {
        while(i != nums.size())
        {
            pos_search = (pos_start + pos_end) / 2;
            if(nums[pos_search] == target)
            {
                return pos_search;         
            }
            else if(nums[pos_search] > target)
            {
                pos_end = pos_search;
            }
            else
            {
                pos_start = pos_search;
            }
            ++i;    
        }
    }
    return -1;
}
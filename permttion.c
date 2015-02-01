#include <iostream>
using namespace std;
// this is an implementation of the Johnson-Trotter algorithm
const int arraysize = 10;
 
struct bool_int
{
        int num;
        bool left;
};
 
bool is_done(bool_int data[]);
bool is_mobile(bool_int data[], int index);
int get_biggest_mobile_index(bool_int data[]);
void swap(bool_int data[], int index);
void reverse(bool_int data[], int val);
void printarray(bool_int data[]);
 
int main()
{
        bool_int data[arraysize];
        for(int i = 0; i < arraysize; i++)
        {
                data[i].num = i;
                data[i].left = true;
        }
        printarray(data);
        int to_swap;
        int val;
        //while there exists a mobile integer
        while(!is_done(data))
        {
                //find the largest mobile integer k
                to_swap = get_biggest_mobile_index(data);
                val = data[to_swap].num;
                //swap k and the adjacent integer it is looking at
                swap(data, to_swap);
                //reverse the direction of all integers larger than k
                reverse(data, val);
                printarray(data);
        }
       
        return 0;
}
 
void reverse(bool_int data[], int val)
{
        for(int i = 0; i < arraysize; i++)
        {
                if(data[i].num > val)
                {
                        data[i].left = !data[i].left;
                }
        }
}
 
void swap(bool_int data[], int index)
{
        if(data[index].left)
        {
                bool_int temp = data[index];
                data[index] = data[index-1];
                data[index-1] = temp;
        }
        else
        {
                bool_int temp = data[index];
                data[index] = data[index+1];
                data[index+1] = temp;
        }
}
 
bool is_mobile(bool_int data[], int index)
{
        if(index == 0 && data[index].left)
        {
                return false;
        }
        if(index == arraysize-1 && !data[index].left)
        {
                return false;
        }
        if(data[index].left && data[index].num < data[index-1].num)
        {
                return false;
        }
        if(!data[index].left && data[index].num < data[index+1].num)
        {
                return false;
        }
        return true;
}
 
bool is_done(bool_int data[])
{
        for(int i = 0; i < arraysize; i++)
        {
                if(is_mobile(data, i))
                {
                        return false;
                }
        }
        cout << "done!\n";
        return true;
}
 
int get_biggest_mobile_index(bool_int data[])
{
        int temp;
        for(int i = 0; i < arraysize; i++)
        {
                if(is_mobile(data, i))
                {
                        temp = i;
                        break;
                }
        }
        for(int i = 0; i < arraysize; i++)
        {
                if(is_mobile(data, i) && data[i].num > data[temp].num)
                        temp = i;
        }
 
        return temp;
}
 
void printarray(bool_int data[])
{
        for(int i = 0; i < arraysize; i++)
        {
                cout << data[i].num+1 << ' ';
        }
        cout << endl;
}

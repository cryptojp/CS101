#include<iostream>
#include<string>
#include<vector>


using std::string;
using std::cout;
using std::cin;
using std::vector;
using std::endl;

class Sort{  
    public:
        Sort(vector<int> list);
        vector<int> getCollectionToSort();
        void printListToSort();
        void printListLength();
        void bubbleSort();
        void selectionSort();
    private:
        vector<int> collection_to_sort;
};

Sort::Sort(vector<int> list) {
    collection_to_sort = list;
}

void Sort::printListToSort(){
    for(int i=0; i < collection_to_sort.size() ;i++){
        cout << collection_to_sort[i] << ", ";
    }
    cout << endl;
}

void Sort::printListLength(){
    cout << "Length of array: " << collection_to_sort.size() << endl;
}

vector<int> Sort::getCollectionToSort(){
    return collection_to_sort;
}

void Sort::bubbleSort()
{
    int iterations = 0;
    int swaps = 0;
    int length = collection_to_sort.size();
    for(int i = 0; i < length; i++){
        for(int j=0; j<length; j++){
            iterations++;
            int current_element = collection_to_sort[j];
            int next_element = collection_to_sort[j+1];
            if(current_element > next_element){
                swaps++;
                collection_to_sort[j] = next_element;
                collection_to_sort[j+1] = current_element;
            }
        }
    }
    cout << "Completed bubble sort. Number of iterations: " << iterations << ". Number of element swaps: " << swaps << endl;
    cout << "Sorted Array..." << endl;
    printListToSort();
}

void Sort::selectionSort()
{
    int iterations = 0;
    int swaps = 0;
    int length = collection_to_sort.size();
    // for each element in the array

        // for each j in array 
            // 
    /*
    for(int i = 0; i < length; i++){
        for(int j=0; j<length; j++){
            iterations++;
            int current_element = collection_to_sort[j];
            int next_element = collection_to_sort[j+1];
            if(current_element > next_element){
                swaps++;
                collection_to_sort[j] = next_element;
                collection_to_sort[j+1] = current_element;
            }
        }
    }
    cout << "Completed bubble sort. Number of iterations: " << iterations << ". Number of element swaps: " << swaps << endl;
    cout << "Sorted Array..." << endl;
    printListToSort();*/

}

int main()
{
    vector<int> list = {21,22,73,84,5,5,10};
    Sort s(list);
    s.bubbleSort();
    return 0;
}
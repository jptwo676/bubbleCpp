#include <iostream>

//bubble sort

void displayArr(int arr[]);

int main()
{
    int numbers[10] = {4, 3, 2, 1, 5, 7, 6, 8, 9, 0};
    int temp = 0;
    int check = 0;

    std::cout << "Array original: " << '\n';
    displayArr(numbers);

    //sort
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            temp = numbers[j];
            if(numbers[j] > numbers[j+1])
            {
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
            else
            {
                check++;
            }
        }
        if(check > 4)
        {
            std::cout << "Saindo pelo break, i = " << i << '\n';
            break;
        }
        check = 0;
    }

    std::cout << "Array sorteado: " << '\n';
    displayArr(numbers);

    return 0;
}

void displayArr(int arr[])
{
    for(int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';
}


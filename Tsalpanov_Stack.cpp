#include <iostream>

using namespace std;

int pop(int *StacK, int a){
    int *px;
    px = StacK;
    cout << "Stack = ";
    for(int i = 0; i<a; i++){
        if(i==0){
            cout << *px << " ";
            px  = px + 1;
            continue;
        }
        else{
            cout << *px << " ";
            px  = px + 1;
        }
    }
    cout << endl;
    int delelem = *px;
    cout << "Deleted element: " << delelem << endl;
    return delelem;
}

void push(int *StacK, int a){
    int *pa;
    pa = StacK;
    int newData;
    cout << "Enter new data: ";
    cin >> newData;
    cout << "Stack = ";
    StacK[a + 1] = newData;
    for(int i = 0; i<=a; i++){
        if(i == 0){
            cout << *pa << " ";
            pa  = pa + 1;
        }
        else{
            cout << *pa << " ";
            pa  = pa + 1;
        }
    }
    cout << *pa << endl;
}

int main()
{
    cout << "Enter size of stack: ";
    int s1ze;
    cin >> s1ze;
    cout << endl;
    int *StacK = new int[s1ze];
    cout << "Enter data in stack" << endl;
    int data, sizeFin;
    char cont;
    for (sizeFin = 0; sizeFin < s1ze; sizeFin++){
            cin >> data;
            StacK[sizeFin] = data;
            cout << "Do you want to continue typing?(y/n): ";
            cin >> cont;
            if (cont == 'y'){continue;}
                else {break;}
        }

    for (int j = 0; j<=sizeFin; j++){
        cout << StacK[j] << " ";
    }
    cout << endl;
    int choosen;
    while(true){
        cout << "Choose function(1-push/2-pop/0-exit): ";
        cin >> choosen;
        if(choosen == 1){
            push(StacK, sizeFin);
            sizeFin = sizeFin + 1;
        }
        if(choosen == 2){
            pop(StacK, sizeFin);
            sizeFin = sizeFin - 1;
        }
        if(choosen == 0){
            delete [] StacK;
            break;
        }
    }
    return 0;
}



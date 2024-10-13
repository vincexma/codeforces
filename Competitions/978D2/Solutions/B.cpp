#include <iostream>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

int sln(){
    int n, sales_per_customer, naieve_customers, max_stock = 0, total_stock = 0;
    bool remainder = false;
    cin >> n >> sales_per_customer;
    while(n--) {
        int model_stock;
        cin >> model_stock;
        total_stock += model_stock;
        if (model_stock > max_stock){
            max_stock = model_stock;
        }
    }
    naieve_customers = total_stock/sales_per_customer;
    remainder = naieve_customers * sales_per_customer < total_stock;
    return MAX(max_stock, naieve_customers + remainder);
}

int main()
{
    int n;
    cin >> n;
    while(n--){
        cout << sln() << endl;
    }
    return 0;
}
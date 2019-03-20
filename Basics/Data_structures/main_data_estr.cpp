int main()
{
    struct product{
        int weight;
        double price;
    };

    struct product1{
        int weight;
        double price;
    } apple1, banana1, melon1; //This type of declaration leaves product1 as a optional type.


    product apple;
    product banana, melon;

    return 0;

}
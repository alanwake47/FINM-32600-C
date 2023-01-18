//
// Created by Aman Krishna on 17/01/23.
//

//header function to return the rate based on currency input
float get_rate(int currency)
{
    float rate;
    switch(currency)
    {
        case 1:
            rate=0.93;
            break;
        case 2:
            rate=0.82;
            break;
        case 3:
            rate=1.34;
            break;
        case 4:
            rate=1.43;
            break;
        case 5:
            rate=110.98;
            break;
        case 6:
            rate=82;
            break;
        default:
            rate=1;
            break;
    }
    return rate;
}

    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>

    #define PI 3.14

    int main(){
        int T;
        double area1, area2;
        scanf("%i" , &T);

        for (int i= 0; i < T; i ++){
            long int r, l;
            double area1, area2;
            scanf("%ld %ld" , &r, &l);
            if (r< 1 || r > pow(10 , 8)) return 0;
            if (l< 1 || l > pow(10 , 8)) return 0;

            area1 = PI * pow(r , 2);
            area2 = (PI * pow(l , 2)) * 2;

            printf("%i\n" , area1> area2? 1 : 2);
        }
    }
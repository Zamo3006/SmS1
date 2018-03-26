//
// Created by Budig on 21.03.2018.
//

int factorialSeq(int n){
    int e = 1;
    for (n; n > 0; n--) {
        e = e * n;
    }
    return e;
}

int factorialRec(int n){
    if(n > 1){
        return n*factorialRec(n-1);
    } else {
        return 1;
    }
}
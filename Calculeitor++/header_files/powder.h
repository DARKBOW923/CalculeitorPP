int powder(int x, int y){
int result;
int counter = 1;
result = x;
while(counter < y){
result = result * x;
counter++;
}
    return result;
}

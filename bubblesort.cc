void bubblesort(long x[], long size){
  for(int a = 0; a<size-1; a++){
    for(int b = size-1; b>a-1; --b){
      if(x[b] < x[b-1]){
        int tmp = x[b];
        x[b] = x[b-1];
        x[b-1] = tmp;
      }
    }
  }
}

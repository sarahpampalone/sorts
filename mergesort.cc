void mergesort(long x[], int first, int last);
void merge(long x[], int first, int mid, int last);

void merge(long x[], int first, int mid, int last){
  int n1 = mid - first + 1;
  int n2 = last - mid;
  
  long templ1[n1], temp2[n2];
  
  for(int i = 0; i < n1; i++){
    temp1[i] = x[first + i];
  }
  for(int j = 0; j < n2; j++){
    temp2[j] = x[mid + 1 + j];
  }
  
  int i = 0;
  int j = 0;
  int k = first;
  
  while(i < n1 && j < n2){
    if(temp1[i] < temp2[j]){
      x[k] = temp1[i];
      i++;
    }
    else{
      x[k] = temp2[j];
      j++;
    }
    k++;
  }
  
  while(i < n1){
    x[k] = temp1[i];
    i++;
    k++;
  }
  while(j < n2){
    x[k] = temp2[j];
    j++;
    k++;
  }
}

void mergesort(long x[], int first, int last){
  if(first < last){
    int mid = (first + last) / 2;
    mergesort(x, first, mid);
    mergesort(x, mid + 1, last);
    merge(x, first, mid, last);
  }
}

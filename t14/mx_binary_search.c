int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_strcmp(const char *s1, const char *s2);


int mx_binary_search(char **arr, int size, const char *s, int *count){


    int low = 0;
    int high = size - 1; 
    int middle;
    
   
    while (low <= high)
    {
        *count += 1;
        middle = (low + high) / 2;
        if (mx_strcmp(s, arr[middle]) < 0){
            high = middle - 1;
        }
        else if (mx_strcmp(s, arr[middle]) > 0)
            low = middle + 1;
        else 
            return middle;
    }

    *count = 0;
    return -1;


}


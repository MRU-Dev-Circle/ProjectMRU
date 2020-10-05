import java.util.Arrays;

public class LinearSearch {
    public static void main(String[] args) {
        int[] arr = {1,4,8,10,23,25,29,30};
        int elt = 29;
        int ind = linearSearch(arr,elt);  
        if(ind == -1)
          System.out.println("Element "+elt+" not present in the array");
        else
          System.out.println("Searching element "+elt+" using Linear search : "+ind);
    }

    public static int linearSearch(int[] arr, int elt) {
        for (int i = 0 ; i<arr.length ; i++){
            if(arr[i] == elt)
                return i;
        }
        return -1;
    }
}

import java.util.Arrays;

public class ArrayIntro {
    public static void main(String[] args) {
        int[] arr = {1,4,8,10,23,25,29,30};
        int elt = 29;
        int ind = binarySearch(arr,elt);
        if(ind == -1)
          System.out.println("Element "+elt+" not present in the array");
        else
          System.out.println("Searching element "+elt+" using binary search : "+ind);
    }
    
    public static int binarySearch(int[] arr, int elt) {
        int start = 0,end = arr.length-1;
        while(start <= end) {
            int mid = (start+end)/2;
            if(arr[mid] == elt){
                return mid;
            }else if (arr[mid] < elt) {
                start = mid + 1;
            }else {
                end = mid-1;
            }
        }
        return -1;
    }

}

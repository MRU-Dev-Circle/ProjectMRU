import java.util.*;

class BinarySearch 
{ 
    int binarySearch(int array[], int element) 
    { 
        int left = 0, right = array.length - 1; 
        while (left <= right) 
        { 
            int mid = left + (right - left) / 2; 
            if (array[mid] == element) 
            {
                return mid;
            }
            if (array[mid] < element)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return -1; 
    } 
    public static void main(String args[]) 
    { 
        BinarySearch bs = new BinarySearch();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements : ");
        int n = sc.nextInt();
        System.out.println("Enter " + n + " elements");
        int array[] = new int [n];
        for(int i=0;i<n;i++)
        {
            array[i] = sc.nextInt();
        }
        System.out.println("Enter the element you are searching for : ");
        int element = sc.nextInt(); 
        int result = bs.binarySearch(array, element); 
        if (result == -1) 
            System.out.println("Element not found"); 
        else
            System.out.println("Element found at " + (result+1)); 
        sc.close();
    } 
}

public class ArrayTest {
    public static void main(String[] args) {
        int[][] intArr = new int[5][8];

        for (int i = 0; i < intArr.length; i++) {       // วนลูปผ่านแถว
            for (int j = 0; j < intArr[i].length; j++) { // วนลูปผ่านคอลัมน์
                intArr[i][j] = (i + 1) * (j + 1);        // กำหนดค่าเป็นผลคูณของ index+1 ของแถวและคอลัมน์
            }
        }


        System.out.println("Array 2D: ");
        for (int[] row : intArr) {
            for (int value : row) {
                System.out.printf("%4d", value);
            }
            System.out.println();
        }
    }
}

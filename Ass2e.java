import java.util.Scanner;

class Main
{
    public static boolean ChkEven(int iNo)
    {
        if(iNo % 2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String[] args)
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        bRet = ChkEven(iValue);

        if(bRet == true)
        {
            System.out.println("Number is Even");
        }
        else
        {
            System.out.println("Number is Odd");
        }

        sobj.close();
    }
}
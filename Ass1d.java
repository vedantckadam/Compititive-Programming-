import java.util.Scanner;

class Main
{
    public static boolean Check(int iNo)
    {
        if(iNo % 5 == 0)
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

        bRet = Check(iValue);

        if(bRet == true)
        {
            System.out.println("Divisible by 5");
        }
        else
        {
            System.out.println("Not Divisible by 5");
        }

        sobj.close();
    }
}
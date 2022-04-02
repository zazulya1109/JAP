using System;
using System.IO;
namespace ConsoleApplication1
{
 internal class Program
 {
 static string path = @"C:\ispano.txt";
 private static string str;
 private static string s = "";
 public static void Main(string[] args)
 {
 GetText();
 }
 static void GetText()
 {
 //int p;
 using (StreamReader sr = new StreamReader(path))
 {
 str = sr.ReadToEnd();
 }
 Console.WriteLine(str);
 Console.WriteLine("");
 //p = Convert.ToInt32(Console.ReadLine());
 for (int i = 0; i < str.Length - 1; i++)
 {
 /*if (i == p - 1)
 {
 Console.WriteLine(str[i]);
 }*/
 if (str[i + 1] == '.' || str[i + 1] == '!' || str[i + 1] == '?')
 {
 s += str[i];
 Console.WriteLine("Конец предложения: " + s);
 }
 else if (str[i] == ' ')
 {
 s = ""
;

}
 else

{
 s += str[i];

}

}
 Console.ReadLine();

}

}
}

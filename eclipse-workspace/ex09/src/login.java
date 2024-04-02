import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver; 
public class login {

public static void main(String[] args) {
// TODO Auto-generated method stub 
System.setProperty("webdriver.chrome.driver",
"C:\\Users\\pavit\\Downloads\\chromedriver-win64\\chromedriver-win64\\chromedriver.exe"); 
ChromeDriver driver=new ChromeDriver(); 
driver.manage().window().maximize(); 
driver.get("https://www.linkedin.com/login");
WebElement username=driver.findElement(By.id("username")); 
WebElement password=driver.findElement(By.id("password"));
WebElement login=driver.findElement(By.xpath("//button[text()='Sign in']"));
username.sendKeys("preethi92.mit@gmail.com"); 
password.sendKeys("password");
login.click();
String actualUrl="https://www.linkedin.com/feed/"; 
String expectedUrl= driver.getCurrentUrl();
if(actualUrl.equalsIgnoreCase(expectedUrl))
{
System.out.println("Test passed");
}
else
{
System.out.println("Test failed");
}
}
}

import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
public class objectCount {

	public static void main(String[] args) {
        
        System.setProperty("webdriver.chrome.driver","C:\\Users\\ravip\\Downloads\\chromedriver-win64\\chromedriver-win64\\chromedriver.exe");

        // Initialize ChromeDriver
        ChromeDriver driver = new ChromeDriver();

        // Navigate to the webpage
        driver.get("https://google.com/mail/help");

        // Find all elements on the webpage
        java.util.List<WebElement> allElements = driver.findElements(By.xpath("//p"));

        // Print the total number of objects
        System.out.println("Total number of objects on the page: " + allElements.size());

        // Close the browser
        driver.quit();
    }
}

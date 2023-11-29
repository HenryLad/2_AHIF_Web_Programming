document.addEventListener("DOMContentLoaded", function () {
    // Wait for the HTML content to be fully loaded
  
    // Get the Trauni image element
    var trauniImage = document.querySelector('img[alt="Trauniiiiiiiiiiii"]');
  
    // Add a click event listener to the Trauni image
    trauniImage.addEventListener("click", function () {
      // Apply a CSS transformation to move the image away
      trauniImage.style.transform = "translateX(500px)"; // You can adjust the value based on your layout
    });
  });
  
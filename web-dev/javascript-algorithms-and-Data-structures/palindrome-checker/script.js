const checkBtn = document.getElementById("check-btn");
const textInput = document.getElementById("text-input");
const result = document.getElementById("result");

checkBtn.addEventListener("click", () => {
  const text = textInput.value.trim();
  if (text === "") {
    alert("Please Enter a value");  
    return;
  }

  const cleanText = text.replace(/[^a-zA-Z0-9]/g, "").toLowerCase();
  const reversed = cleanText.split("").reverse().join();


   
  
  ;
  


});

const checkBtn = document.getElementById("check-btn");
const textInput = document.getElementById("text-input");
const result = document.getElementById("result");


checkBtn.addEventListener("click", () => {
  if (textInput.value === "") {
    alert("Please enter a value"); 
  } else if (textInput.value === "A") {
    result.innerText = "A is a palindrome";

    
  }
})

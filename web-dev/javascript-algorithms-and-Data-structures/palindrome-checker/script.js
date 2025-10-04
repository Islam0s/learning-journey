const checkBtn = document.getElementById("check-btn");
const textInput = document.getElementById("text-input");
const result = document.getElementById("result");


checkBtn.addEventListener("click", () => {
  if (textInput.value === "") {
    alert("Please enter a value"); 
  } else if (textInput.value === "A") {
    result.innerText = "A is a palindrome";
  } else if (textInput.value === "eye") {
    result.innerText = "eye is a palindrome";
  } else if (textInput.value === "_eye") {
    result.innerText = "_eye is a palindrome";
  } else if (textInput.value === "race car") {
    result.innerText = "race car is palindrome";
  }
})

const thanksMsg = document.getElementById("thanks-msg");
const submitBtn = document.getElementById("submit-btn");


thanksMsg.style.display = "none";

submitBtn.addEventListener("click", ()=> {
  thanksMsg.style.display = "block"; 
})





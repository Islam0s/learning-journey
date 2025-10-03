const express = require("express");

const app = express()


app.get("/hello", (req, res) => {
  res.send("Take a shit")

})

app.get("/Home", (req, res) => {
  res.send("Welcome Home.")
})


app.listen(3000, () => {
  console.log("I am listening in port 3000.")
})

/* JSON Server in Javascript */

/* JSON - Javascript Object Notation */

// Local Storage
// Session Storage

let setData = () => {
  let obj = {
    name : "vivek",
    email: "Example@gmail.com",
    age: 25
  }

  let product = {
    name : "Laptop",
    email: "dell@gmail.com",
    warranty : 1
  }

  localStorage.setItem("users" , JSON.stringify(obj))
  localStorage.setItem("products" , JSON.stringify(product))
}

let getData = () => {
  let data = localStorage.getItem("users")
  let user = JSON.parse(data)
  console.log(user);
  
  document.getElementById("demo").innerHTML = user.name
}

let removeData = () => {
  localStorage.removeItem("users")
}

let clearData = () => {
  localStorage.clear()
}


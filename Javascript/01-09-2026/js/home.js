document.addEventListener("DOMContentLoaded" , () => {
  

  document.getElementById("productForm").addEventListener("submit" , AddNewProduct)
  document.getElementById("searchInput").addEventListener("input" , FilterAndSort)
  document.getElementById("sortSelect").addEventListener("change" , FilterAndSort)
})


const AddNewProduct = (e) => {
  e.preventDefault()

  const name = document.getElementById("productName").value.trim()
  const price = document.getElementById("productPrice").value.trim()
  const category = document.getElementById("productCaregory").value
  const image = document.getElementById("productImage").value.trim()

  const errorBox = document.getElementById("formError");
  errorBox.textContent  = "";

  if(name.length < 3){
    errorBox.textContent = "Product name must be at least 3 characters."
    return;
  }

  if(price === "" || isNaN(price) || Number(price) <= 0){
    errorBox.textContent = "Price must be a valid number greater than 0."
    return;
  }

  if(category === ""){
    errorBox.textContent = "Please select a category."
    return;
  }

  const newProduct = {
    id:Date.now(),
    name:name,
    price:Number(price),
    category:category,
    image:image 
  }

  
}
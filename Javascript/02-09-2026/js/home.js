document.addEventListener("DOMContentLoaded", () => {
  document
    .getElementById("productForm")
    .addEventListener("submit", AddNewProduct);
  document
    .getElementById("searchInput")
    .addEventListener("input", FilterAndSort);
  document
    .getElementById("sortSelect")
    .addEventListener("change", FilterAndSort);
});

const AddNewProduct = (e) => {
  e.preventDefault();

  const name = document.getElementById("productName").value.trim();
  const price = document.getElementById("productPrice").value.trim();
  const category = document.getElementById("productCaregory").value;
  const image = document.getElementById("productImage").value.trim();

  const errorBox = document.getElementById("formError");
  errorBox.textContent = "";

  if (name.length < 3) {
    errorBox.textContent = "Product name must be at least 3 characters.";
    return;
  }

  if (price === "" || isNaN(price) || Number(price) <= 0) {
    errorBox.textContent = "Price must be a valid number greater than 0.";
    return;
  }

  if (category === "") {
    errorBox.textContent = "Please select a category.";
    return;
  }

  const products = getProduct();

  const newProduct = {
    id: Date.now(),
    name: name,
    price: Number(price),
    category: category,
    image: image,
  };

  products.push(newProduct);
  saveProducts(products);

  e.target.reset();

  FilterAndSort();
};

const renderProducts = (list) => {
  const container = document.getElementById("productList");
  container.innerHTML = "";

  if (list.length === 0) {
    container.innerHTML = `<p>No Product match your search.</p>`;
    return;
  }

  list.forEach((product) => {
    const card = document.createElement("div");
    card.className = ""
    card.innerHTML = `
<div class="w-full max-w-sm bg-neutral-primary-soft p-6 border border-default rounded-base shadow-xs">
    <a href="#">
        <img class="rounded-base mb-6" src="/docs/images/products/apple-watch.png" alt="product image" />
    </a>
    <div>
        <div class="flex items-center space-x-3 mb-6">
            <div class="flex items-center space-x-1 rtl:space-x-reverse">
                <svg class="w-5 h-5 text-fg-yellow" aria-hidden="true" xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="currentColor" viewBox="0 0 24 24"><path d="M13.849 4.22c-.684-1.626-3.014-1.626-3.698 0L8.397 8.387l-4.552.361c-1.775.14-2.495 2.331-1.142 3.477l3.468 2.937-1.06 4.392c-.413 1.713 1.472 3.067 2.992 2.149L12 19.35l3.897 2.354c1.52.918 3.405-.436 2.992-2.15l-1.06-4.39 3.468-2.938c1.353-1.146.633-3.336-1.142-3.477l-4.552-.36-1.754-4.17Z"/></svg>
                <svg class="w-5 h-5 text-fg-yellow" aria-hidden="true" xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="currentColor" viewBox="0 0 24 24"><path d="M13.849 4.22c-.684-1.626-3.014-1.626-3.698 0L8.397 8.387l-4.552.361c-1.775.14-2.495 2.331-1.142 3.477l3.468 2.937-1.06 4.392c-.413 1.713 1.472 3.067 2.992 2.149L12 19.35l3.897 2.354c1.52.918 3.405-.436 2.992-2.15l-1.06-4.39 3.468-2.938c1.353-1.146.633-3.336-1.142-3.477l-4.552-.36-1.754-4.17Z"/></svg>
                <svg class="w-5 h-5 text-fg-yellow" aria-hidden="true" xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="currentColor" viewBox="0 0 24 24"><path d="M13.849 4.22c-.684-1.626-3.014-1.626-3.698 0L8.397 8.387l-4.552.361c-1.775.14-2.495 2.331-1.142 3.477l3.468 2.937-1.06 4.392c-.413 1.713 1.472 3.067 2.992 2.149L12 19.35l3.897 2.354c1.52.918 3.405-.436 2.992-2.15l-1.06-4.39 3.468-2.938c1.353-1.146.633-3.336-1.142-3.477l-4.552-.36-1.754-4.17Z"/></svg>
                <svg class="w-5 h-5 text-fg-yellow" aria-hidden="true" xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="currentColor" viewBox="0 0 24 24"><path d="M13.849 4.22c-.684-1.626-3.014-1.626-3.698 0L8.397 8.387l-4.552.361c-1.775.14-2.495 2.331-1.142 3.477l3.468 2.937-1.06 4.392c-.413 1.713 1.472 3.067 2.992 2.149L12 19.35l3.897 2.354c1.52.918 3.405-.436 2.992-2.15l-1.06-4.39 3.468-2.938c1.353-1.146.633-3.336-1.142-3.477l-4.552-.36-1.754-4.17Z"/></svg>
                <svg class="w-5 h-5 text-fg-yellow" aria-hidden="true" xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="currentColor" viewBox="0 0 24 24"><path d="M13.849 4.22c-.684-1.626-3.014-1.626-3.698 0L8.397 8.387l-4.552.361c-1.775.14-2.495 2.331-1.142 3.477l3.468 2.937-1.06 4.392c-.413 1.713 1.472 3.067 2.992 2.149L12 19.35l3.897 2.354c1.52.918 3.405-.436 2.992-2.15l-1.06-4.39 3.468-2.938c1.353-1.146.633-3.336-1.142-3.477l-4.552-.36-1.754-4.17Z"/></svg>
            </div>
            <span class="bg-brand-softer border border-brand-subtle text-fg-brand-strong text-xs font-medium px-1.5 py-0.5 rounded-sm">4.8 out of 5</span>
        </div>
        <a href="#">
            <h5 class="text-xl text-heading font-semibold tracking-tight">Apple Watch Series 7 GPS, Aluminium Case, Starlight</h5>
        </a>
        <div class="flex items-center justify-between mt-6">
            <span class="text-3xl font-extrabold text-heading">$599</span>
            <button type="button" class="inline-flex items-center  text-white bg-brand hover:bg-brand-strong box-border border border-transparent focus:ring-4 focus:ring-brand-medium shadow-xs font-medium leading-5 rounded-base text-sm px-3 py-2 focus:outline-none">
                <svg class="w-4 h-4 me-1.5" aria-hidden="true" xmlns="http://www.w3.org/2000/svg" width="24" height="24" fill="none" viewBox="0 0 24 24"><path stroke="currentColor" stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M5 4h1.5L9 16m0 0h8m-8 0a2 2 0 1 0 0 4 2 2 0 0 0 0-4Zm8 0a2 2 0 1 0 0 4 2 2 0 0 0 0-4Zm-8.5-3h9.25L19 7H7.312"/></svg>
                Add to cart
            </button>
        </div>
    </div>
</div>
    `;
  });

  container.appendChild(card)
};


const FilterAndSort = () => {
  const keyword = document.getElementById("")
}
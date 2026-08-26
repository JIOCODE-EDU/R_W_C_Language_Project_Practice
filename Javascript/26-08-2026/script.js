// create / store data

const saveData = () => {
  let id = document.getElementById("id").value
  let name = document.getElementById("name").value
  let age = document.getElementById("age").value

  if(id === "" || name === "" || age === ""){
    alert("Please enter all details")
    return;
  }

  let student = {
    id:Number(id),
    name:name,
    age:Number(age)
  }

  let students = JSON.parse(localStorage.getItem("students")) || [];

  students.push(student)

  localStorage.setItem("students" , JSON.stringify(students))

  alert("Student data saved successfully.")
}


// view data 

const viewData = () => {
  let data = localStorage.getItem("students")

  if (data === null){
    document.getElementById("output").innerHTML = "No data available"
    return;
  }

  let students = JSON.parse(data)

  let html = `
  
  <table>
    <tr>
      <th>ID</th>
      <th>Name</th>
      <th>Age</th>
    </tr>
  `

  students.forEach((std) => {
    html += `
      <tr>
        <td>${std.id}</td>
        <td>${std.name}</td>
        <td>${std.age}</td>
      </tr>
    
    `
  })

  html += "</table>"

  document.getElementById("output").innerHTML = html;
}


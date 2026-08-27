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

  id.value = ""

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

// update

const updateData = () => {

  let updateId = Number(document.getElementById('updateId').value)

  let newName = document.getElementById('updateName').value
  let newAge = Number(document.getElementById("updateAge").value)

  if(!updateId || newName === "" || !newAge){
    alert("Please enter all update details.")
    return;
  }

  let students = JSON.parse(
    localStorage.getItem('students')
  ) || [];

  let student = students.find((item) => {
    return item.id === updateId
  })

  if(!student){
    alert("Student not found!")
    return;
  }

  student.name = newName
  student.age = newAge

  localStorage.setItem(
    "students", JSON.stringify(students)
  )

  alert("Student data updated successfully!")

  viewData()
}

const deleteData = () => {
  let deleteId = Number(prompt("Enter Student ID to delete:"))

  if(!deleteId){
    return;
  }

  let students = JSON.parse(
    localStorage.getItem("students")
  ) || [];

  let newStudents = students.filter((std) => {
    return std.id !== deleteId
  })

  if (students.length === newStudents.length){
    alert("Student not found")
    return;
  }

  localStorage.setItem(
    "students" , JSON.stringify(newStudents)
  )

  alert("Student deleted successfully!.")

  viewData()
}


const clearAll = () => {
  let confirmDelete = confirm("Are you sure you want to delete all data?.")

  if(confirmDelete){
    localStorage.removeItem("students")
    alert("All student data deleted!.")
    document.getElementById("output").innerHTML = "No Data available."
  }
}


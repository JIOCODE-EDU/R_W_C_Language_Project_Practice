/* Javascript Timing Functions */

// setTimeout() - executes a function after a specified number of milliseconds

// clearTimeout()


// setInterval() - executes a function repeatedly at specified intervals (in milliseconds)

// clearInterval()

{
  const timerTimeOut = setTimeout(() => {
    console.log("Hello");
  } , 5000)
}

/* syncronous Javascript (default) */

{
  console.log("Hello World!!");
  
  console.log("Javascript");
  
  const sum = (a , b) => a + b
  
  console.log(sum(10 , 20));
  
  const dom = document.getElementById("demo").innerHTML
  
  console.log(dom);
}

/* asyncronous Javascript */

{

  let shop = false

  if(shop == true){
    let timingFunction = setTimeout(() => {
      console.log("Shop Open!.");
    } , 2000)
  }
  else{
      let timingFunction = setTimeout(() => {
      console.log("Shop is Closed....!.");
    } , 2000)
  }


}

// clock

{
  let hours = 1
  let minues = 0;
  let second = 0;
  let interval;

  function displayTimer(){
    let  h = String(hours).padStart(2  , "0")
    let  m = String(minues).padStart(2  , "0")
    let  s = String(second).padStart(2  , "0")

    document.getElementById("clock").innerText = `${h} : ${m} : ${s}`
  }

  function startTimer(){
    interval = setInterval(() => {
      if(second > 0){
        second--;
      }else if(minues > 0){
        minues--;
        second = 59
      }else if(hours > 0){
        hours--;
        minues=  59;
        second = 59
      }else{
        alert("Time Over!")
      }

      displayTimer()
    } , 1000)
  }

  function stopTimer(){
    clearInterval(interval)
  } 

  function resetTime(){
    clearInterval(interval)

    hours = 1;
    minues = 0;
    second = 0;

    displayTimer()
  }

  displayTimer()
}



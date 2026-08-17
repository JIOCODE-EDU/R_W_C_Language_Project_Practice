/*  Quiz Application */

const quizData = [
  {
    question: "What does HTML stand for?",
    options: [
      "Hyper Text Markup Language",
      "High Text Machine Language",
      "Hyperlinks Text Mark Language",
      "Home Tool Markup Language",
    ],
    correct: 0,
  },
  {
    question: "Which language is used to style web pages?",
    options: ["HTML", "CSS", "JavaScript", "Python"],
    correct: 1,
  },
  {
    question: "Which language is used to make web pages interactive?",
    options: ["HTML", "CSS", "JavaScript", "SQL"],
    correct: 2,
  },
  {
    question: "Which keyword is used to declare a variable in JavaScript?",
    options: ["var", "variable", "int", "declare"],
    correct: 0,
  },
  {
    question: "Which method is used to print output in the browser console?",
    options: ["print()", "console.log()", "display()", "write.log()"],
    correct: 1,
  },
  {
    question: "Which symbol is used for a single-line comment in JavaScript?",
    options: ["/* */", "<!-- -->", "//", "#"],
    correct: 2,
  },
  {
    question: "Which data type is used to store true or false?",
    options: ["String", "Boolean", "Number", "Object"],
    correct: 1,
  },
  {
    question: "Which method adds an element to the end of an array?",
    options: ["push()", "pop()", "shift()", "unshift()"],
    correct: 0,
  },
  {
    question: "Which method removes the last element from an array?",
    options: ["shift()", "remove()", "pop()", "delete()"],
    correct: 2,
  },
  {
    question: "What does DOM stand for?",
    options: [
      "Document Object Model",
      "Data Object Management",
      "Document Oriented Model",
      "Digital Object Model",
    ],
    correct: 0,
  },
  {
    question: "Which library is used for building user interfaces?",
    options: ["Express", "React", "MongoDB", "Node.js"],
    correct: 1,
  },
  {
    question: "Which database is commonly used with the MERN stack?",
    options: ["MySQL", "Oracle", "MongoDB", "PostgreSQL"],
    correct: 2,
  },
  {
    question: "What does API stand for?",
    options: [
      "Application Programming Interface",
      "Application Program Internet",
      "Advanced Programming Interface",
      "Application Process Integration",
    ],
    correct: 0,
  },
  {
    question: "Which HTTP method is generally used to retrieve data?",
    options: ["POST", "GET", "PUT", "DELETE"],
    correct: 1,
  },
  {
    question: "Which HTTP method is generally used to delete data?",
    options: ["GET", "POST", "DELETE", "PATCH"],
    correct: 2,
  },
  {
    question: "Which operator is used for strict equality in JavaScript?",
    options: ["==", "=", "===", "!="],
    correct: 2,
  },
  {
    question: "Which function converts JSON string into a JavaScript object?",
    options: [
      "JSON.parse()",
      "JSON.stringify()",
      "JSON.convert()",
      "JSON.object()",
    ],
    correct: 0,
  },
  {
    question: "Which function converts a JavaScript object into JSON string?",
    options: [
      "JSON.parse()",
      "JSON.stringify()",
      "JSON.convert()",
      "JSON.toString()",
    ],
    correct: 1,
  },
  {
    question: "Which keyword is used to create a function in JavaScript?",
    options: ["function", "def", "func", "method"],
    correct: 0,
  },
  {
    question: "What is the output of typeof 'Hello'?",
    options: ["text", "String", "string", "character"],
    correct: 2,
  },
  
];

// initial variables

let currentQuestion = 0;
let score = 0;
let timeRemaining = (60 * quizData.length) / 2; // 10 minute
let timerInterval;
let startTime;
let selectedAnswer = null;

console.log(quizData[currentQuestion]);
console.log(timeRemaining);

// // DOM

const start_btn = document.getElementById("start_btn");
const quiz_start = document.getElementById("quiz_start");
const resultsContainer = document.getElementById("resultsContainer");
const timer = document.getElementById('timer')
const quizBody = document.getElementById('quizBody')
const questionCounter = document.getElementById('questionCounter')
const nextBtn = document.getElementById('nextBtn')

// start_btn.addEventListener("click", () => {
//   quiz_start.style.display = "none";
//   resultsContainer.style.display = "none";
// });

// // initialize Quiz

const initQuiz = () => {
  let currentQuestion = 0;
  let score = 0;
  let timeRemaining = (60 * quizData.length) / 2; // 10 minute
  let startTime = Date.now();
  let selectedAnswer = null;

  console.log(startTime);
  
};

initQuiz()

const startTimer = () => {
  clearInterval(timerInterval);
  timerInterval = setInterval(() => {
    timeRemaining--;
    updateTimerDisplay();
    if (timeRemaining <= 0) {
      clearInterval(timerInterval);
      showResult();
    }
  }, 1000);
};

const updateTimerDisplay = () => {
  const minutes = Math.floor(timeRemaining / 60);
  const seconds = timeRemaining % 60;

  timer.textContent = `${minutes.toString().padStart(2, 0)} : ${seconds.toString().padStart(2, "0")}`;
};

startTimer()

// Load Questions & Options

const loadQuestion = () => {
  const question = quizData[currentQuestion]
  selectedAnswer = null;

  questionCounter.textContent = `Question ${currentQuestion + 1} of ${quizData.length}`;

  let html = `
    <div>
      <h3 class="fw-bold mb-4">Q${currentQuestion + 1}. ${question.question}</h3>
      <div class="option-container">
  `;
  question.options.forEach((opt , index) => {
    const letter = String.fromCharCode(65 + index)

    html += `
      <div class="answer-option" data-index="${index}">
        <div class="option-letter">${letter}.</div>
        <div class="option-text">${opt}</div>
      </div>
    `
  });

  html += `</div></div>`

  quizBody.innerHTML = html;
}

loadQuestion()


const selectAnswer = (e) => {

  const option = e.currentTarget
  const index = parseInt(option.dataset.index)

  document.querySelectorAll('.answer-option').forEach((opt) => {
    opt.classList.remove('selected')
  })

  option.classList.add('selected')

  selectedAnswer = index

  nextBtn.disabled = false;
}

selectAnswer()





// const showResult = () => {

// }

// const nextQuestion = () => {
//   currentQuestion++;
//   console.log(quizData[currentQuestion]);

//   if(currentQuestion <= quizData.length){

//   }
// }

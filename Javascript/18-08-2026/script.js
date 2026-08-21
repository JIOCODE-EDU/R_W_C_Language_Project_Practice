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

let currentQuestion = 19;
let score = 0;
let timeRemaining = (60 * quizData.length) / 2; // 10 minute
let timerInterval;
let startTime;
let selectedAnswer = null;

// // DOM

const start_btn = document.getElementById("start_btn");
const quiz_start = document.getElementById("quiz_start");
const resultsContainer = document.getElementById("resultsContainer");
const timer = document.getElementById("timer");
const quizBody = document.getElementById("quizBody");
const questionCounter = document.getElementById("questionCounter");
const nextBtn = document.getElementById("nextBtn");
const quizFooter = document.getElementById("quizFooter");
const restartBtn = document.getElementById("restartBtn");
const quiz_wrapper = document.getElementById("quiz_wrapper");

// // initialize Quiz

const initQuiz = () => {
  let currentQuestion = 0;
  let score = 0;
  let timeRemaining = (60 * quizData.length) / 2; // 10 minute
  let startTime = Date.now();
  let selectedAnswer = null;

  console.log(currentQuestion);
  

  startTimer();

  loadQuestion();
};

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

// Load Questions & Options

const loadQuestion = () => {

  const question = quizData[currentQuestion];

  selectedAnswer = null;

  questionCounter.textContent = `Question ${currentQuestion + 1} of ${quizData.length}`;

  let html = `
    <div>
      <h3 class="fw-bold mb-4">Q${currentQuestion + 1}. ${question.question}</h3>
      <div class="option-container">
  `;
  question.options.forEach((opt, index) => {
    const letter = String.fromCharCode(65 + index);

    html += `
      <div class="answer-option" data-index="${index}">
        <div class="option-letter">${letter}.</div>
        <div class="option-text">${opt}</div>
      </div>
    `;
  });

  html += `</div></div>`;

  quizBody.innerHTML = html;

  document.querySelectorAll(".answer-option").forEach((opt) => {
    opt.addEventListener("click", selectAnswer);
  });

};

const selectAnswer = (e) => {

  const option = e.currentTarget;

  const index = parseInt(option.dataset.index);

  document.querySelectorAll(".answer-option").forEach((opt) => {
    opt.classList.remove("selected");
  });

  option.classList.add("selected");

  selectedAnswer = index;

  nextBtn.disabled = false;
};

const nextQuestion = () => {

  if (selectedAnswer === null) return;

  const correct = quizData[currentQuestion].correct;

  const options = document.querySelectorAll(".answer-option");

  options.forEach((opt) => {
    opt.style.pointerEvents = "none";
  });

  nextBtn.disabled = true;

  if (selectedAnswer === correct) {
    score++;
  }

  options[correct].classList.add("correct");

  if (selectedAnswer !== correct) {
    options[selectedAnswer].classList.add("incorrect");
  }

  setTimeout(() => {
    if (currentQuestion >= quizData.length - 1) {
      showResult();
      return;
    }

    currentQuestion++;
    loadQuestion();
    
  }, 1000);
  

  console.log(currentQuestion);
  
};

const showResult = () => {

  clearInterval(timerInterval);

  quizBody.innerHTML = "";

  quizFooter.classList.add("d-none");

  resultsContainer.style.display = "block";

  const timeTaken = Math.floor(Date.now() - startTime / 1000);

  console.log(timeTaken);
  

  const percentage = Math.round((score / quizData.length) * 100);

  document.getElementById("finalScore").textContent = percentage + "%";

  document.getElementById("correctCount").textContent = score;

  document.getElementById("incorrectCount").textContent = quizData.length - score;

  document.getElementById("totalQuestions").textContent = quizData.length;

  const minutes = Math.floor(timeTaken / 60);

  const seconds = timeTaken % 60;

  document.getElementById("timeTaken").textContent =
    `${minutes}:${seconds.toString().padStart(2, "0")}`;

};

nextBtn.addEventListener("click", nextQuestion);

restartBtn.addEventListener("click", initQuiz);

start_btn.addEventListener("click", () => {
  quiz_start.style.display = "none";
  quiz_wrapper.style.display = "block";
  initQuiz();
});

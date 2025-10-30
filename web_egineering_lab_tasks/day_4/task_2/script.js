const addBtn = document.getElementById("addBtn");
const taskInput = document.getElementById("taskInput");
const taskList = document.getElementById("taskList");
const totalCount = document.getElementById("totalCount");
const completedCount = document.getElementById("completedCount");

function updateCounters() {
    const total = taskList.children.length;
    const completed = document.querySelectorAll(".done").length;
    totalCount.textContent = total;
    completedCount.textContent = completed;
}

addBtn.addEventListener("click", () => {
    const taskText = taskInput.value.trim();
    if (taskText === "") {
        alert("Please enter a task!");
        return;
    }

    const li = document.createElement("li");

    const checkbox = document.createElement("input");
    checkbox.type = "checkbox";

    const span = document.createElement("span");
    span.textContent = taskText;
    span.classList.add("task-text");

    const removeBtn = document.createElement("button");
    removeBtn.textContent = "Remove";
    removeBtn.classList.add("remove-btn");

    // When checkbox is toggled
    checkbox.addEventListener("change", () => {
        if (checkbox.checked) {
            span.classList.add("done");
        } else {
            span.classList.remove("done");
        }
        updateCounters();
    });

    // Remove button
    removeBtn.addEventListener("click", () => {
        taskList.removeChild(li);
        updateCounters();
    });

    li.appendChild(checkbox);
    li.appendChild(span);
    li.appendChild(removeBtn);

    taskList.appendChild(li);
    taskInput.value = "";
    taskInput.focus();

    updateCounters();
});

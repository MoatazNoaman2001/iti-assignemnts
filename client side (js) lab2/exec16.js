let votesA = 0;
let votesB = 0;
let votesC = 0;

const candidateAButton = document.getElementById('candidateA');
const candidateBButton = document.getElementById('candidateB');
const candidateCButton = document.getElementById('candidateC');
const votesADisplay = document.getElementById('votesA');
const votesBDisplay = document.getElementById('votesB');
const votesCDisplay = document.getElementById('votesC');

function updateResults() {
    votesADisplay.textContent = votesA;
    votesBDisplay.textContent = votesB;
    votesCDisplay.textContent = votesC;
}

candidateAButton.onclick = () => {
    votesA++;
    updateResults();
};

candidateBButton.onclick = () => {
    votesB++;
    updateResults();
};

candidateCButton.onclick = () => {
    votesC++;
    updateResults();
};

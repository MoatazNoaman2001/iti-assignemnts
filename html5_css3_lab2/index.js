// const tooltip = document.getElementById("tooltip");


function starthovernose(elem){
    console.log("start hover nose");
    
}

function endhovernose(elem){
    console.log("end hover nose");
}

function starthovermouth(elem){
    console.log("start hover mouth");
}

function endhovermouth(elem){
    console.log("end hover mouth");
}

const canvas = document.getElementById('faceCanvas');
const ctx = canvas.getContext('2d');


function canvamouseenter(elem){
    const smileyImageSrc = 'smiley.png';
    const smileyImage = new Image();
    smileyImage.src = smileyImageSrc;
    ctx.drawImage(smileyImage, 0, 0, canvas.width, canvas.height);
}

function canvamouseout(elem){
    const sadImageSrc = 'sad.png';
    const sadImage = new Image();
    sadImage.src = sadImageSrc;    
    ctx.drawImage(sadImage, 0, 0, canvas.width, canvas.height);
}
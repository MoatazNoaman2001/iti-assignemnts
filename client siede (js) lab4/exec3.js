let pos = 0;

function autoScroll() {
    pos += 1;
    window.scrollTo(0, pos);
}

setInterval(autoScroll, 500);
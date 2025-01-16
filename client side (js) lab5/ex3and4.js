// ex3
const student1 = {
    ID: 101,
    name: "moataz noaman",
    age: 23,
    address: {
        city: "assuit",
        state: "asyut",
        country: "eygpt"
    },
    skills: ["JavaScript", "HTML", "CSS", "Python", "java"],
    isLeader: true
};

// ex4 
const students = [
    {
        ID: 101,
        name: "mohamed",
        age: 23,
        address: {
            city: "assuit",
            state: "asyut",
            country: "eygpt"
        },
        skills: ["JavaScript", "HTML", "CSS", "Python"],
        isLeader: true
    },
    {
        ID: 102,
        name: "ehab",
        age: 24,
        address: null,
        skills: ["Java", "React", "Node.js"],
        isLeader: false
    },
    {
        ID: 103,
        name: "aliaa",
        age: 22,
        address: {
            city: "assuit",
            state: "asyut",
            country: "eygpt"
        },
        skills: ["C#", "SQL", "Angular"],
        isLeader: true
    }
];


students.forEach(student => {
    console.log(`Name: ${student.name}`);
    console.log(`Skills: ${student.skills.join(", ")}`);
});

// Can JSON hold null and Boolean values? yes it can as her         ID: 102,
        // name: "ehab",
        // age: 24,
        // address: null,

// What are the differences between XML and JSON?
// xml: Markup language with nested tags.	json: Key-value pairs in a lightweight format.
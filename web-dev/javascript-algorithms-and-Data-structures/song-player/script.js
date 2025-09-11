const playlistSongs = document.getElementById("playlist-songs");
const playButton = document.getElementById("play");
const pauseButton = document.getElementById("pause");
const nextButton = document.getElementById("next");
const previousButton = document.getElementById("previous");
const shuffleButton = document.getElementById("shuffle");

const allSongs = [
  {
    id: 0,
    title: "surat altariq",
    reciter: "yasir adosri",
    duration: "1:16",
    src: "./songs/surat_alrariq.mp3" 
  },
  {
    id: 1,
    title: "surat aljumua",
    reciter: "mohamed aba hasan",
    duration: "6:01",
    src: "./songs/surat_aljumua.mp3"
  },
  {
    id: 2,
    title: "surat_alnisaa",
    reciter: "mohamed ayoub",
    duration: "10:39",
    src: "./songs/surat_alnisaa.mp3
  }

]

const audio = new Audio();
let userData = {
  songs: [...allSongs],
  currentSong: null,
  songCurrentTime: 0,
};


const printGreeting = () => {
  console.log("Hello there!")
}

const renderSongs = (array) => {
  const songsHTML = array.map();
}







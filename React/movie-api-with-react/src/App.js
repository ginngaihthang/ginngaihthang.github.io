import {useEffect} from 'react';

const API_URL = "http:ww.omdbapi.com?apiKey=c032e2d7"
const App = () => {
    const searchMovies = async (title) => {
        const response = await fetch(`${API_URL}&s=$(title)`);
        const data = await response.json();

        console.log(data.Search)
    }
    useEffect(() => {
        searchMovies('Spiderman');

    },[])
    return {
        App
    };
}

export default App;
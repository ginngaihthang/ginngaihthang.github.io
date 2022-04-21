<template>
    <div class="movie">
        <div class="card my-3 bg-transparent border-0">
        <div class="row g-0">
            <div class="col-md-4">
            <img :src="moviedetail.Poster" class="img-fluid" alt="IMG Poster">
            </div>
            <div class="col-md-8 col-sm-12  col-12">
            <div class="card-body mt-md-5 ">
                <h5 class="card-title mb-0">{{moviedetail.Title}}</h5>
                <p class="card-text mb-0"><small>{{moviedetail.Language}}</small></p>
                <p class="card-text mb-0"><small>{{moviedetail.Plot}}</small></p>
                <p class="card-text mb-0"><small class="text-muted">Writer : {{moviedetail.Writer}}</small></p>
                <p class="card-text mb-0"><small class="text-muted">Actor : {{moviedetail.Actors}}</small></p>
                <p class="card-text mb-0"><small class="text-muted">Country:{{moviedetail.Awards}}</small></p>
                <p class="card-text mb-0"><small class="text-muted">Rerleased:{{moviedetail.Released}}</small></p>
            </div>
            </div>
        </div>
    </div>
    </div>
</template>

<script>
import venv from '@/venv.js';
const axios = require('axios').default;

export default {
    data(){
        return{
            moviedetail: "",
        }
    },
    mounted(){
            let id = this.$route.params.id
            axios.get(`https://www.omdbapi.com/?apikey=${venv.apikey}&i=${id}`)
                .then(response => {
                    this.moviedetail = response.data
                    console.log(this.moviedetail)
                })
        }
}
</script>
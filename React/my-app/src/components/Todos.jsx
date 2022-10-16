import React, { Component } from 'react';
import TodoItem from "./TodoItem";

class Todos extends Component {
  constructor(props) {
        super(props);
        this.state = {
          todos: [
            {
              id: 1,
              title: "learn react"
            },
            {
              id: 2,
              title: "practice react"
            }
          ]
        }
  }
  render = () => {
    return <div>
        
    </div>
  };
};


export default Todos;

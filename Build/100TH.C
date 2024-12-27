<!DOCTYPE html>
<html>
  <head>
    <style>
      .header {
        background-color: #ffa500;
        color: white;
        text-align: center;
        padding: 20px;
      }
      .header h1 {
        font-size: 50px;
        margin: 0;
      }
      .header h2 {
        font-size: 30px;
        margin: 0;
      }
      .menu {
        display: flex;
        flex-wrap: wrap;
        justify-content: space-between;
        padding: 20px;
      }
      .menu h3 {
        font-size: 30px;
        margin: 0;
      }
      .menu .item {
        width: 30%;
        text-align: center;
        margin-bottom: 20px;
      }
      .menu img {
        width: 100%;
        height: auto;
      }
    </style>
  </head>
  <body>
    <div class="header">
      <h1>Pizza Restaurant</h1>
      <h2>Fresh, Hot, and Delicious Pizzas</h2>
    </div>
    <div class="menu">
      <div class="item">
        <h3>Pepperoni Pizza</h3>
        <img src="pepperoni.jpg" alt="Pepperoni Pizza">
      </div>
      <div class="item">
        <h3>Vegetable Pizza</h3>
        <img src="vegetable.jpg" alt="Vegetable Pizza">
      </div>
      <div class="item">
        <h3>Margherita Pizza</h3>
        <img src="margherita.jpg" alt="Margherita Pizza">
      </div>
    </div>
  </body>
</html>


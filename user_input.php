<?php
if (array_key_exists('HTTP_X_ACCESS_TOKEN',$_SERVER)){
    if($_SERVER['HTTP_X_ACCESS_TOKEN']=='SECRET_TOKEN'){
        if($_SERVER['REQUEST_METHOD']=='POST'){
            if(array_key_exists('page',$_GET)){
                if (($_GET['page']=='page1') or ($_GET['page']=='page2') or ($_GET['page']=='page3')){
                    echo "<br>Запрошена страница[";
                    echo $_GET['page'];
                    echo "]";
                }else{
                    echo "Ошибка , недопустимая страница";
                    die();
                }
            }else{
                echo "Ошибка ,не задан тип страницы";
                die();
            }
        
            echo "<br>";echo "<br>";
        
            if (($_SERVER["CONTENT_TYPE"])=='application/x-www-form-urlencoded'){
                if(count($_POST)>0){
                    echo "Через Post передано ";
                    echo count($_POST);
                    echo " переменных";
                    echo "<br>";echo "<br>";
                    foreach (array_keys($_POST) as &$value) {
                        print("Значение[");
                        print($value);
                        print("] : ");
                        print($_POST[$value]);
                        echo "<br>";
                        echo "<br>";
                    }
                }else{
                    echo "Ошибка , данные не заданы";
                    die();
                }
            }else{
                echo "Ошибка , неверный тип данных";
                    die();
            }
        }else{
            echo "Запрещено ,неверный метод";
            die();
        }
    }else{
        echo "Запрещено, неверный токен";
        die();
    }
}else{
    echo "Запрещено, не задан токен";
    die();
}


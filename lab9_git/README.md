# Практическое задание 9. Git #

## Оценка 3 ##
On Branch main - в ветке main

<img width="612" height="142" alt="gitstatus" src="https://github.com/user-attachments/assets/db94cadf-26b9-44b9-8431-3fc17edcb678" />

В логе пока ничего нет, потому что ничего не скомитчено
<img width="956" height="72" alt="gitlog" src="https://github.com/user-attachments/assets/081b6748-4aa1-4099-9409-6103da449da0" />

Создали файл "sort.c"

<img width="442" height="48" alt="sort" src="https://github.com/user-attachments/assets/3bc95bf6-3fca-4e11-8cc1-4131ea476be6" />

Скопировали функцию сортировки из задания 7-ой лабораторной работы
<img width="1336" height="644" alt="sortc" src="https://github.com/user-attachments/assets/79b794c0-d1c6-4e10-8327-560d5cedd6b8" />

Вновь введёная команда git status ничего не дала, потому что до сих пор ничего не скомитчено
<img width="652" height="138" alt="gitstatus2" src="https://github.com/user-attachments/assets/10f7bdd5-3c7d-42fa-b5e8-837f84668fae" />

Добавили файл в область Stage (область между рабочей папкой и историей коммитов)
<img width="405" height="16" alt="gitadd" src="https://github.com/user-attachments/assets/2c434f52-c19b-4b2a-957d-ecccc6c7358c" />

Теперь в get Status видно, что был добавден новый файл - sort.c

<img width="438" height="123" alt="gitstatus3" src="https://github.com/user-attachments/assets/e1feef5c-a25a-47a5-b75f-feb0013ae43a" />

Закоммитили файл в репозиторий

<img width="464" height="252" alt="commit1" src="https://github.com/user-attachments/assets/4d53e8c6-ffef-4a81-a4d0-2f1686f98fcf" />
<img width="572" height="242" alt="commit2" src="https://github.com/user-attachments/assets/3925bef2-3ab1-4d51-9b56-a9a87f1eb173" />

Git status очистился

<img width="606" height="68" alt="gitstatus4" src="https://github.com/user-attachments/assets/a3da61db-6618-4545-8ddb-fcc55f47d4f1" />

Git status не изменился, потому что не было add или commit
<img width="1248" height="716" alt="newstroka" src="https://github.com/user-attachments/assets/25922556-8cdc-452b-8efe-559e8d5a1cba" />
<img width="626" height="70" alt="gitstatus5" src="https://github.com/user-attachments/assets/5e097028-a7c6-4185-97d8-f26d186df071" />

Добавились изменения
<img width="962" height="256" alt="gitadd2" src="https://github.com/user-attachments/assets/f54f36ac-5213-4b33-961e-7d864a7ae639" />
Изменили файл 3ий раз
<img width="1274" height="734" alt="izmeneniya3" src="https://github.com/user-attachments/assets/543c5da4-5af5-4aa0-9393-7fec0d76d983" />
Сделали коммит третий раз, но третья добавленная строка не сохранилась, потому что она не была добавлена через add
<img width="1212" height="684" alt="commit3" src="https://github.com/user-attachments/assets/f339f674-d3b9-4a0f-b5bb-83c4cde85132" />
git status показывает выше описанную ситуацию
<img width="1068" height="282" alt="gitstatus6" src="https://github.com/user-attachments/assets/73cabe06-9c8c-46e0-b673-e91ce0705099" />
git log (Журнал) - показывает историю коммитов
<img width="1036" height="598" alt="gitlog2" src="https://github.com/user-attachments/assets/56a8c680-b2ad-4a16-876b-fc66e3012a7d" />
закоммитили последние изменения
<img width="912" height="128" alt="commit4" src="https://github.com/user-attachments/assets/4bb85886-d33e-4b14-be3c-0c2ee57b183a" />
<img width="2806" height="778" alt="commit4c" src="https://github.com/user-attachments/assets/57b18ce1-94c1-4220-8d5d-0a90b0915a37" />

ВЕТКИ

Создадим новую ветку mybranch

<img width="301" height="32" alt="image" src="https://github.com/user-attachments/assets/adb670dc-d78d-4111-bab8-c21fec65be28" />

проверим, что она создалась

<img width="209" height="97" alt="Screenshot 2026-11-21 at 16 42 17" src="https://github.com/user-attachments/assets/d17534c2-f1a7-4107-a686-d5e2b3f6718a" />

переключимся на новую ветку

<img width="300" height="60" alt="image" src="https://github.com/user-attachments/assets/23a44107-5ced-45a7-afb5-d0a4a27a3c58" />
<img width="116" height="48" alt="Screenshot 2026-11-21 at 16 50 37" src="https://github.com/user-attachments/assets/34c1143c-a5d8-4508-9d9c-b2eeaf882d7a" />

после переключения на новую ветку git status показывает её

<img width="269" height="31" alt="image" src="https://github.com/user-attachments/assets/1aad8035-c780-405d-ac7b-9ee978b22874" />

создадим файл file1nikita.txt, добавим его и закоммитим

<img width="404" height="79" alt="image" src="https://github.com/user-attachments/assets/0b5d9bcb-5e8f-4dbf-a466-8d12a8270094" />

Используем git log --oneline --graph, чтобы увидеть, что наша ветка
указывает на новый коммит

<img width="323" height="33" alt="image" src="https://github.com/user-attachments/assets/11c27885-f39e-4e6d-bc0c-845606b38d5a" />

Вернёмся к ветке с именем main.

<img width="300" height="82" alt="image" src="https://github.com/user-attachments/assets/4a7cd727-5551-4f0d-bb7a-052280bb1a85" />

Используем git log --oneline --graph - последний коммит стал показывать коммит главной ветки, а не ветки mybranch

<img width="288" height="41" alt="image" src="https://github.com/user-attachments/assets/fa9f9592-4f35-49b7-ab66-80833261c2f8" />

Создадим новый файл с именем file2nikita.txt и закоммитим его

<img width="384" height="91" alt="image" src="https://github.com/user-attachments/assets/50258aff-4ae9-4862-afe0-6fb757fb012b" />

Используем git log --oneline --graph --all, чтобы увидеть, что наша ветка
указывает на новый коммит, и что теперь у двух веток разные коммиты

<img width="280" height="88" alt="image" src="https://github.com/user-attachments/assets/460ad28d-5e96-49a6-9ce0-301eba9ca05e" />

файлы в ветке main

<img width="242" height="141" alt="image" src="https://github.com/user-attachments/assets/aa637f82-d546-4a68-ac45-6df849fec503" />

переключаем на ветку mybranch

<img width="315" height="43" alt="image" src="https://github.com/user-attachments/assets/93a07954-1b73-4c87-9082-a3d42f99dbce" />

файлы в ветке mybranch (файл file2.txt пропал)

<img width="241" height="155" alt="image" src="https://github.com/user-attachments/assets/eb415cd0-3946-41ca-92f0-69b9b544d45f" />

Используем git diff mybranch main, чтобы увидеть разницу между
двумя ветками (первый diff показывает, что file1nikita.txt удаляется при переключении с одной ветки в другую, а второй diff показывает, что file1.txt переименовывается в file2nikita.txt (переименовывается потому что внутри них ничего нет)

<img width="426" height="128" alt="image" src="https://github.com/user-attachments/assets/58b4fdbe-8bd0-4679-bd07-a6c9d4dfab1a" />

Добавим текстовый документ со скриншотами в ветку mybranch
Закоммитим и запушим на удаленный репо ветку mybranch (git push -u origin mybranch)

<img width="399" height="69" alt="image" src="https://github.com/user-attachments/assets/c8d26572-1209-4f8a-99a8-36c0a2f517fd" />
<img width="464" height="336" alt="image" src="https://github.com/user-attachments/assets/2df2f47c-d3b5-46aa-81f9-a69e49d3e976" />

также запушим изменения в ветке main

<img width="353" height="105" alt="image" src="https://github.com/user-attachments/assets/35c149ac-b9b9-4523-8676-cfb6ee3b7fe4" />

Убедимся, что в github.com две ветки main и mybranch

ветка main
<img width="1591" height="327" alt="Screenshot 2026-11-21 at 17 40 03" src="https://github.com/user-attachments/assets/270370bf-d7ae-4a75-8e5a-13f96a854341" />

ветка mybranch
<img width="1595" height="525" alt="Screenshot 2026-11-21 at 17 40 34" src="https://github.com/user-attachments/assets/8a6220f9-8289-4930-bc78-e598646e3ac7" />


<img width="400" height="54" alt="Screenshot 2026-11-21 at 17 40 42" src="https://github.com/user-attachments/assets/d50a497e-8f35-40c2-9f92-ec2ac20f2c21" />

## Оценка 4 ##

переключаемся на ветку mybranch

<img width="465" height="92" alt="image" src="https://github.com/user-attachments/assets/521d5f70-7360-4eff-af28-6816aae22f25" />

Перезапишем содержимое в sort.c добавив функцию main(), в которой
будет объявлен массив из нескольких чисел и
вызвана функция сортировки для этого массива

<img width="576" height="658" alt="image" src="https://github.com/user-attachments/assets/7b56a364-524b-43aa-b2a2-bb796120e305" />

вводим git diff и смотрим, что он выдаёт(+ = добавленные строчки, - = убранные строчки)

<img width="641" height="678" alt="image" src="https://github.com/user-attachments/assets/4e489ac2-f184-4df5-84ca-f268033e92d8" />

git diff --staged - пустой потому что в индексе нет изменений, готовых к коммиту

<img width="458" height="113" alt="image" src="https://github.com/user-attachments/assets/d84fcf1e-ccbe-4471-ad46-b248604dea49" />

Добавим в staged файл sort.c

<img width="352" height="63" alt="image" src="https://github.com/user-attachments/assets/aff992a4-5689-4821-96bf-ebba4c6b94a3" />

теперь git diff пустой

<img width="383" height="207" alt="image" src="https://github.com/user-attachments/assets/1350bdb9-37e8-48d0-9647-f4392a87342b" />

git diff --staged теперь показывает удалённые и добавленные строки

<img width="521" height="569" alt="image" src="https://github.com/user-attachments/assets/488864a5-b7c8-4ac1-84e4-7f8d7e7921c9" />

Удаляем любое из чисел в массиве в sort.c

<img width="680" height="396" alt="udal" src="https://github.com/user-attachments/assets/140c038d-271a-43cf-8908-d661debdecb2" />

git diff показывает, что число из массива убрано

<img width="396" height="222" alt="image" src="https://github.com/user-attachments/assets/1c314e6f-0a32-471a-a9dc-a1004c3b1e54" />

git diff -- staged не поменялся потому что изменение не было добавлено через git add

<img width="533" height="571" alt="image" src="https://github.com/user-attachments/assets/2f1a3f02-8e52-4071-b00a-6161de0789e3" />

git status показывает sort.c два раза

<img width="532" height="304" alt="image" src="https://github.com/user-attachments/assets/17f4e09e-3109-4378-a044-564be62cb0e6" />

Запустим git restore --staged sort.c, чтобы отменить индексацию
изменения, теперь git status показывает только один sort

 <img width="537" height="276" alt="image" src="https://github.com/user-attachments/assets/0f27a4a2-1f02-42db-af05-3930357c2aa1" />

индоссируем изменения и коммитим их

<img width="637" height="151" alt="image" src="https://github.com/user-attachments/assets/6d9586b4-da55-4d02-8f7e-477f3f046dc0" />

в журнал (git log) добавился новый коммит

<img width="513" height="90" alt="image" src="https://github.com/user-attachments/assets/d76bc9b8-5ea9-437b-99db-7b09b26b1252" />

Добавим в sort.c в main() printf(“hello git\n”);

<img width="662" height="406" alt="Screen Recording 2026-11-23 at 18 55 53 2" src="https://github.com/user-attachments/assets/5794701e-1083-490f-9b8d-42975ba6e07b" />

теперь содержание sort.c выглядит так

<img width="434" height="420" alt="image" src="https://github.com/user-attachments/assets/3fc23dbc-e731-4a7f-8d50-6730cbddcd89" />

git status

<img width="541" height="188" alt="image" src="https://github.com/user-attachments/assets/a8256cd9-6635-409c-bbdc-c24b8fdaa295" />

git restore sort.c

<img width="378" height="42" alt="image" src="https://github.com/user-attachments/assets/5342f73a-d442-499d-b782-dfa29cb0e93a" />

содержание sort.c поменялось (пропала строка printf(“hello git\n”);)

<img width="386" height="400" alt="image" src="https://github.com/user-attachments/assets/aeb109d2-a305-412c-a78b-4345f9c68d9a" />

изменение (добавленная строка) пропало

<img width="416" height="96" alt="image" src="https://github.com/user-attachments/assets/2bf924ae-3671-41ed-b40a-f057ba761953" />

запушим изменения на удалённый репо

<img width="520" height="169" alt="image" src="https://github.com/user-attachments/assets/61c3c12c-0671-4a85-8aa8-38319ee29962" />


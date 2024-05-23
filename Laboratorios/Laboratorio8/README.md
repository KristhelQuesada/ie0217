# Laboratorio 8: Introduccion a SQL


## Resumen
Este laboratorio tiene el objetivo de practicar comandos basicos de SQL, mediante la plataforma de https://www.sql-practice.com/. Para el desarrollo del mismo, se realizaron grupos de cuatro integrantes con el fin de realizar cuatro problemas por persona. La plataforma contiene dos bases de datos y ejercicios de dificultad facil, media y dificl, por lo que se busco desarrollar solamente ejercicios de dificultad media y dificil de cada base de datos. A continuacion se resumen los nombres de los integrantes.

__BREAKROOM 6__

1. Evelyn Feng, B82870
2. Gabriel Angulo, B90457
3. Santigo Herra, C13721
4. Kristhel Quesada, C06153

<br>


## Bases de datos analizadas


## Problemas desarrollados
### Evelyn Feng

#### 1. [__northwind.db, Facil__] Show all the contact_name, address, city of all customers which are not from 'Germany', 'Mexico', 'Spain'.

<details>
<summary> Solucion 2 </summary>

```sql 
SELECT contact_name, address, city
FROM customers
WHERE Country NOT IN ('Germany','Mexico', 'Spain')
```

</details>

#### 2. [__northwind.db, Facil__] Show the city, company_name, contact_name of all customers from cities which contains the letter 'L' in the city name, sorted by contact_name

<details>
<summary> Solucion 2 </summary>

```sql 
SELECT city, company_name, contact_name
FROM customers
WHERE city LIKE '%L%'
ORDER BY contact_name
```

</details>

#### 3. [__northwind.db, Media__] Show the city, company_name, contact_name from the customers and suppliers table merged together. Create a column which contains 'customers' or 'suppliers' depending on the table it came from.

<details>
<summary> Solucion 3 </summary>

```sql 
SELECT 
	city
    ,company_name
    ,contact_name
    -- Show customers for this data
    ,'customers' AS type
FROM customers

-- Merge tables
UNION

SELECT
	city
    ,company_name
    ,contact_name
    -- Show suppliers for this data
    ,'suppliers' AS type
FROM suppliers
```

</details>

#### 4. Show the employee's first_name and last_name, a "num_orders" column with a count of the orders taken, and a column called "Shipped" that displays "On Time" if the order shipped_date is less or equal to the required_date, "Late" if the order shipped late. Order by employee last_name, then by first_name, and then descending by number of orders.


<details>
<summary> Solucion 4 </summary>

```sql 
SELECT
	e.first_name
	,e.last_name
	,COUNT(o.order_id) As num_orders
    -- Displays "On Time" if the order shipped_date is less or equal to the required_date, else display "Late"
	,(
		CASE
    		WHEN o.shipped_date <= o.required_date THEN 'On Time'
    		ELSE 'Late'
  		END
	) AS shipped
FROM employees e
LEFT JOIN orders o 
ON e.employee_id = o.employee_id

-- Grouping to count show order count
GROUP BY
	e.first_name
	,e.last_name
	,shipped

-- Order by employee last_name, then by first_name, and then descending by number of orders.
ORDER BY
	e.last_name
	,e.first_name
	,num_orders DESC
```

</details>

<br>



### Gabriel Angulo
#### 1. [__hospital.db, Media__] Show patient_id, attending_doctor_id, and diagnosis for admissions that match one of the two criteria:

- patient_id is an odd number and attending_doctor_id is either 1, 5, or 19.
- attending_doctor_id contains a 2 and the length of patient_id is 3 characters.

<details>
<summary> Solucion 1 </summary>

```sql
SELECT 
	patient_id
    ,attending_doctor_id
    ,diagnosis
FROM 
	admissions
WHERE 
	-- If patient_id is an odd number and attending_doctor_id is either 1, 5, or 19
	(patient_id % 2 != 0 AND attending_doctor_id IN (1, 5, 19))
    -- OR If attending_doctor_id contains a 2 and the length of patient_id is 3 characters
    OR (attending_doctor_id LIKE '%2%' AND LEN(patient_id) = 3)

```

</details>



#### 2. [__hospital.db, Media__] Display every patient's first_name. Order the list by the length of each name and then by alphabetically.

<details>
<summary> Solucion 2 </summary>

```sql 
SELECT first_name
FROM patients
order by
  len(first_name),
  first_name;
```

</details>



#### 3. [__hospital.db, Dificil__] We are looking for a specific patient. Pull all columns for the patient who matches the following criteria:

- First_name contains an 'r' after the first two letters.
- Identifies their gender as 'F'
- Born in February, May, or December
- Their weight would be between 60kg and 80kg
- Their patient_id is an odd number
- They are from the city 'Kingston

<details>
<summary> Solucion 3 </summary>

```sql 
SELECT *
FROM patients
WHERE
	-- Contains r after the first two letters
	first_name LIKE '__r%'
    -- Identifies gender as F
    AND gender = 'F'
    -- Born in February, May, or December
    AND MONTH(birth_date) IN (2, 5, 12)
    -- Weight between 60 and 80
    AND weight between 60 AND 80
    -- patiend_id is odd
    AND patient_id % 2 != 0
    -- City is Kingston
    AND city = 'Kingston'
```

</details>


#### 4. [__hospital.db, Dificil__] Show the provinces that has more patients identified as 'M' than 'F'. Must only show full province_name.

<details>
<summary> Solucion 4 </summary>

```sql 
SELECT pr.province_name
FROM patients AS pa
  JOIN province_names AS pr ON pa.province_id = pr.province_id
GROUP BY pr.province_name
HAVING
  SUM(gender = 'M') > SUM(gender = 'F');

```

</details>

<br>



### Santiago Herra

#### 1. [__hospital.db, Dificil__] Show patient_id, first_name, last_name from patients whos diagnosis is 'Epilepsy' and doctors first name is 'Lisa'.

<details>
<summary> Solucion 2 </summary>

```sql 
SELECT 
pa.patient_id,
pa.first_name,
pa.last_name,
doc.specialty
FROM 
patients pa,
doctors doc,
admissions ad

where 
pa.patient_id = ad.patient_id
and ad.attending_doctor_id = doc.doctor_id
and ad.diagnosis = 'Epilepsy' AND doc.first_name = 'Lisa'

```

</details>

#### 2. [__hospital.db, Dificil__] Primary diagnosis is stored in the admissions table. Show patient_id, weight, height, isObese from the patients table. Display isObese as a boolean 0 or 1. Obese is defined as weight(kg)/(height(m)2) >= 30. weight is in units kg. height is in units cm.


<details>
<summary> Solucion 2 </summary>

```sql 
SELECT 
patient_id,
weight,
height,
weight,
weight/Power(CASt(height as float) / 100,2) >= 30 AS isObese
from
patients
```

</details>

#### 3. [__hospital.db, Dificil__] Show the percent of patients that have 'M' as their gender. Round the answer to the nearest hundreth number and in percent form.

<details>
<summary> Solucion 3 </summary>

```sql 
SELECT CONCAT(
    ROUND(
      (
        SELECT COUNT(*)
        FROM patients
        WHERE gender = 'M'
      ) / CAST(COUNT(*) as float),
      4
    ) * 100,
    '%'
  ) as percent_of_male_patients
FROM patients;
```

</details>

#### 4. [__northwind.db, Media__] Show the category_name and the average product unit price for each category rounded to 2 decimal places.

<details>
<summary> Solucion 4 </summary>

```sql 
SELECT 
c.category_name,
ROUND(AVG(prod.unit_price),2) AS average_product_unit_price
from 
products prod
join categories c on c.category_id=prod.category_id
group by c.category_name

```

</details>

<br>


### Kristhel Quesada

#### 1. [__hospital.db, Media__] Display patient's full name, height in the units feet rounded to 1 decimal, weight in the unit pounds rounded to 0 decimals, birth_date, gender non abbreviated. Convert CM to feet by dividing by 30.48. Convert KG to pounds by multiplying by 2.205.

<details>
<summary> Solucion 2 </summary>

```sql 
-- Change the titles
select
	-- change to full name
    concat(first_name, ' ', last_name) AS 'patient_name', 
    -- conversions
    ROUND(height / 30.48, 1) as 'height "Feet"', 
    ROUND(weight * 2.205, 0) AS 'weight "Pounds"', birth_date,
    -- change to non abbreviated
	CASE
		WHEN gender = 'M' THEN 'MALE' 
  		WHEN gender = 'F' THEN 'FEMALE' 
	END AS 'gender_type'
from patients
```

</details>

#### 2. [__hospital.db, Dificil__] Each admission costs $50 for patients without insurance, and $10 for patients with insurance. All patients with an even patient_id have insurance. Give each patient a 'Yes' if they have insurance, and a 'No' if they don't have insurance. Add up the admission_total cost for each has_insurance group.

<details>
<summary> Solucion 2 </summary>

```sql
SELECT
-- Find if even (has insurance) or odd (doesn't have)
CASE
	WHEN patient_id % 2 = 0 THEN 'Yes'
    WHEN patient_id % 2 != 0 THEN 'No'
END AS has_insurance,
-- Then create a sum per patient and condition
SUM(
  CASE
	WHEN patient_id % 2 = 0 THEN 10
  	ELSE 50
END)
as admission_total
-- Extract the data form admission
FROM admissions
-- Order it by
group by has_insurance
```

</details>

#### 3. [__hospital.db, Dificil__] We need a breakdown for the total amount of admissions each doctor has started each year. Show the doctor_id, doctor_full_name, specialty, year, total_admissions for that year.

<details>
<summary> Solucion 3 </summary>

```sql 

```

</details>

#### 4. [__northwind.db, Dificil__]

<details>
<summary> Solucion 4 </summary>

```sql
SELECT
  -- doctor ID
  d.doctor_id as doctor_id,
  -- doctor full name
  CONCAT(d.first_name,' ', d.last_name) as doctor_name,
  -- speciality
  d.specialty,
  -- Extract the year only
  YEAR(a.admission_date) as selected_year,
  -- Counts based on what GROUP BY contains
  COUNT(*) as total_admissions
-- extract it from doctors and rename it as d
-- also combines two tables to match doctors id
FROM doctors as d
  LEFT JOIN admissions as a ON d.doctor_id = a.attending_doctor_id
-- Organize data as
GROUP BY
  doctor_name,
  selected_year
ORDER BY doctor_id, selected_year
```

</details>
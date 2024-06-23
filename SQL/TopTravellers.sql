Select U.name, IFNULL(sum(R.distance),0) as travelled_distance
From Users U
LEFT JOIN Rides R
ON U.id = R.user_id
GROUP BY R.user_id
ORDER BY travelled_distance DESC, U.name ASC;
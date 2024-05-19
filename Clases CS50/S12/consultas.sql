SELECT * FROM people; --Huele a peligro

SELECT * FROM people WHERE people.name = "Steve Carell"

SELECT *
FROM shows
WHERE shows.title = "The Office" AND shows.year = 2005;


SELECT shows.title
FROM shows
WHERE shows.id IN (	SELECT stars.show_id
					FROM stars
					WHERE stars.person_id = (SELECT people.id
                                             FROM people
                                             WHERE people.name = "Steve Carell"));

SELECT people.name, shows.title, shows.year, shows.episodes
FROM people
JOIN stars ON people.id = stars.person_id
JOIN shows ON stars.show_id = shows.id
WHERE people.name = "Steve Carell";

# Cargar variables desde el .env si existe
include .env
export

# 🟢 Producción (desde raíz)
up-prod:
	docker compose up --build -d

down-prod:
	docker compose down

logs-prod:
	docker compose logs -f

clean-prod:
	docker compose down -v --remove-orphans


# 🛠️ Desarrollo (solo php-crud y dependencias)
up-dev:
	docker compose -f ./php-crud/compose.yaml --env-file .env up --build -d

down-dev:
	docker compose -f ./php-crud/compose.yaml down

logs-dev:
	docker compose -f ./php-crud/compose.yaml logs -f

clean-dev:
	docker compose -f ./php-crud/compose.yaml down -v --remove-orphans

config-dev:
	docker compose -f ./php-crud/compose.yaml --env-file .env config
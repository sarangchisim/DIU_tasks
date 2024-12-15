class Transport:
    def calculate_cost(self, weight, distance):
        raise NotImplementedError("Subclasses must implement this method")


class Truck(Transport):
    def calculate_cost(self, weight, distance):
        base_cost = 50
        cost_per_km = 2
        cost_per_kg = 1
        return base_cost + (cost_per_km * distance) + (cost_per_kg * weight)


class Ship(Transport):
    def calculate_cost(self, weight, distance):
        base_cost = 100
        cost_per_km = 1
        cost_per_kg = 0.5
        return base_cost + (cost_per_km * distance) + (cost_per_kg * weight)


class Plane(Transport):
    def calculate_cost(self, weight, distance):
        base_cost = 200
        cost_per_km = 5
        cost_per_kg = 3
        return base_cost + (cost_per_km * distance) + (cost_per_kg * weight)


def calculate_delivery_costs(transports, weight, distance):
    for transport in transports:
        cost = transport.calculate_cost(weight, distance)
        print(f"{transport.__class__.__name__} delivery cost: ${cost:.2f}")


##test
if __name__ == "__main__":
    truck = Truck()
    ship = Ship()
    plane = Plane()

    transports = [truck, ship, plane]

    weight = 250
    distance = 800

    print("Delivery Costs:")
    calculate_delivery_costs(transports, weight, distance)

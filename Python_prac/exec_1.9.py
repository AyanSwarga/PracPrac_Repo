price_per_meal = int(input("enter price per meal " "$ "))
tip_off = int(input("enter percentage tip ""% "))
percentage_off = (tip_off/100)*price_per_meal

print("actual price = ", "$", price_per_meal, sep="")

print("tip = ", tip_off,"%, ", "this means ""$", percentage_off, " off", sep="")

print("current price = ", "$", price_per_meal-percentage_off, sep="")

packs = int(input("how many packs of food do you want ? "))
actual_price = price_per_meal * packs
tip = percentage_off * packs
current_price = (price_per_meal-percentage_off) * packs

print("the actual price for ", packs, " packs of food is"" $", actual_price, sep="")

print("the tip for ", packs, " packs of food is"" $", tip, sep="")

print("the current price for", packs, " packs of food is"" $", current_price, sep="")
print("thanks")

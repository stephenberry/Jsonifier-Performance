import json
import os
import seaborn as sns
import matplotlib.pyplot as plt
import pandas as pd 

# Load data from Results.json
with open('Results.json', 'r') as file:
    data = json.load(file)

# Create a folder for saving graphs
output_folder = 'Graphs'
os.makedirs(output_folder, exist_ok=True)

# Iterate through tests
for test in data:
    # Convert data to a DataFrame
    df = pd.DataFrame(test["results"])

    # Creating a grouped bar plot with individually colored bars
    sns.set_style("dark")
    plt.figure(figsize=(10, 6))
    ax = plt.gca()

    for i, library in enumerate(df["libraryName"].unique()):
        library_data = df[df["libraryName"] == library]
        for j, result_type in enumerate(library_data["resultType"].unique()):
            result_data = library_data[library_data["resultType"] == result_type]
            color = result_data["color"].iloc[0]  # Use the color of the first row
            ax.bar(i + j * 0.2, result_data["resultSpeed"].iloc[0], width=0.2, color=color, label=result_type)

    ax.set_xticks(range(len(df["libraryName"].unique())))
    ax.set_xticklabels(df["libraryName"].unique())
    ax.set_title(f'{test["testName"]} Results')
    ax.set_xlabel('Library Name')
    ax.set_ylabel('Result Speed MB/s')  # Change the y-axis label

    # Create a custom legend
    handles, labels = ax.get_legend_handles_labels()
    ax.legend(handles, labels, title='Result Type', loc='upper right')

    # Save the figure as a PNG file
    output_file_path = os.path.join(output_folder, f'{test["testName"]}_Results.png')
    plt.savefig(output_file_path)

    plt.show()

    print('Graphs saved successfully in the "Graphs" folder.')

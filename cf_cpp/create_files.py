import os
import sys

def create_files(base_name):
    input_dir = "input"
    output_dir = "output"
    input_file = os.path.join(input_dir, f"{base_name}_in.txt")
    output_file = os.path.join(output_dir, f"{base_name}_out.txt")

    os.makedirs(input_dir, exist_ok=True)
    os.makedirs(output_dir, exist_ok=True)

    if not os.path.exists(input_file):
        with open(input_file, "w") as f:
            f.write("")  # Create an empty input file
        print(f"Created: {input_file}")
    else:
        print(f"Input file already exists: {input_file}")

    if not os.path.exists(output_file):
        with open(output_file, "w") as f:
            f.write("")  # Create an empty output file
        print(f"Created: {output_file}")
    else:
        print(f"Output file already exists: {output_file}")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python create_files.py <base_name>")
        sys.exit(1)
    
    base_name = sys.argv[1]
    create_files(base_name)

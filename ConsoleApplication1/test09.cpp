template<size_t n> using reference_to_array = int(&)[n];

reference_to_array<3> f()
{
	static int a[] = { 1, 10, 100 };
	return a;
}

int main()
{
	const auto& r = f();
}

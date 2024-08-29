#include <libCargparse.hxx>
#include <vector>
#include <filesystem>
#include <JSON.hxx>
#include <util.hxx>

void carghandler_unknown(CARGPARSE_UNKOWNHANDLER_ARGS) {
}

extern std::string out;
extern std::string in;
void carghandler_out(CARGPARSE_HANDLER_ARGS) {
	out = args.front();
	if(out.back() != '/')out.push_back('/');
}
void carghandler_in(CARGPARSE_HANDLER_ARGS) {
	in = args.front();
	if(in.back() != '/')in.push_back('/');
}

void process();
int main(int argc, char** argv) {
	//.
	//. process command line options
	//.
	cargparse::instance carg;{
		carg.unknownHandler = &carghandler_unknown;
		carg.addParameter(true,1,"-out",&carghandler_out);
		carg.addParameter(true,1,"-in",&carghandler_in);
	}carg.parse(argc,argv);
	process();
	std::cout << "doc compiler done." << std::endl;
}

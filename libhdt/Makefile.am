SUBDIRS = . tools tests

AUTOMAKE_OPTIONS = subdir-objects

include_HEADERS = \
	include/ControlInformation.hpp\
	include/Dictionary.hpp\
	include/HDTEnums.hpp\
	include/HDT.hpp\
	include/HDTListener.hpp\
	include/HDTManager.hpp\
	include/HDTSpecification.hpp\
	include/HDTVersion.hpp\
	include/HDTVocabulary.hpp\
	include/Header.hpp\
	include/Iterator.hpp\
	include/RDF.hpp\
	include/RDFParser.hpp\
	include/RDFSerializer.hpp\
	include/SingleTriple.hpp\
	include/Triples.hpp

lib_LTLIBRARIES = libhdt.la
libhdt_la_SOURCES = \
src/bitsequence/BitSequence375.cpp \
src/dictionary/BaseFourSectionDictionary.cpp \
src/dictionary/BaseKyotoDictionary.cpp \
src/dictionary/BaseLiteralDictionary.cpp \
src/dictionary/BasePlainDictionary.cpp \
src/dictionary/BaseReificationDictionary.cpp \
src/dictionary/GraphsDictionary.cpp \
src/dictionary/GraphsFourSectionDictionary.cpp \
src/dictionary/GraphsKyotoDictionary.cpp \
src/dictionary/GraphsLiteralDictionary.cpp \
src/dictionary/GraphsPlainDictionary.cpp \
src/dictionary/ModifiableReificationDictionary.cpp \
src/dictionary/QueryableReificationDictionary.cpp \
src/dictionary/TriplesFourSectionDictionary.cpp \
src/dictionary/TriplesKyotoDictionary.cpp \
src/dictionary/TriplesLiteralDictionary.cpp \
src/dictionary/TriplesPlainDictionary.cpp \
src/dictionary/TripleTranslator.cpp \
src/hdt/BasicHDT.cpp \
src/hdt/BasicModifiableHDT.cpp \
src/hdt/ControlInformation.cpp \
src/hdt/DictionaryLoader.cpp \
src/hdt/HDTFactory.cpp \
src/hdt/HDTManager.cpp \
src/hdt/HDTSpecification.cpp \
src/hdt/ReificationDictionaryLoader.cpp \
src/hdt/TripleIDStringIterator.cpp \
src/hdt/TriplesDictionaryLoader.cpp \
src/header/PlainHeader.cpp \
src/huffman/huff.cpp \
src/huffman/Huffman.cpp \
src/libdcs/CSD_Cache2.cpp \
src/libdcs/CSD_Cache.cpp \
src/libdcs/CSD.cpp \
src/libdcs/CSD_FMIndex.cpp \
src/libdcs/CSD_HTFC.cpp \
src/libdcs/CSD_PFC.cpp \
src/libdcs/fmindex/SSA.cpp \
src/libdcs/fmindex/SuffixArray.cpp \
src/libdcs/VByte.cpp \
src/permutation/PermutationMRRR.cpp \
src/rdf/RDF.cpp \
src/rdf/RDFParser.cpp \
src/rdf/RDFParserNtriples.cpp \
src/rdf/RDFParserSerd.cpp \
src/rdf/RDFSerializer.cpp \
src/rdf/RDFSerializerNTriples.cpp \
src/rdf/RDFSerializerSerd.cpp \
src/sequence/AdjacencyList.cpp \
src/sequence/ArraySequence.cpp \
src/sequence/HuffmanSequence.cpp \
src/sequence/IntSequence.cpp \
src/sequence/LogSequence2.cpp \
src/sequence/LogSequence.cpp \
src/sequence/WaveletSequence.cpp \
src/sparql/IndexJoinBinding.cpp \
src/sparql/JoinAlgorithms.cpp \
src/sparql/MergeJoinBinding.cpp \
src/sparql/QueryProcessor.cpp \
src/sparql/SortBinding.cpp \
src/sparql/TriplePatternBinding.cpp \
src/triples/BitmapQuadIteratorSingle.cpp \
src/triples/BitmapQuadIteratorWrapper.cpp \
src/triples/BitmapQuads.cpp \
src/triples/BitmapTriples.cpp \
src/triples/BitmapTriplesIterators.cpp \
src/triples/PlainTriples.cpp \
src/triples/predicateindex.cpp \
src/triples/QuadsList.cpp \
src/triples/SingleQuad.cpp \
src/triples/SingleTriple.cpp \
src/triples/TripleIterators.cpp \
src/triples/TripleListDisk.cpp \
src/triples/TripleOrderConvert.cpp \
src/triples/TriplesComparator.cpp \
src/triples/TriplesKyoto.cpp \
src/triples/TriplesList.cpp \
src/triples/TriplesLoader.cpp \
src/triples/TriplesQuadsList.cpp \
src/triples/TripleTranslatorIteratorWrapper.cpp \
src/util/bitutil.cpp \
src/util/crc16.cpp \
src/util/crc32.cpp \
src/util/crc8.cpp \
src/util/filemap.cpp \
src/util/fileUtil.cpp \
src/util/getopt.c \
src/util/propertyutil.cpp \
src/util/StopWatch.cpp \
third/gzstream.cpp \
src/bitsequence/BitSeq.h\
src/bitsequence/BitSequence375.h\
src/huffman/huff.h\
src/huffman/Huffman.h\
src/libdcs/CSD_Cache2.h\
src/libdcs/CSD_Cache.h\
src/libdcs/CSD_FMIndex.h\
src/libdcs/CSD.h\
src/libdcs/CSD_HTFC.h\
src/libdcs/CSD_PFC.h\
src/libdcs/fmindex/SSA.h\
src/libdcs/fmindex/SuffixArray.h\
src/libdcs/hutucker/binarynode.h\
src/libdcs/hutucker/hutucker.h\
src/libdcs/VByte.h\
src/util/bitutil.h\
src/util/crc16.h\
src/util/crc32.h\
src/util/crc8.h\
src/util/filemap.h\
src/util/Histogram.h\
src/util/lru_cache.h\
src/util/mygetopt.h\
src/util/propertyutil.h\
third/gzstream.h\
src/dictionary/BaseFourSectionDictionary.hpp \
src/dictionary/BaseKyotoDictionary.hpp \
src/dictionary/BaseLiteralDictionary.hpp \
src/dictionary/BasePlainDictionary.hpp \
src/dictionary/BaseReificationDictionary.hpp \
src/dictionary/GraphsDictionary.hpp \
src/dictionary/GraphsFourSectionDictionary.hpp \
src/dictionary/GraphsKyotoDictionary.hpp \
src/dictionary/GraphsLiteralDictionary.hpp \
src/dictionary/GraphsPlainDictionary.hpp \
src/dictionary/ModifiableReificationDictionary.hpp \
src/dictionary/QueryableReificationDictionary.hpp \
src/dictionary/TriplesFourSectionDictionary.hpp \
src/dictionary/TriplesKyotoDictionary.hpp \
src/dictionary/TriplesLiteralDictionary.hpp \
src/dictionary/TriplesPlainDictionary.hpp \
src/dictionary/TripleTranslator.hpp \
src/hdt/BasicHDT.hpp\
src/hdt/BasicModifiableHDT.hpp\
src/hdt/DictionaryLoader.hpp \
src/hdt/HDTFactory.hpp\
src/hdt/ReificationDictionaryLoader.hpp \
src/hdt/TripleIDStringIterator.hpp\
src/hdt/TriplesDictionaryLoader.hpp \
src/header/PlainHeader.hpp\
src/permutation/Permutation.hpp \
src/permutation/PermutationMRRR.hpp \
src/rdf/RDFParserNtriples.hpp\
src/rdf/RDFParserSerd.hpp\
src/rdf/RDFSerializerNTriples.hpp\
src/rdf/RDFSerializerSerd.hpp\
src/sequence/AdjacencyList.hpp\
src/sequence/ArraySequence.hpp\
src/sequence/HuffmanSequence.hpp\
src/sequence/IntSequence.hpp\
src/sequence/LogSequence2.hpp\
src/sequence/LogSequence.hpp\
src/sequence/WaveletSequence.hpp\
src/sparql/BaseJoinBinding.hpp\
src/sparql/CachedBinding.hpp\
src/sparql/IndexJoinBinding.hpp\
src/sparql/JoinAlgorithms.hpp\
src/sparql/joins.hpp\
src/sparql/MergeJoinBinding.hpp\
src/sparql/QueryProcessor.hpp\
src/sparql/SortBinding.hpp\
src/sparql/TriplePatternBinding.hpp\
src/sparql/VarBindingInterface.hpp\
src/sparql/VarFilterBinding.hpp\
src/triples/BitmapQuadIteratorSingle.hpp \
src/triples/BitmapQuadIteratorWrapper.hpp \
src/triples/BitmapQuads.hpp \
src/triples/BitmapTriples.hpp\
src/triples/BitmapTriplesIterators.hpp \
src/triples/PlainTriples.hpp\
src/triples/predicateindex.hpp\
src/triples/QuadsList.hpp \
src/triples/SingleQuad.hpp \
src/triples/TripleIterators.hpp\
src/triples/TripleListDisk.hpp\
src/triples/TripleOrderConvert.hpp\
src/triples/TriplesComparator.hpp\
src/triples/TriplesKyoto.hpp\
src/triples/TriplesList.hpp\
src/triples/TriplesLoader.hpp \
src/triples/TriplesQuadsList.hpp \
src/triples/TripleTranslatorIteratorWrapper.hpp \
src/util/fdstream.hpp\
src/util/fileUtil.hpp\
src/util/StopWatch.hpp\
src/util/unicode.hpp\
third/fdstream.hpp

libhdt_la_CPPFLAGS = $(WARN_CFLAGS) -I$(top_builddir)/lib -I$(builddir)/include \
$(KYOTO_CFLAGS) $(SERD_CFLAGS) $(ZLIB_CFLAGS) $(EXTRAFLAGS)
libhdt_la_LDFLAGS = $(SERD_LIBS) $(ZLIB_LIBS) $(KYOTO_LIBS)
libhdt_la_LIBADD =

if WANTS_LIBCDS
libhdt_la_CPPFLAGS += -DHAVE_CDS -I$(top_builddir)/libcds/include
libhdt_la_LIBADD += $(top_builddir)/libcds/libcds.la
endif

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = hdt.pc

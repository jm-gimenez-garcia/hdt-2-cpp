/*
 * HDTRW.hpp
 *
 *  Created on: 11/08/2012
 *      Author: mck
 */

#ifndef HDTRW_HPP_
#define HDTRW_HPP_

#include <HDTSpecification.hpp>
#include <HDT.hpp>

#include <HDTVocabulary.hpp>
#include <RDFParser.hpp>

#include "HDTFactory.hpp"





namespace hdt {
	class TriplesDictionary;
	class ModifiableTriples;
	class Triples;
	class Header;
	class ProgressListener;
	class TripleTranslator;

class BasicModifiableHDT : public ModifiableHDT {
private:
	Header *header;
	TriplesDictionary *dictionary;
	ModifiableTriples *triples;
	HDTSpecification spec;
	string fileName;
	TripleTranslator* trTrans;

	void createComponents();

public:
	BasicModifiableHDT();

	BasicModifiableHDT(HDTSpecification &spec);

	virtual ~BasicModifiableHDT();

	Header *getHeader();

	TriplesDictionary *getDictionary();

	Triples *getTriples();

	void loadFromRDF(const char *fileName, string baseUri, RDFNotation notation, ProgressListener *listener = NULL);

	void loadFromHDT(std::istream &input, ProgressListener *listener = NULL);

	void loadFromHDT(const char *fileName, ProgressListener *listener = NULL);

    void mapHDT(const char *fileName, ProgressListener *listener = NULL);

	void saveToRDF(RDFSerializer &serializer, ProgressListener *listener = NULL, TripleString* patt=NULL);

	void saveToHDT(std::ostream &output, ProgressListener *listener = NULL);

	void saveToHDT(const char *fileName, ProgressListener *listener = NULL);

	void loadOrCreateIndex(ProgressListener *listener = NULL);

	void saveIndex(ProgressListener *listener = NULL);

	/*
	 * FROM RDFAccess
	 */

	/**
	 * @param subject
	 * @param predicate
	 * @param object
	 * @return
	 */
	IteratorTripleString *search(const char *subject, const char *predicate, const char *object, const char* graph=NULL);

	VarBindingString *searchJoin(vector<TripleString> &patterns, set<string> &vars);

	/**
	 *
	 * @param triples
	 */
	void insert(TripleString &triple);

	void insert(IteratorTripleString *triple);

	/**
	 * Deletes with pattern matching
	 *
	 * @param triples
	 */
	void remove(TripleString &triples);

	void remove(IteratorTripleString *triples);

    bool isIndexed() const {
        return false;
    }
};

}

#endif /* HDTRW_HPP_ */

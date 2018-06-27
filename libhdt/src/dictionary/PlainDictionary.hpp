/*
 * File: PlainDictionary.hpp
 * Last modified: $Date$
 * Revision: $Revision$
 * Last modified by: $Author$
 *
 * Copyright (C) 2012, Mario Arias, Javier D. Fernandez, Miguel A. Martinez-Prieto
 * All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *
 * Contacting the authors:
 *   Mario Arias:               mario.arias@gmail.com
 *   Javier D. Fernandez:       jfergar@infor.uva.es
 *   Miguel A. Martinez-Prieto: migumar2@infor.uva.es
 *
 */

#ifndef PLAINDICTIONARY_H_
#define PLAINDICTIONARY_H_

#include <Iterator.hpp>
#include <HDTSpecification.hpp>
#include <Dictionary.hpp>

#include <string.h>
#include <string>
#include <algorithm>
#include <fstream>
#include <iostream>

#ifndef WIN32
#include <ext/hash_map>
#else
#include <unordered_map>
#endif

//#define GOOGLE_HASH

#ifdef GOOGLE_HASH 
#include <sparsehash/sparse_hash_map>

using google::sparse_hash_map;      // namespace where class lives by default
using __gnu_cxx::hash;  // or __gnu_cxx::hash, or maybe tr1::hash, depending on your OS

#else

#ifndef WIN32
namespace std { using namespace __gnu_cxx; }
#endif

#endif


namespace hdt {


#ifdef GOOGLE_HASH 
typedef sparse_hash_map<const char *, DictionaryEntry *, hash<const char *>, str_cmp> DictEntryHash;
#else

#ifdef WIN32
/*typedef std::hash_map<const char *, DictionaryEntry *, hash<const char *>, str_cmp> DictEntryHash;*/
typedef unordered_map<const char *, DictionaryEntry *, hash<const char *>, str_cmp> DictEntryHash;
#else
typedef std::hash_map<const char *, DictionaryEntry *, __gnu_cxx::hash<const char *>, str_cmp> DictEntryHash;

#endif
#endif

typedef DictEntryHash::const_iterator DictEntryIt;


class PlainDictionary : public ModifiableDictionary {
private:
	std::vector<DictionaryEntry*> predicates;
	std::vector<DictionaryEntry*> shared;
	std::vector<DictionaryEntry*> subjects;
	std::vector<DictionaryEntry*> objects;
	DictEntryHash hashSubject;
	DictEntryHash hashPredicate;
	DictEntryHash hashObject;
	unsigned int mapping;
	uint64_t sizeStrings;

	//ControlInformation controlInformation;
	HDTSpecification spec;

// Public Interface
public:
	PlainDictionary();
	PlainDictionary(HDTSpecification &spec);
	~PlainDictionary();

	std::string idToString(const unsigned int id, const TripleComponentRole position)const;
	unsigned int stringToId(const std::string &str, const TripleComponentRole position)const;

    size_t getNumberOfElements();

    uint64_t size();

	unsigned int getNsubjects();
	unsigned int getNpredicates();
	unsigned int getNobjects();
	unsigned int getNshared();

	unsigned int getMaxID();
	unsigned int getMaxSubjectID();
	unsigned int getMaxPredicateID();
	unsigned int getMaxObjectID();

	void populateHeader(Header &header, string rootNode);
	void save(std::ostream &output, ControlInformation &ci, ProgressListener *listener = NULL);
	void load(std::istream &input, ControlInformation &ci, ProgressListener *listener = NULL);

	size_t load(unsigned char *ptr, unsigned char *ptrMax, ProgressListener *listener=NULL);

    void import(Dictionary *other, ProgressListener *listener=NULL);

    IteratorUCharString *getSubjects();
    IteratorUCharString *getPredicates();
    IteratorUCharString *getObjects();
    IteratorUCharString *getShared();

// ModifiableDictionary
	unsigned int insert(const std::string &str, const TripleComponentRole position);

	void startProcessing(ProgressListener *listener = NULL);
	void stopProcessing(ProgressListener *listener = NULL);

	string getType();
	unsigned int getMapping();

	void getSuggestions(const char *base, TripleComponentRole role, std::vector<string> &out, int maxResults);

    hdt::IteratorUCharString *getSuggestions(const char *prefix, TripleComponentRole role);

    hdt::IteratorUInt *getIDSuggestions(const char *prefix, TripleComponentRole role);

// Private methods
private:
	void insert(std::string entry, DictionarySection pos);

	void split(ProgressListener *listener = NULL);
	void lexicographicSort(ProgressListener *listener = NULL);
	void idSort();
	void updateIDs();

	const std::vector<DictionaryEntry*> &getDictionaryEntryVector(unsigned int id, TripleComponentRole position)const;

public:
	unsigned int getGlobalId(unsigned int mapping, unsigned int id, DictionarySection position)const;
	unsigned int getGlobalId(unsigned int id, DictionarySection position)const;
	unsigned int getLocalId(unsigned int mapping, unsigned int id, TripleComponentRole position)const;
	unsigned int getLocalId(unsigned int id, TripleComponentRole position)const;

	void convertMapping(unsigned int mapping);
	void updateID(unsigned int oldid, unsigned int newid, DictionarySection position);
};


class DictIterator : public IteratorUCharString {
private:
	std::vector<DictionaryEntry *> &vector;
    size_t pos;
public:
	DictIterator(std::vector<DictionaryEntry *> &vector) : vector(vector), pos(0){

	}
	virtual ~DictIterator() { }

	virtual bool hasNext() {
		return pos<vector.size();
	}

	virtual unsigned char *next() {
		return (unsigned char*)vector[pos++]->str;
	}

    virtual size_t getNumberOfElements() {
		return vector.size();
	}
};


}

#endif /* PLAINDICTIONARY_H_ */